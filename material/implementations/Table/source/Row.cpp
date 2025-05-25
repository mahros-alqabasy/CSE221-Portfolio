#include "Row.hpp"

#include <fmt/format.h>

namespace Table{

    // Constructor
    template<class DataType>
    Row<DataType>::Row(const int& key, const optional<DataType>& data, const bool& isEmpty):key(key), data(data), isEmpty_(isEmpty){
        
    }
    

    // methods
    template<class DataType>
    void Row<DataType>::display()const{
        cout << toString() << endl;
    }

    template<class DataType>
    string Row<DataType>::toString()const{
        // auto d = data;
        // return "format.row({}, {}, {})";
        return fmt::format("Row({}, {}, {})", key, "data", isEmpty());
    }

    // another
    
    template<class DataType>
    bool Row<DataType>::isEmpty()const{
        return isEmpty_ == true;
    }
    template<class DataType>
    bool Row<DataType>::isNotEmpty()const{
        return !isEmpty();
    }
    
    
    template<class DataType>
    void Row<DataType>::deactivate(){
        isEmpty_ = true;
    }

    template<class DataType>
    void Row<DataType>::activate(){
        isEmpty_ = false;
    }
    


    // Constructor
    template<class DataType>
    Row<DataType>::~Row(){

    }
    
} // namespace Table
