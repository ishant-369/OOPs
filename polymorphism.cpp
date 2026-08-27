//basic program of polymorphism in c++
#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    string name;
    Student() { 
        cout<< "non parameterized\n";
    }
    Student(string name) {
        this ->name= name;
        cout <<"parameterized\n";
    }
    };
int main(){
    Student s1;
    return 0 ;
}

