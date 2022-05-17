#include<iostream>
using namespace std;

class baseclass
{
    public:
    baseclass()
    {cout<<"Inside the base class"<<endl;}
};

class derivedclass : public baseclass
{
    public:
    derivedclass()
    {
        cout<<"Inside the derived class"<<endl;
    }
    derivedclass(int x)
    {
        cout<<"Inside parameterized constructor in derived class"<<endl<<x;
    }
};
int main()
{
    derivedclass d1;    
    derivedclass d2(10);    
    return 0;
}