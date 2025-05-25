#include "Queue.hpp"
#include "Utils.hpp"
#include <iostream> 
#include "fmt/format.h"
using namespace std;



// Constructor
template<class Type>
Queue<Type>::Queue():_length(0), _front(0), _back(0), _reversed(false){
    
}

// getters
template<class Type>
Type Queue<Type>::back()const{
    ASSERT(_back, "Queue Is Empty!");
    return _back->value;
}

template<class Type>
Type Queue<Type>::front()const{
    ASSERT(_front, "Queue is Empty!");
    return _front->value;
}


// methods
template<class Type>
int Queue<Type>::size()const{
    return _length;
}
template<class Type>
int Queue<Type>::length()const{
    return _length;
}
template<class Type>
string Queue<Type>::toString()const{
    string result = fmt::format("Queue(size={}", _length);

    for(Node* it = _front; it != nullptr; it = it->next){
        result += fmt::format(", {}", it->value);
    }
    result += ")";
    return result;
    
}

template<class Type>
void Queue<Type>::display()const{
    cout << toString() << endl;
}


template<class Type>
bool Queue<Type>::isEmpty()const{
    return _length <= 0;
}
template<class Type>
bool Queue<Type>::isNotEmpty()const{
    return !isEmpty();
}

// setters
template<class Type>
Type Queue<Type>::dequeue(){
    ASSERT(_front, "Queue is Empty!");
    Node* deletedNode = _front;
    
    Type value = _front->value;
    _front = _front->next;
    
    delete deletedNode;

    _length--;
    return value;
}

template<class Type>
Queue<Type>& Queue<Type>::enqueue(const Type& value){
    Node* node = new Node(value, nullptr);
    if (isNotEmpty()){
        _back->next = node;
    }else{
        _front = node;
    }
    _back = node;
    _length++;
    return *this;
}

template<class Type>
Queue<Type>& Queue<Type>::clear(){
    // ASSERT(isNotEmpty(), "Queue is Empty!");
    _front = _back = 0;
    // Node* temp;
    // while (_front != nullptr)
    // {
    //     temp = _front;
    //     _front = _front->next;
    //     delete temp;
    // }
    _length = 0;
    return *this;
}

template<class Type>
Queue<Type>& Queue<Type>::reverse(){
    Type value;
    for(Node* it = _front; it != _back; it = it->next){
        value = dequeue();
        it->next = _back->next;
        _back->next = it;
    }

    
    return *this;
}        

// Destructor
template<class Type>
Queue<Type>::~Queue(){
    clear();
}