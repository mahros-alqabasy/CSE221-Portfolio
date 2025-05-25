#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "constants.hpp"
using namespace Responses;
using namespace Constants;



// algorithm
class Algorithm{};



// sorting algorithms
class Sorting: public Algorithm{
    public:
        // how can we make this virtual and static in the same time.
        static void sort(int* array, const int& size, const SortType& sortType);
};

// sorting algorithms implementations
class InsertionSort: public Sorting{
    public:
        static void sort(int* array, const int& size, const SortType& sortType){
            
        }
};


// searching
class Searching: public Algorithm{
    public:
        static SearchResponse search(int* array, const int& size, const int& target);
};

// implementations of searching algorithms
class BinarySearch : public Searching{
    public:
        static SearchResponse search(int* array, const int& size, const int& target){
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
};




#endif