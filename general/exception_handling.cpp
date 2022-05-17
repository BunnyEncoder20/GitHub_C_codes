#include<iostream>
using namespace std;

int main()
{
    int num,deno;
    cout<<"Enter the numerator and denominator :"<<endl;
    cin>>num>>deno;
    try
    {
        if (deno==0)
        {
            throw deno;
        }
        
        float result = num/deno;
        cout<<"Division Answer : "<<result<<endl;
    
    }
    catch(int deno)
    {
        cout<<"Denominator cannot be = "<<deno<<endl;
    }
    
    
    return 0;
}