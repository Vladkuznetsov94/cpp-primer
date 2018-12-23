#include <iostream>
#include <vector>
int main()
{
   char character;
   unsigned aCnt = 0, eCnt = 0, yCnt = 0, uCnt = 0, iCnt = 0, oCnt = 0;
   while (std::cin >> character)
    if (character == 'a') {
        ++aCnt;
    }
    else if (character == 'e') {
        ++eCnt;
    }
    else if (character == 'y') {
        ++yCnt;
    }
    else if (character == 'u') {
        ++uCnt;
    }
    else if (character == 'i') {
        ++iCnt;
    }
   else if (character == 'o') {
        ++oCnt;
    }
    std::cout << "a: " << aCnt << std::endl;
    std::cout << "e: " << eCnt << std::endl;
    std::cout << "y: " << yCnt << std::endl;
    std::cout << "u: " << uCnt << std::endl;
    std::cout << "i: " << iCnt << std::endl;
    std::cout << "o: " << oCnt << std::endl;
    return 0;
}
