#ifndef TABLE_UTILS_HPP
#define TABLE_UTILS_HPP


#include <iostream>
#include<optional>
using namespace std;


namespace Table{
    namespace Utils{
        #define ASSERT(expr, msg) if (!(expr)) { cerr << msg << endl; abort();}

        string boolToString(const bool value) {
            return (value ? "True" : "False");
        }


        template<class DataType>
        struct Result{
            string msg;
            bool status;
            optional<DataType> data;

            // Constructors
            Result(const bool& status);
            Result(const DataType& data);
            Result(const bool& status, const string& msg);
            Result(const bool& status, const string& msg, const DataType& data);


            // Methods
            void display()const;
            string toString()const;
        };

    }
}


#include "../source/Utils.cpp"
#endif