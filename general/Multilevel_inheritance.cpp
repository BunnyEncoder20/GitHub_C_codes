#include<iostream>

using namespace std;
class A
{
    public :
    int a;
    A()
    {cout<<"Inside class A\n";  a=10;}
};

class B : public A
{
    public :
    int b;
    B()
    {cout<<"Inside class B\n";  b=20;}
};

class C : public B
{
    public :
    int c;
    C()
    {cout<<"Inside class C\n";  c=30;}
};

class D : public C
{
    public :
    int d=a+b+c;
    D()
    {cout<<"Inside class D\n";}
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    } 
};
int main()
{
    D d_variable;
    d_variable.display();
    return 0;
}