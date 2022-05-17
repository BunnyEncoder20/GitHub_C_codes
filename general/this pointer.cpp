#include<iostream>
#include<string>
using namespace std;

class A
{
    private :
    int a;

    public:
    A& thispointer_func(int a)
    {
        //this is a pointer object pointing to the object which has called that memeber function, alsoa a way to return object from a void (or any other) function;
        this->a=a; 
        return *this; //returns the object which called this memeber function , here a;
    }
    void getdata(int val)
    {
        a=val;
    }   
    void putdata()
    {
        cout<<"Value of a = "<<a<<endl;
    }
};
int main()
{
    A a; a.thispointer_func(4).putdata(); //implicitatly called using the object returned from getedata using the this pointer.
    A b; b.getdata(5); b.putdata(); //explicitly called 
    return 0;
}