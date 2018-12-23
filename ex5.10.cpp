#include <iostream>
int main()
{
   char character;
   unsigned aCnt = 0, eCnt = 0, yCnt = 0, uCnt = 0, iCnt = 0, oCnt = 0;
   while (std::cin >> character) {
        switch (character){
        case 'a':
        case 'A':
            ++aCnt;
            break;
        case 'e':
        case 'E':
            ++eCnt;
            break;
        case 'y':
        case 'Y':
            ++yCnt;
            break;
        case 'u':
        case 'U':
            ++uCnt;
            break;
        case 'i':
        case 'I':
            ++iCnt;
            break;
        case 'o':
        case 'O':
            ++oCnt;
            break;
}
   }
    std::cout << "a: " << aCnt << std::endl;
    std::cout << "e: " << eCnt << std::endl;
    std::cout << "y: " << yCnt << std::endl;
    std::cout << "u: " << uCnt << std::endl;
    std::cout << "i: " << iCnt << std::endl;
    std::cout << "o: " << oCnt << std::endl;
    return 0;
}
