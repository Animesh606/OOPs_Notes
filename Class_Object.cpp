#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    // properties
    string name;
    int roll;
    char section;

    // default constructor
    Student() {}

    // Single parametered constructors
    Student(string name){
        this->name = name;
    }
    Student(int roll){
        this->roll = roll;
    }
    Student(char section){
        this->section = section;
    }

    // Multi parametered contructor
    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }
    Student(string name, int roll, char section) {
        this->name = name;
        this->roll = roll;
        this->section = section;
    }

    // Copy constructor
    Student(Student &temp) {
        this->name = temp.name;
        this->roll = temp.roll;
        this->section = temp.section;
    }
    Student(Student *temp) {
        this->name = temp->name;
        this->roll = temp->roll;
        this->section = temp->section;
    }

    // getter
    string getName() {
        return this->name;
    }
    int getRoll() {
        return this->roll;
    }
    char getSection() {
        return this->section;
    }

    // setter
    void setName(string name){
        this->name = name;
    }
    void setRoll(int roll) {
        this->roll = roll;
    }
    void setSection(char section) {
        this->section = section;
    }

    // printing function 
    void print() {
        cout << endl << "[ Name : " << this->name << ", Roll : " << this->roll << ", Section : " << this->section << " ]" << endl << endl;
    }

    // destructor
    ~Student(){}

    // static member and fuction
    // Not need any object to access
    static int timetograduate;
    static void greet(){
        cout << "Welcome to OOPs" << endl;
    }
};

int Student::timetograduate = 4;

int main() {
    // default constructor
    // static method 
    Student s1;
    s1.name = "Animesh";
    s1.roll = 18;
    s1.section = 'A';

    //dynamic method
    Student *s2 = new Student;
    s2->name = "Animesh";
    s2->roll = 18;

    // Parametered contructor
    // static method
    Student s3("Animesh", 18, 'A');
    // dynamic method 
    Student *s4 = new Student("Animesh", 18, 'A');

    // Copy object
    Student s5(s3);
    Student s6(s4);

    // Printing
    s3.print();

    // destruct dynamically allocated objects
    delete s2, s4; // Static objects are deleted automatically

    // accessing static members of class
    cout << Student::timetograduate << endl;
    Student::greet();

    return 0;
}