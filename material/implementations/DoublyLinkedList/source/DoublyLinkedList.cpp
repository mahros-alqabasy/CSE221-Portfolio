#include "DoublyLinkedList.hpp"


// Constructor
template<class Type>
DoublyLinkedList<Type>::DoublyLinkedList(): _head(nullptr), _tail(nullptr), _length(0){}



// getters
template<class Type>
Type DoublyLinkedList<Type>::at(const int& index)const{
    return _head->value;
}

template<class Type>
Type DoublyLinkedList<Type>::end()const{
    return _head->value;
}

template<class Type>
Type DoublyLinkedList<Type>::begin()const{
    return _head->value;
}


// push
template<class Type>
void DoublyLinkedList<Type>::push_back(const Type& value){
    
}

template<class Type>
void DoublyLinkedList<Type>::push_front(const Type&){
    
}

template<class Type>
void DoublyLinkedList<Type>::push_at(const int&, const Type&){
    
}


// pop
template<class Type>
void DoublyLinkedList<Type>::pop_back(){

}

template<class Type>
void DoublyLinkedList<Type>::pop_front(){

}

template<class Type>
void DoublyLinkedList<Type>::pop_at(const int&){

}


// pop
template<class Type>
void DoublyLinkedList<Type>::pop_back(){

}

template<class Type>
void DoublyLinkedList<Type>::pop_front(){

}

template<class Type>
void DoublyLinkedList<Type>::pop_at(const int&){

}


template<class Type>
int DoublyLinkedList<Type>::size()const{
    return 0;
}

template<class Type>
int DoublyLinkedList<Type>::length()const{
    return 0;
}


// operations

template<class Type>
void DoublyLinkedList<Type>::clear() const{
    return this;
}

template<class Type>
void DoublyLinkedList<Type>::reverse() const{
    return this;
}


template<class Type>
DoublyLinkedList<Type>::~DoublyLinkedList(){
    Node* ptr;
    while (_head != nullptr){
        ptr = _head;
        _head = _head->next;
        delete ptr;
    }
    
}
