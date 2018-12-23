#include <iostream>
int main()
{
    std::string Word, RepeatedWord, MaxRepeatedWord;
    unsigned repeat = 1, MaxRepeat = 1;
    while (std::cin >> Word){
        if (Word == RepeatedWord){
            ++repeat;
        }
        if (repeat > MaxRepeat){
            MaxRepeat = repeat;
            MaxRepeatedWord = RepeatedWord;
            repeat = 1;
        }
        RepeatedWord = Word;

    }
    std::cout << MaxRepeatedWord << " was repeated " << MaxRepeat << " times." << std::endl;
    return 0;
}
