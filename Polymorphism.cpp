#include <bits/stdc++.h>
using namespace std;

// Polymorphism happens when two or more member have --
//      Same name
//      Same number of arguement
//      Same type of Argument

class A{
    public:
    void greet() {
        cout << "Welcome Sir to Hotel" << endl;
    }
};

class B{
    public:
    void greet() {
        cout << "Welcome Madam to Hotel" << endl;
    }
};

class C: public A, public B{

};

class D: public A{
    public:
    void greet() {
        cout << "Welcome Madam to Hotel" << endl;
    }
};

int main() {
    D d1;
    d1.greet(); // Runtime Polymorphism
    C c1;
    c1.greet(); // Compilation time Polymorphism
    return 0;
}