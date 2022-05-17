#include<iostream>
using namespace std;

//function overloading : when same function name is used multiple times by using different:
//type of parameters
//number of parameters
//order/sequence of parameters

void print()
{
    cout<<"No para"<<endl;
}
void print(int a)
{
    cout<<"One interger passed : "<<a<<endl;
}
void print(double a)
{
    cout<<"One float passed : "<<a<<endl;
}
void print(int a,int b)
{
    cout<<"2 int passed : "<<a<<" & "<<b<<endl;
}
void print(int a , double b)
{
    cout<<"First int and second double passed : "<<a<<" & "<<b<<endl;
}
void print(double a , int b)
{
    cout<<"First double and second int passed : "<<a<<" & "<<b<<endl;
}

int main()
{
    print();
    print(4);
    print(0.4);
    print(4,5);
    print(4,500000);
    print(400000,5);
    return 0;
}