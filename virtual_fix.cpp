#include <iostream>
using namespace std;

#define NAME_SIZE 50

class Person {
    int id;
    char name[NAME_SIZE];
    
    public:
        virtual void aboutMe() {
            cout << "I am a person.";
        }
};

class Student : public Person {
    public:
        void aboutMe() {
            cout << "I am a student.";
        }
};

int main() {
    Person * p = new Student();
    p->aboutMe();

    delete p;
    return 0;
}