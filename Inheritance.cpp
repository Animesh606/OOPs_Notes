#include <bits/stdc++.h>
using namespace std;

class A1{
    public:
    int a1;
};

class A2{
    public:
    int a2;
};

// Single inheritance
class B1: public A1{
    public:
    int b1;
};

// Multiple inheritance
class B2: public A1, protected A2{
    public:
    int b2;
};

// hiarerchy inheritance
class B3: public A1{
    public:
    int b3;
};

// Multi level inheritance
class C1: public B1{
    public:
    int c1;
};

// hybrid inheritance
class C2: public B3, private A2{
    public:
    int c2;
};

int main() {

    A1 aa1;
    cout << aa1.a1 << endl;

    A2 aa2;
    cout << aa2.a2 << endl;

    B1 bb1;
    cout << bb1.a1 << endl;
    cout << bb1.b1 << endl;

    B2 bb2;
    cout << bb2.a1 << endl;
    cout << bb2.a2 << endl;
    cout << bb2.b2 << endl;

    B3 bb3;
    cout << bb3.a1 << endl;
    cout << bb3.b3 << endl;

    C1 cc1;
    cout << cc1.a1 << endl;
    cout << cc1.b1 << endl;
    cout << cc1.c1 << endl;

    C2 cc2;
    cout << cc2.a1 << endl;
    cout << cc2.a2 << endl;
    cout << cc2.b3 << endl;
    cout << cc2.c2 << endl;
    
    return 0;
}