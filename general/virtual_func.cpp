#include<iostream>
using namespace std;

/*
class Base 
{ 
    public: 
    void show() 
    { 
        cout << "Base class"; 
    } 
}; 

class Derived: public Base 
{ 
    public: 
    void show() 
    { 
        cout << "Derived Class"; 
    } 
};

int main() 
{
    Base* b; 
    Derived d; 
    b = &d; 
    b->show(); //Early Binding, base class function is called.
    return 0;
}

*/

class Base 
{ 
    public: 
    virtual void show() 
    { 
        cout << "Base class"; 
    } 
}; 

class Derived: public Base 
{ 
    public: 
    void show() 
    { 
        cout << "Derived Class"; 
    } 
};

int main()
{
    Base* b; Derived d;
    b=&d;
    b->show();
    return 0;
}
