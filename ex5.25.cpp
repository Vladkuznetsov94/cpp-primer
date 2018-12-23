#include <iostream>
int main()
{
int value1, value2;
std::cout << "Type in two numbers: ";
while (std::cin >> value1 >> value2){
    try {
        if (value2 == 0) {
        throw std::runtime_error("Second number is zero!");
    }
}
    catch (std::runtime_error) {
        std::cout << "Can't divide by zero!" << std::endl;
        std::cout << "Try again? y or n." << std::endl;
        char response;
        std::cin >> response;
        if (response == 'n')
            break;
    }
}
std::cout << "First number divided by second: " << value1/value2;
return 0;
}
