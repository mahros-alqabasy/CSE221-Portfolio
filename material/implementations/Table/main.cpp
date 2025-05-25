#include <iostream>
using namespace std;
#include "Table.hpp"
#include<fmt/format.h>


/** 2% bonus
 * Implementation for Classic table with status column
 *  */


// example
struct Student {
    string name;
    int age;

    // Constructor
    Student(const string& name, int age) : name(name), age(age) {}
};

ostream& operator<<(ostream& os, const Student& student) {
    os << "Student(name=" << student.name << ", age=" << student.age << ")";
    return os;
}


int main(int argc, char const *argv[]){    
    Student s = Student("Mahros", 19);
    cout << s << endl;

    Table::Table<Student> table;
    table.insert(0, Student("Mahros", 19)).display();
    table.insert(1, Student("Mahros", 19)).display();
    table.insert(2, Student("Mahros", 19)).display();
    table.insert(3, Student("Mahros", 19)).display();
    table.insert(4, Student("Mahros", 19)).display();

    table.remove(2).display();

    table.insert(4, Student("Mahros", 19)).display();

    cout << table.size()<<endl;

    table.display();
    return EXIT_SUCCESS;
}


