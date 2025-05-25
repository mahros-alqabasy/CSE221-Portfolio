#include <iostream>
using namespace std;
#include "include/algorithm.hpp"
using namespace Responses;



// main
int main(int argc, char const *argv[]){
    const int size = 20;
    int array[size] = {1,2,3,4,5,6,7,8,9, 10,11,12,13,14,15,16,17,18,19,20};


    auto response = BinarySearch::search(array, size, 20);
    response.print();

    return EXIT_SUCCESS;
}
