#include <iostream>
#include <vector>

#include "search.h"

int main() {
    int myints[] = {3, 1, 2, 1, 3, 4, 5};
    std::vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));
    int myints2[] = {1, 2};
    std::vector<int> vec2(myints2, myints2 + sizeof(myints2) / sizeof(int));

//    std::vector<int> vec(5, 10);
//    std::vector<int> vec2(2, 10);


    if (vec.end() == search(vec.begin(), vec.end(), vec2.begin(), vec2.end()))
        std::cout << "No match" << std::endl;
    else
        std::cout << "Match" << std::endl;

    std::cout << *search(vec.begin(), vec.end(), vec2.begin(), vec2.end());

    return 0;
}
