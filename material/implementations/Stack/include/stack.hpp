#pragma once

#include<iostream>
using namespace std;


template<class Type>
class Stack{
    private:
        struct Node{
            Node* next;
            Type value;
            Node(const Type& value, Node* next = nullptr) : next(next), value(value){}
        };
        Node* _head = nullptr;
        bool _verbose = false;
    public:
        // Constructor
        Stack();
        Stack(const string& expr);


        // operators
        Stack<Type> operator=(Stack<Type> stack);

        // methods
        Type top() const;
        Stack pop();
        Stack push(const Type& element);

        bool isEmpty() const;
        bool isNotEmpty() const;

        Stack clear();
        Stack reverse();

        void display() const;
        string toString() const;

        static bool isBalanced(const string& expr) ;

        // Destructor
        ~Stack();
};
// #include "../source/stack.cpp"
