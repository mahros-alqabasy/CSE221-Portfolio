#ifndef DOUBLY_LINKED_LIST_HPP
#define DOUBLY_LINKED_LIST_HPP


template<class Type>
class DoublyLinkedList{
    private:
        struct Node{
            Type value;
            Node* next, *previous;
            Node(const Type& value, Node* next=nullptr, Node* previous=nullptr):value(value), next(next), previous(previous){}
        };
        int _length;
        Node* _head, *_tail;
    public:
        // Constructor
        DoublyLinkedList();

        // getters
        Type end()const;
        Type begin()const;
        Type at(const int&)const;

        // push
        void push_back(const Type&);
        void push_front(const Type&);
        void push_at(const int&, const Type&);

        // pop
        void pop_back();
        void pop_front();
        void pop_at(const int&);

        // pop
        void pop_back();
        void pop_front();
        void pop_at(const int&);

        int size()const;
        int length()const;

        // operations
        void clear() const;
        void reverse() const;

        // Destructor
        ~DoublyLinkedList();
};



#endif