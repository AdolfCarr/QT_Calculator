#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;
    // Holds current value of calculation
    double calcVal = 0.0;

    // Will define if this was the last math button clicked
    bool divTrigger = false;
    bool multTrigger = false;
    bool addTrigger = false;
    bool subTrigger = false;
    static QRegularExpression reg; // Static QRegularExpression object

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
    void ClearScreen();
};
#endif // CALCULATOR_H
