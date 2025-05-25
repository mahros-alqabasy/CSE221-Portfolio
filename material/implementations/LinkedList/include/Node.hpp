#ifndef LINKED_LIST_NODE_HPP
#define LINKED_LIST_NODE_HPP

template<class Type>
struct Node{
    Node* next;
    Type value;
    Node(const Type& value, Node* next = nullptr) : next(next), value(value){}
};

#endif // LINKED_LIST_NODE_HPP