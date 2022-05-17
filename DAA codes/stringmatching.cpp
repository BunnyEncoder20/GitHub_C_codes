#include<iostream>
using namespace std;

int main()
{
    string str1, str2 ;
    cout<<"\n\nEnter the Text to be searched\n" ;
    cin>>str1;
    cout<<"\nEnter the Pattern to be searched\n" ;
    cin>>str2; //cab

    int index = 0 , start_pos = 0;
    bool flag = false;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[index])
        {
            if (index == str2.length()-1)
            {
                flag = true;
                break ; 
            }
            index++;
            start_pos = i;
            continue;
        }
        index = 0;
    }

    if (flag)
        cout<<"Pattern match found at position : " << start_pos-1;
    else
        cout<<"Pattern not found " ;    
    return  0;
}