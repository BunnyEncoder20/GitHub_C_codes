#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s; 
    char str[] = "SomaSenpai";
    int len = strlen(str),j=0;

    for (int i = 0; i < len; i++)
    {
        s.push(str[i]);
    }
    while (!s.empty())
    {
        str[j++]=s.top(); s.pop();
    }
    //str[j]="\0";
    
    cout<<"\nThe reserve of the string is : \n"<<str<<endl;
    return 0;
}