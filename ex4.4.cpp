#include <iostream>
int main()
{
    int ExpressionVersionMine = ((12/3) * 4) + (5 * 15) + ((24 % 4)/2);
    int ExpressionVersionComplier = 12/3 * 4 + 5 * 15 + 24 % 4/2;
    std::cout << "ExpressionVersionMine: " << ExpressionVersionMine << std::endl;
    std::cout << "ExpressionVersionComplier: " << ExpressionVersionComplier << std::endl;
    return 0;
}
