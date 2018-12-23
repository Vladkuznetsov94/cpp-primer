#include <iostream>
int main()
{
    std::string word, repeated_word;
    while (std::cin >> word){
        if (word == repeated_word){
                std::cout << word << std::endl;
                break;
            }
        else {
            std::cout << "No word was repeated." << std::endl;
            break;
        }
        repeated_word = word;
    }
    return 0;
    }
