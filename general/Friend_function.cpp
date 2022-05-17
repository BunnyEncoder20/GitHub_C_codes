#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;

    public:
    void setnum(int n1, int n2)
    {
        a=n1; b=n2;
    }
    void printnum()
    {
        cout<<"Number entered is = "<<a<<" + "<<b<<"i"<<endl;
    }
    
    friend complex sumcomplex(complex o1, complex o2); //friend function declaration: gives permission to outside function to access the private data memebers of a class
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex num1,num2,sum;
    num1.setnum(1,4); num2.setnum(5,8);
    num1.printnum(); num2.printnum();
    sum=sumcomplex(num1,num2);
    sum.printnum();
    return 0;
}


/*
Propertires of Friend functions:
1. It is not in the scope of the class
2. Friend function is a non memeber function which gets permission to access private memebers of a class
3. Hence cannot be called from a object of that class
4. Is called without any object like a normal function
5. Usually contains the object of the class as arguements 
6. cannot be declared inside public or pravate section of the class
7. cannot access the priavte members directly 
8. Has to use : object_name.memeber_name (object_name from the arguements of that function and member name is the name of the private variables it is trying to access)
*/