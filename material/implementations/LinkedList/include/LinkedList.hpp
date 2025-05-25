#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <iostream>
#include "Node.hpp"
#include "Iterator.hpp"

using namespace std;


template<class Type>
class LinkedList{
    private:
        int _length;
        Node<Type>* _head, *_tail;
    public:
        // Constructor
        LinkedList();

        // methods
        int size()const;
        int length()const;

        bool isEmpty() const;
        bool isNotEmpty() const;
        
        // traverse
        Type at(const int&);
        
        // push
        LinkedList& push_back(const Type&);
        LinkedList& push_front(const Type&);
        LinkedList& push_at(const int&, const Type&);

        // task
        LinkedList& push_at(Node<Type>* node, const Type& value);

        // pop
        LinkedList& pop_back();
        LinkedList& pop_front();
        LinkedList& pop_at(const int&);
        


        // operators
        LinkedList& operator*(const int&);
        LinkedList& operator=(const LinkedList&);
        LinkedList& operator+(const LinkedList&);
        LinkedList& operator+=(const LinkedList&);

        // actions
        LinkedList& clear();
        LinkedList& reverse();

        void display() const;
        string toString() const;

        // Destructor
        ~LinkedList();
};

#include "../source/LinkedList.cpp"
// #include "../source/Iterator.cpp"
#endif