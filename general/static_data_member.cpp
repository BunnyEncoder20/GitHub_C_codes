#include<iostream>
using namespace std;
class myclass
{
    private :
    int x;
    static int count; //no matter how many times this variable is called only one copy of it exists
    public :
    static int pubcount;//if static data memeber is under private block then we would need a static memeber function to access that variable. This is a public static member hence it can be accessed directly (check int main)
    myclass()
    {
        count++;
        pubcount++;
    }
    static  int getcount()
    {
        return count;
    }
};
int myclass::count=0; //all static data memebrs must be initilised outside the class defination;
int myclass::pubcount=0;
int main()
{
    cout<<"initial private_count = "<<myclass::getcount()<<endl;    //static memeber function required to access the private static memeber
    cout<<"initial pubcount = "<<myclass::pubcount<<endl;      //public static data memeber can be accessed directly
    myclass o1;
    cout<<"After 1 object private_count = "<<myclass::getcount()<<endl;
    cout<<"after 1 object pubcount = "<<myclass::pubcount<<endl;
    myclass o2;
    cout<<"After 2 object private_count = "<<myclass::getcount()<<endl;
    cout<<"After 2 object pubcount = "<<myclass::pubcount<<endl;
    
    return 0; 
}