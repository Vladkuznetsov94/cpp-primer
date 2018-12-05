#include <iostream>
int main()
{
    int aNumber;
    std::cout << "Type a number to know if it's odd or even: ";
    std::cin >> aNumber;
    if (aNumber % 2 == 0)
        std::cout << aNumber << " is even.";
    else
        std::cout << aNumber << " is odd.";
    return 0;
}
