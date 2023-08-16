#include <bits/stdc++.h>
using namespace std;

class Student{

    // can't be accessed outside of this class
    private:
        // properties
        string fathername, mothername;

        // functions
        void medical(int age) {
            cout << "Name : " << name << ", age : " << age << "is medically fit." << endl;
        }


    // can't be accessed outside of this class but can be accessed in any child class of this class
    protected:
        // properties
        int marks;
        char grade;

        // functions
        void result(){
            cout << "Name : " << name << endl << "Marks : " << marks << endl << "Grade : " << grade << endl;
        }


    // can be accessed anywhere inside or outside of the class
    public:
        // Properties
        string name;
        int roll;
        char section;

        // functions
        void getID() {
            cout << "Name : " << name << endl << "Roll : " << roll << endl << "Section : " << section << endl;
        }
};

int main() {
    // The properties and functions are encapsulated in some accessor (private, protected, public)
    // The private members are can't be called outside of the class so it is abstructed;
    Student s1;
    s1.getID();
    return 0;
}