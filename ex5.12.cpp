#include <iostream>
int main()
{
    char text;
    unsigned eCounter = 0, yCounter = 0, uCounter = 0, iCounter = 0,
    oCounter = 0, aCounter = 0, ffCounter = 0, flCounter = 0, fiCounter = 0;
    while (std::cin >> text){
        switch (text){
        case 'e':
        case 'E':
            ++eCounter;
            break;
        case 'y':
        case 'Y':
            ++yCounter;
            break;
        case 'u':
        case 'U':
            ++uCounter;
            break;
        case 'i':
        case 'I':
            ++iCounter;
            break;
        case 'o':
        case 'O':
            ++oCounter;
            break;
        case 'a':
        case 'A':
            ++aCounter;
            break;
        case 'ff':
            ++ffCounter;
            break;
        case 'fi':
            ++fiCounter;
            break;
        case 'fl':
            ++flCounter;
            break;
        }
     }
        std::cout << "a: " << aCounter << std::endl;
        std::cout << "e: " << eCounter << std::endl;
        std::cout << "y: " << yCounter << std::endl;
        std::cout << "u: " << uCounter << std::endl;
        std::cout << "i: " << iCounter << std::endl;
        std::cout << "o: " << oCounter << std::endl;
        std::cout << "ff: " << ffCounter << std::endl;
        std::cout << "fi: " << fiCounter << std::endl;
        std::cout << "fl: " << flCounter << std::endl;
        return 0;
}
