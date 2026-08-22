#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name;
    int age;
    //Person(string name, intt age){
      //  this->name = name;
      //  this->age-age;
      Person (){
        cout << "parent Constructor...\n";
      }
    };

class Student : public Person {
public:
    int rollno;
    Student(){
        cout << "Child constructor...\n";
    }
    void getInfo(){
        cout << "name:"<< name <<endl;
        cout << "age"<< name <<endl;
        cout << "rollno:"<< name <<endl;
    }
};
int main() {
    Student s1;
    s1.name= "isntae";
    s1.age= 19;
    s1.rollno= 119;
    return 0;
};
