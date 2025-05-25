#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
using namespace std;

template<class Type>
class Queue{
    private:
        struct Node{
            Type value;
            Node* next;
            Node(const Type& value, Node* next=0):value(value), next(next){}
        };
        int _length;
        bool _reversed;
        Node* _front, *_back;
    public:
        // Constructor
        Queue();

        // getters
        Type back()const;
        Type front()const;

        // methods
        int size()const;
        int length()const;
        
        bool isEmpty()const;
        bool isNotEmpty()const;

        string toString()const;
        void display()const;

        // setters
        Type dequeue();
        Queue& enqueue(const Type&);

        Queue& clear();
        Queue& reverse();        
        
        // Destructor
        ~Queue();
};




#include "../source/Queue.cpp"
#endif