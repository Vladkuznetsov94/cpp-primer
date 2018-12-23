#include <iostream>
int main()
{
    int v1,v2;
    std::string rsp;
    do {
        std::cout << "Enter two numbers: ";
        std::cin >> v1 >> v2;
        if (v1 > v2)
            std::cout << "First number (" << v1 << ") is bigger than second number (" << v2 << ")." << std::endl;
        else if (v2 > v1)
            std::cout << "Second number (" << v2 << ") is bigger than first number (" << v1 << ")." << std::endl;
        else if (v1 == v2)
            std::cout << "The numbers are equal." << std::endl;
        std::cout << "More? Yes or no?" << std::endl;;
        std::cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n' && rsp[0]!= 'N');
    return 0;
}
