#include <iostream>
using namespace std;
#include "../include/algorithm.hpp"
using namespace Responses;




SearchResponse BinarySearch::search(int* array, const int& size, const int& target){
    if(size <= 0 || target < array[0] || target > array[size-1]) return SearchResponse{};
    
    int left = 0, right = size-1, mid;

    while (left <= right){
        mid = (right+left) / 2;
        if (target == array[mid]){
            return SearchResponse{mid, true};
        }

        if(target > array[mid]){
            left = mid+1;
            
        }

        if(target < array[mid]){
            right = mid-1;
        }
    }
    
    return SearchResponse{};
}

