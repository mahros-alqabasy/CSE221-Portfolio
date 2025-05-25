#include "Utils.hpp"
#include <fmt/format.h>

namespace Table{
    namespace Utils{
        
        // Constructors
        template<class DataType>
        Result<DataType>::Result(const bool& status): status(status), msg(""), data(nullopt){}

        template<class DataType>
        Result<DataType>::Result(const DataType& data): status(true), msg("Success!"), data(data){}

        template<class DataType>
        Result<DataType>::Result(const bool& status, const string& msg): status(status), msg(msg), data(nullopt){}

        template<class DataType>
        Result<DataType>::Result(const bool& status, const string& msg, const DataType& data): status(status), msg(msg), data(data){}

        // Methods
        template<class DataType>           
        void Result<DataType>::display()const{
            cout << toString()<< endl;
        }

        template<class DataType>   
        string Result<DataType>::toString()const{
            return fmt::format("Result({}, {})", boolToString(status), msg);
            // string result = "Result(";
            // result += boolToString(status);
            // result += ", ";
            // result += msg;
            // result += ")";
            // return result;
        }

    } // namespace Utils
} // namespace Table