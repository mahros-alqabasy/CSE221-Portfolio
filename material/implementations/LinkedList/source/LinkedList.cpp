#include <fmt/format.h>
#include "utils.hpp"
#include "Node.hpp"

#include "Iterator.hpp"
#include "constants.hpp"
#include "LinkedList.hpp"


// implementation

// Constructor
template<class Type>
LinkedList<Type>::LinkedList():_head(0), _tail(0), _length(0){
    
}

// methods
template<class Type>
int LinkedList<Type>::size()const{
    return _length;
}

template<class Type>
int LinkedList<Type>::length()const{
    return _length;
}

template<class Type>
bool LinkedList<Type>::isEmpty() const{
    return _head == nullptr;
}
template<class Type>
bool LinkedList<Type>::isNotEmpty() const{
    return !isEmpty();
}

// traverse
template<class Type>
Type LinkedList<Type>::at(const int& index){
    ASSERT(index < _length, fmt::format("Index({}) out of range({})!", index, _length-1));

    Node<Type>* it = _head;
    // for(int x = 0; x < ){
        
    // }
    return _head->value;
}

// push
template<class Type>
LinkedList<Type>& LinkedList<Type>::push_back(const Type& value){
    Node<Type>* node = new Node<Type>(value);
    ASSERT(node, "Stack overflow!");
    if(isEmpty()){
        _head = node;
    }else{
        _tail->next = node;
    }
    _tail = node;
    _length++;
    return *this;
}

template<class Type>
LinkedList<Type>& LinkedList<Type>::push_front(const Type& value){
    Node<Type>* node = new Node<Type>(value);
    ASSERT(node, "Stack overflow!");
    if(isEmpty()){
        _tail = node;
    }else{
        node->next = _head;
    }
    
    _head = node;
    _length++;
    
    return *this;
}

template<class Type>
LinkedList<Type>& LinkedList<Type>::push_at(const int& index, const Type& value){
    return *this;
}

template<class Type>
LinkedList<Type>& LinkedList<Type>::push_at(Node<Type>* node, const Type& value){
    // Node<Type>* newNode = new Node<Type>(value);
    // ASSERT(newNode, "Stack overflow!");

    // if(node == nullptr) push_back(newNode);
    // else{
    //     newNode->next = node->next
    //     node->next = newNode;
    // }
    
    return *this;
}

// pop
template<class Type>
LinkedList<Type>& LinkedList<Type>::pop_back(){
    
    return *this;
}

template<class Type>
LinkedList<Type>& LinkedList<Type>::pop_front(){
    Node<Type>* deletedNode = _head;
    _head = _head->next;
    delete deletedNode;
    return *this;
}

template<class Type>
LinkedList<Type>& LinkedList<Type>::pop_at(const int&){
    
    return *this;
}


// operators
template<class Type>
LinkedList<Type>& LinkedList<Type>::operator*(const int&){
    
    return *this;
}
template<class Type>
LinkedList<Type>& LinkedList<Type>::operator=(const LinkedList<Type>& list){
    clear();

    for(Node<Type>* it = list._head; it != nullptr; it = it->next){
        push_back(it->value);
    }

    return *this;
}
template<class Type>
LinkedList<Type>& LinkedList<Type>::operator+(const LinkedList&){
    
    return *this;
}
template<class Type>
LinkedList<Type>& LinkedList<Type>::operator+=(const LinkedList&){
    
    return *this;
}

// actions
template<class Type>
LinkedList<Type>& LinkedList<Type>::clear(){
    _head = _tail = 0;
    _length = 0;

    return *this;
}

template<class Type>
LinkedList<Type>& LinkedList<Type>::reverse(){
    return *this;
}

template<class Type>
void LinkedList<Type>::display() const{
    cout << toString() << endl;
}
template<class Type>
string LinkedList<Type>::toString() const{
    string result = fmt::format("List(size={}", _length);

    for(Node<Type>* it = _head; it != nullptr; it = it->next){
        result += fmt::format(", {}", it->value);
    }

    result += ")";
    return result;
}






// Destructor
template<class Type>
LinkedList<Type>::~LinkedList(){

}

