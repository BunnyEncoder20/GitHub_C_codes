#include<iostream>
using namespace std;
class A
{
    public :
    int a;
    A()
    {cout<<"Inside Class A"<<endl;  a=10;}
};

class B 
{
    public :
    int b;
    B()
    {cout<<"Inside class B"<<endl;  b=20;}
};

class C : public A,B
{
    public :
    int c;
    C()
    {cout<<"Inside class C"<<endl;  c=a+b;}
    void display()
    {cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;}
};
int main()
{
    C c_class_obj;
    c_class_obj.display();
    return 0;
}