#include "calculator.h"
#include "ui_calculator.h"
#include <QRegularExpression>

// Initialize static QRegularExpression object
QRegularExpression Calculator::reg("[-+]?[0-9.]*");

Calculator::Calculator(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // Put 0.0 in Display
    ui->Display->setText(QString::number(calcVal));

    // Will hold references to all the number buttons
    QPushButton *numButtons[10];

    // Cycle through locating the buttons
    for(int i = 0; i < 10; ++i){
        QString butName = "Button_" + QString::number(i);

        // Get the buttons by name and add to array
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);

        // When the button is released call num_pressed()
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    // Connect signals and slots for math buttons
    connect(ui->Button_add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Button_subs, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Button_mult, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Button_div, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    // Connect equals button
    connect(ui->Button_equal, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    // Connect change sign
    connect(ui->Button_sign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));

    connect(ui->Button_AC, SIGNAL(released()), this,
            SLOT(ClearScreen()));

    connect(ui->Button_M_Add, SIGNAL(released()), this,
            SLOT(MemoryAdd()));

    connect(ui->Button_M_Sub, SIGNAL(released()), this,
            SLOT(MemorySubtract()));

    connect(ui->Button_M, SIGNAL(released()), this,
            SLOT(MemoryRecall()));


}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed(){

    /*-----modify the NumPressed() function to correctly handle
     * the state when the memory value is displayed.------
     *
     * 'qobject_cast' to safely cast the sender object to QPushButton*.
     * This ensures that the sender is indeed a QPushButton, avoiding
     * potential crashes if the sender is not of the expected type.-*/

    // Sender returns a pointer to the button pressed
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    // Get number on button
    QString butVal = button->text();

    // Get the value in the display
    QString displayVal = ui->Display->text();

    // Check if display is showing memory value
    /*Before appending the pressed digit (butVal) to the display (displayVal),
     * the function checks if the current display value equals the memory value
     * (QString::number(memory)). If they match, it clears the display
     * (ui->Display->clear()) to start entering a new number.
     *
     * After ensuring the display is clear (if showing memory), it appends the
     * pressed digit (butVal) to the current display value (ui->Display->text()).
     *
     * Finally, it sets the updated displayVal to the display widget
     * (ui->Display->setText(displayVal)).
     *
     * ensure that you handle the state of the display correctly, especially when
     * transitioning from displaying one type of information (like memory) to
     * another (like entering a new number).
     *
    */
    if (displayVal == QString::number(memory)) {
        // Clear the display to start entering new number
        ui->Display->clear();
    }

    // Append the pressed number to the display
    displayVal = ui->Display->text() + butVal;

    // Update the display with the new value
    ui->Display->setText(displayVal);


    /*-------The NumPressed() function appends the pressed digit
     * to the current display value (displayVal). When the memory
     * value is displayed (after pressing M), the function should
     * clear the display and start displaying the newly pressed digits.-----------
     *

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get number on button
    QString butVal = button->text();

    // Get the value in the display
    QString displayVal = ui->Display->text();

    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){

        // calcVal = butVal.toDouble();
        ui->Display->setText(butVal);

    } else {
        // Put the new number to the right of whats there
        QString newVal = displayVal + butVal;

        // Double version of number
        double dblNewVal = newVal.toDouble();

        // Set value in display and allow up to 16
        // digits before using exponents
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));

    }
    */
}

void Calculator::MathButtonPressed(){

    // Cancel out previous math button clicks
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    // Store current value in Display
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get math symbol on the button
    QString butVal = button->text();

    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else {
        subTrigger = true;
    }

    // Clear display
    ui->Display->setText("");

}

void Calculator::EqualButtonPressed(){

    // Holds new calculation
    double solution = 0.0;

    // Get value in display
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    // Make sure a math button was pressed
    if(addTrigger || subTrigger || multTrigger || divTrigger ){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }

    // Put solution in display
    ui->Display->setText(QString::number(solution));

}

void Calculator::ChangeNumberSign(){

    // Get the value in the display
    QString displayVal = ui->Display->text();

    // Regular expression checks if it is a number
    QRegularExpressionMatch match = reg.match(displayVal);

    // If it is a number change the sign
    if(match.hasMatch()){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;

        // Put solution in display
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}

void Calculator::ClearScreen() {
    // Clear the display
    ui->Display->setText("0");

    // Reset the stored value
    calcVal = 0.0;

    // Reset all triggers
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
}

void Calculator::MemoryAdd() {
    QString displayVal = ui->Display->text();
    double currentDisplayVal = displayVal.toDouble();

    // Add current display value to memory
    memory += currentDisplayVal;
}

void Calculator::MemorySubtract() {
    QString displayVal = ui->Display->text();
    double currentDisplayVal = displayVal.toDouble();

    // Subtract current display value from memory
    memory -= currentDisplayVal;
}

void Calculator::MemoryRecall() {
    // Display the value stored in memory
    ui->Display->setText(QString::number(memory));
}
