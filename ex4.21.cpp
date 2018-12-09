#include <iostream>
#include <vector>
using std::vector;
int main()
{
    vector<int> IntegerVector {1,2,3,4,5,6,7,8,9,10};
    for (auto index = IntegerVector.begin(); index != IntegerVector.end(); ++index){
        std::cout << (((*index)%2 != 0) ? (*index) * 2 : *index);
        std::cout << " ";
    }return 0;
}
