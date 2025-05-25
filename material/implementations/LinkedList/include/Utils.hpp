
#pragma once
#include <iostream>
using namespace std;
#include <stdexcept>

#define ASSERT(expr, msg) if (!(expr)) { cerr << msg << endl; abort();}


// handle errors
class StackException : public runtime_error {
    public:
        explicit StackException(const string& message) : runtime_error(message) {}
};
