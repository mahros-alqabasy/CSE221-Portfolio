#include <iostream>
using namespace std;
#include "Queue.hpp"
#include "Utils.hpp"

int main(int argc, char const *argv[]){
    Queue<char> queue;
    queue.enqueue('1');
    queue.enqueue('2');
    queue.enqueue('3');
    queue.enqueue('4');
    queue.enqueue('5');
    
    queue.display();
    queue.reverse();
    queue.display();
    
    return EXIT_SUCCESS;
}
