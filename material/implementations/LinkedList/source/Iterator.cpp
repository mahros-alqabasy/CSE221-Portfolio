#include "Iterator.hpp"
#include "Utils.hpp"
#include <fmt/format.h>

// Constructor
template<class Type>
Iterator<Type>::Iterator(Node<Type>* it):_it(it){

}

// methods
template<class Type>
Iterator<Type>& Iterator<Type>::next(){
    ASSERT(_it->next, "Next is null!");
    _it = _it->next;
    return *this;
}

template<class Type>
Type Iterator<Type>::value(){
    ASSERT(_it, fmt::format("Iterator is null!"));
    return _it->value;
}

template<class Type>
Iterator<Type>& Iterator<Type>::operator++(){ // pre
    return next();
}

template<class Type>
Iterator<Type>& Iterator<Type>::operator++(int){ // post
    return *this;
}

template<class Type>
Iterator<Type>& Iterator<Type>::operator--(){
    return *this;
}

template<class Type>
Iterator<Type>& Iterator<Type>::operator--(int){
    return *this;
}

template<class Type>
Iterator<Type>& Iterator<Type>::operator+=(const int&v){
    return *this;
}

template<class Type>
Iterator<Type>& Iterator<Type>::operator-=(const int&v){
    return *this;
}

// Destructor
template<class Type>
Iterator<Type>::~Iterator(){

}



// Explicit template instantiation
// template class Iterator<int>;
// template class Iterator<double>;
// template class Iterator<std::string>;