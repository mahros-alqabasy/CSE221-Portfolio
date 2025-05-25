#include "stack.hpp"
#include "utils.hpp"
#include "constants.hpp"
// Constructor
template<class Type> 
Stack<Type>::Stack(){
    if(_verbose) printf("Stack(verbose=%s)\n", _verbose? "True" : "False");
    
}

// methods
template<class Type>
Stack<Type>::Stack(const string& expr){
    // for(auto x : expr){
    //     push();
    // }
}

template <class Type>
Stack<Type> Stack<Type>::operator=(Stack<Type> stack){
    clear();
    // this
    return *this;
}

// top
template<class Type> 
Type Stack<Type>::top() const{
    if (isEmpty()) throw StackException("Stack is empty!");

    if(_verbose) cout << TAB << "top(): " << toString() << endl;
    return _head->value;
}

// pop
template<class Type> 
Stack<Type> Stack<Type>::pop(){
    if (isEmpty()) throw StackException("Stack is empty!");

    
    Node* deleted = _head;
    _head = _head->next;
    delete deleted;

    if(_verbose) cout << TAB << "pop(): " << toString() << endl;
    return *this;
}

// push
template<class Type> 
Stack<Type> Stack<Type>::push(const Type& element){
    Node* node = new Node(element, _head);
    _head = node;
    
    if(_verbose) cout << TAB << "push(" << element << "): " << toString() << endl;
    return *this;
}

// isEmpty
template<class Type> 
bool Stack<Type>::isEmpty() const{
    if(_verbose) cout << TAB << "isEmpty(): " << toString() << endl;
    return _head == nullptr;
}

// isNotEmpty
template<class Type> 
bool Stack<Type>::isNotEmpty() const{
    if(_verbose) cout << TAB << "isNotEmpty(): " << toString() << endl;
    return !isEmpty();
}

// clear
template<class Type> 
Stack<Type> Stack<Type>::clear(){
    if(_verbose) cout << TAB << "clear(): " << toString() << endl;
    while (_head != nullptr){
        pop();
    }
    
    return *this;
}

// reverse
template<class Type> 
Stack<Type> Stack<Type>::reverse(){
    Stack<Type> stack;

    for (Node* it = _head; it != nullptr; it = it->next){
        // cout << it << endl;
        stack.push(it->value);
    }
    
    
    if(_verbose) cout << TAB << "reverse(): " << toString() << endl;
    return stack;
}


// display
template<class Type> 
void Stack<Type>::display() const{
    cout << TAB << "display(): " << toString() << endl;
    // cout << toString() << endl;
}

// toString
template<class Type> 
string Stack<Type>::toString() const{
    string text = "Stack(";
    for (Node* it = _head; it != nullptr; it = it->next) {
        text += to_string(it->value);
        if (it->next != nullptr) {
            text += ", ";
        }
    }
    text += ")";
    return text;
}

template <class Type>
bool Stack<Type>::isBalanced(const string &expr) {
    
    return false;
}

// Destructor
template<class Type>  
Stack<Type>::~Stack(){
    // clear();
    if(_verbose) cout << "~Stack(): " << toString() << endl;
}



// use operator overloading