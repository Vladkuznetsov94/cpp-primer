#include <iostream>
int main()
{
    //(a) -(30 * 3) + (21 / 5) = -86
    //(b) -30 + ((3 * 21) / 5) = -18
    //(c)  30 / 3 * 21 % 5 = 0
    //(d) -30 / 3 * 21 % 4 = -2
    std::cout << "Exercise 4_5 a complier result: " << -30 * 3 + 21 / 5 << std::endl;
    std::cout << "My result for a is -86" << std::endl;
    std::cout << "Exercise 4_5 b complier result: " << -30 + 3 * 21 / 5 << std::endl;
    std::cout << "My result for b is -18" << std::endl;
    std::cout << "Exercise 4_5 c complier result: " << 30 / 3 * 21 % 5 << std::endl;
    std::cout << "My result for c is 0" << std::endl;
    std::cout << "Exercise 4_5 d complier result: " << -30 / 3 * 21 % 4 << std::endl;
    std::cout << "My result for d is -2" << std::endl;
    return 0;
}
