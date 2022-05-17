#include<iostream>
using namespace std;

template<class T>   //T acts kinda like a data tvar2pe
T maxi(T var1, T var2)
{
    return (var1>var2)?var1:var2;
}   //so instead of the regular data type in the function just use the T (template) type

int main()
{
    cout<<"Maximum of integers : "<<maxi<int>(3,7)<<endl;
    cout<<"Maximum of float : "<<maxi<float>(7.9,3.4)<<endl;
    cout<<"Maximum of Characters : "<<maxi<char>('a','h')<<endl;
    cout<<"Maximum of double : "<<maxi<double>(10.78677655,3.456)<<endl;
    
    return 0 ;
}