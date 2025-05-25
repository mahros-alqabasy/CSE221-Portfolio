#ifndef TABLE_ROW_HPP
#define TABLE_ROW_HPP

#include<iostream>
#include<optional>
using namespace std;

namespace Table{
    template<class DataType>
    class Row{
        public:
            int key;
            bool isEmpty_;
            optional<DataType> data;

            // Constructors
            Row():key(0), data(nullopt), isEmpty_(true){}
            Row(const int& key, const optional<DataType>& data = nullopt, const bool& isEmpty = false);

            // methods
            void display()const;
            string toString()const;

            bool isEmpty()const;
            bool isNotEmpty()const;

            void activate();
            void deactivate();
            

            // Destructor
            ~Row();

    };

    
}


#include "../source/Row.cpp"
#endif