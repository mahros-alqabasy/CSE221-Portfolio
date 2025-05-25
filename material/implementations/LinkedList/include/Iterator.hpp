#ifndef LINKED_LIST_ITERATOR_HPP
#define LINKED_LIST_ITERATOR_HPP
#include "Node.hpp"
// #include "LinkedList.hp"

template<class Type>
class Iterator{
    private:
        Node<Type>* _it;
    public:
        // Constructor
        Iterator(Node<Type>* it);
        
        // methods
        Iterator& next();
        Type value()const;

        Iterator& operator++();
        Iterator& operator++(int);

        Iterator& operator--();
        Iterator& operator--(int);
        
        Iterator& operator+=(const int&);
        Iterator& operator-=(const int&);

        // Destructor
        ~Iterator();

};

// #include "../source/Iterator.cpp"
#endif // LINKED_LIST_ITERATOR_HPP