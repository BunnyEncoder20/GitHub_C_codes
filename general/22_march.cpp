#include<iostream>
#include<string.h>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display();
}p2;

void person::display()
{
    cout<<"Name = "<<name<<"\nAge = "<<age;
}

int main()
{
    //person p;
    p2.name="Bunny";
    p2.age=20;
    p2.display();
    cout<<"\n\n\n\n";
    return 0;
}