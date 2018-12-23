#include <iostream>
int main()
{
    int value1, value2;
    std::cout << "Type in two numbers: ";
    std::cin >> value1 >> value2;
    if(value2 == 0)
        throw std::runtime_error ("Second number is zero.");
    std::cout << "First number divided by second: " << value1/value2;
    return 0;
}
