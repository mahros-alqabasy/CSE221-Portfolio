#ifndef TABLE_TABLE_HPP
#define TABLE_TABLE_HPP

#include "Row.hpp"
#include "Constants.hpp"
#include "Utils.hpp"

#include <iostream>
using namespace std;

namespace Table{
    template<class DataType>
    class Table{
        private:
            int _length;   
            Row<DataType> _table[Constants::MAX_ARRAY_SIZE];
        public:
            // Constructor
            Table();
            
            // functionality
            Utils::Result<DataType> insert(const int& key, const DataType& data);

            /** Search for [key]
             * search the key if it exists it returns it's position 
             * else return the next empty position 
             * 
             * return Result(status=true, msg="Key founded", data=keyIndex)
             * return Result(status=false, msg="Key not found", data=emptyIndex)
             * return Result(status=false, msg="No empty position", data=emptyIndex)
             */
            Utils::Result<int> search(const int& key)const;


            Utils::Result<int> remove(const int& key);

            // methods
            void display()const;
            string toString()const;

            bool isEmpty()const;
            bool isFull()const;
            bool isNotEmpty()const;

            bool isKeyExists(const int& key)const;

            int size()const;
            int length()const;


            // Destructor
            ~Table();
    };  

}

#include "../source/Table.cpp"


#endif