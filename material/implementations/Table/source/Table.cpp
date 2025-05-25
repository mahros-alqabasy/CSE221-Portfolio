#include "Table.hpp"
#include <iostream>
#include <fmt/format.h>
#include "Utils.hpp"
using namespace std;

// Constructor
namespace Table{
    template<class DataType>
    Table<DataType>::Table():_length(0){
    }

    // functionality
    template<class DataType>
    Utils::Result<DataType> Table<DataType>::insert(const int& key, const DataType& data){
        // check for empty space
        if(isFull()) return Utils::Result<DataType>(false, "Table is full!");

        // check if key is exists and if not get empty position other wise return false condition
        Utils::Result<int> result = search(key);

        if(result.status == true) {
            // already exists
            return Utils::Result<DataType>(false, "Key is duplicate!");
        };

        if(result.status == true && result.data.value() == -1){
            // not found, and there is no any space at table
            return Utils::Result<DataType>(false, "Table is full!");
        }
        // else: insert the row in the search.data position
        _table[result.data.value()] = Row<DataType>(key, data, false);
        _length++;
        return Utils::Result<DataType>(true, "Success! New row created!");
    }

    template<class DataType>
    Utils::Result<int> Table<DataType>::search(const int& key)const{
        int emptyIndex = -1;

        // search
        for(int index = 0; index <= Constants::MAX_ARRAY_SIZE; index++){
            if(_table[index].isNotEmpty() && _table[index].key == key){
                return Utils::Result<int>(true, "Key is exists!", index);
            }

            // find empty places for another stage
            if(_table[index].isEmpty()){
                emptyIndex = index;
            }
        }

        // means: NOT-FOUND and NO-SPACE
        if(emptyIndex == -1) return Utils::Result<int>(false, "Not-found and Table is full!", -1);

        // means: NOT-FOUND and THERE IS EMPTY POSITION
        return Utils::Result<int>(false, "Not-found and Empty Position!", emptyIndex);
    }

    template<class DataType>
    Utils::Result<int> Table<DataType>::remove(const int& key){
        // check if table is empty
        if(isEmpty()) return Utils::Result<int>(false, "Key not found and Table isEmpty!");

        // now, use search interface to get key index in table
        Utils::Result<int> result = search(key);
        if(result.status == false) return Utils::Result<int>(false, "Key not found!");

        // NOW the key is exists
        _table[result.data.value()].deactivate();
        _length--;
        return Utils::Result<int>(true, "Row removed successfully!");
    }

    // methods
    template<class DataType>
    void Table<DataType>::display()const{
        cout << toString() << endl;
    }

    template<class DataType>
    string Table<DataType>::toString()const{

        string rows = "Table:\n";
        Row<DataType> row;
        for(int x = 0; x < Constants::MAX_ARRAY_SIZE; x++){
            row = _table[x];

            if(row.isNotEmpty()){
                rows += fmt::format("++++{}\n", row.toString());
            }
        }
        return rows;
    }


    template<class DataType>
    bool Table<DataType>::isEmpty()const{
        return _length <= 0;
    }
    
    template<class DataType>
    bool Table<DataType>::isFull()const{
        return _length >= Constants::MAX_ARRAY_SIZE;
    }

    template<class DataType>
    bool Table<DataType>::isNotEmpty()const{
        return !isEmpty();
    }

    template<class DataType>
    bool Table<DataType>::isKeyExists(const int& key)const{
        Utils::Result<int> result = search(key);
        return false;
    }

    template<class DataType>
    int Table<DataType>::size()const{
        return _length;
    }
    
    template<class DataType>
    int Table<DataType>::length()const{
        return _length;
    }

    // Destructor
    template<class DataType>
    Table<DataType>::~Table(){

    }
}