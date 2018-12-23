#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
int main()
{
    cout << "Enter your score from 0 to 100: ";
    int score;
    cin >> score;
    vector<string> grade = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    if (score < 60)
        lettergrade = grade[0];
    else
        lettergrade = grade[(score - 50)/10];
    cout << "You grade is " << lettergrade << "." << std::endl;
    return 0;
}
