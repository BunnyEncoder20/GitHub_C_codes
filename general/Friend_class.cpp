#include<iostream>
using namespace std;
class complex; //forward  declaration for letting compiler know that complex class exists in the sourcecode
class calculator
{
    private :
    int a,b;

    public:
    int add(int a , int b)
    {
        return a+b;
    }
    int sumreal_complex(complex ,complex ); //only function defination here cause complier doesn't know if objects actually exist or not
    int sumcomp_complex(complex ,complex );
    
};

class complex
{
    private:
    int a,b;
    friend class calculator; //entire class and all of it's memeber functions are declared as friends

    public:
    complex(int n1, int n2)
    {
        a=n1; b=n2;
    }
    void printnum()
    {
        cout<<"Number entered is = "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator::sumreal_complex(complex o1,complex o2) //defination of the friend class memeber func must be after the body of the parent class. Otherwise it would try to access objects of a class which is not declared yet
    {
        return o1.a+o2.a; 
    }
int calculator::sumcomp_complex(complex o1,complex o2)
    {
        return o1.b+o2.b; 
    }
    

int main()
{
    complex o1(1,4),o2(5,8); 
    calculator calc;
    int result1=calc.sumreal_complex(o1,o2);
    int result2=calc.sumcomp_complex(o1,o2);
    cout<<"Sum of real part of the 2 complex numebrs are : "<<result1<<endl;
    cout<<"Sum of complex part of the 2 complex numebrs are : "<<result2<<endl;
    return 0;
}