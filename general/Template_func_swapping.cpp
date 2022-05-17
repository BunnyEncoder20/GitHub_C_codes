#include<iostream>
using namespace std;

template<class T>
T swapping(T var1,T var2)
{
    T temp;
    temp=var1;
    var1=var2;
    var2=temp;
    cout<<"After swapping : "<<var1<<" "<<var2<<endl;
}
int main()
{
    cout<<"Swapping of integers : (3,7)"<<endl; swapping<int>(3,7);
    cout<<"Swapping of float : (7.9,3.4)"<<endl; swapping<float>(7.9,3.4);
    cout<<"Swapping of Characters : ('a','h')"<<endl; swapping<char>('a','h');
    cout<<"Swapping of double : (10.78677655,3.456)"<<endl; swapping<double>(10.78677655,3.456);
    return 0;
}