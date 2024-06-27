#include <vector>
#include <map>
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm>

typedef std::map<std::string, std::vector<std::string>> HobbiesMap;

std::vector<std::string> findAllHobbyists(const std::string& hobby, const HobbiesMap& hobbies)
{
    std::vector<std::string> result;

    for (auto it = hobbies.begin(); it != hobbies.end(); ++it) {
        const std::string& name = it->first;
        const std::vector<std::string>& hobbyList = it->second;

        if (std::find(hobbyList.begin(), hobbyList.end(), hobby) != hobbyList.end()) {
            result.push_back(name);
        }
    }
    return result;
}

int main()
{
    HobbiesMap hobbies
    {
       {"Steve", {"Fashion", "Piano", "Reading"}},
       {"Patty", {"Drama", "Magic", "Pets"}},
       {"Chad", {"Puzzles", "Pets", "Yoga"}}
    };

    std::vector<std::string> hobbyists = findAllHobbyists("Yoga", hobbies);
    for (const std::string& hobbyist : hobbyists)
    {
        std::cout << hobbyist << std::endl;
    }
}
