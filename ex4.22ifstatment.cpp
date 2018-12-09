#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
int main()
{
 int grade;
 string finalgrade;
 cout << "Type in your grade: ";
 cin >> grade;
 if (grade > 90) finalgrade = "high pass";
 if (grade <=75 && grade>=60) finalgrade = "low pass";
 if (grade < 60) finalgrade = "fail";
 if (grade >75 && grade <=90) finalgrade = "pass";
 cout << finalgrade;
 return 0;
}
