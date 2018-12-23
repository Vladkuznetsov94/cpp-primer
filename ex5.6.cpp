#include <iostream>
#include <vector>
int main()
{
    std::vector<std::string> grade = {"F", "D", "C", "B", "A", "A++"};
    std::cout << "Type in your score: ";
    int score;
    std::cin >> score;
    std::string lettergrade;
    (score < 60) ? lettergrade = grade[0] :
                   lettergrade = grade [(score - 50)/10];
    std::cout << "Your grade is " << lettergrade << std::endl;
    return 0;
}
