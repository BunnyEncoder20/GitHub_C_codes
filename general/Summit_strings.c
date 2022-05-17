/*
Summit Strings : <using coolboolean variables>
prints yes if the characters if the string are one ascii value
apart
eg: abc : yes (ascii values : 97 98 99)
    abcba : yes (ascii values : 97 98 99 98 97)
The values have to be just one value(or step) apart. (+1 or -1 the
ascii value of previous to get the next character in the string)

Eg:
input : 
abc
abcdefedcba
zza
xyzazyxxx

output
yes
yes
no 
no
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    //system("cls");
    char str[100]=""; 
    scanf("%s",str);
    
    int len=strlen(str);
    bool flag=true;
    for (int i = 1; i <len; i++)
    {
        
        if (str[i]==97) //for a
        {
            if (str[i-1]==98||str[i-1]==122)
            {
                continue;
            }
            else
            {
                flag=false; break;
            }
        }
        else if (str[i]==122)   //for z
            {
                if (str[i-1]==121||str[i-1]==97)
                {
                    continue;
                }
                else
                {
                    flag=false; break;
                }
            }
        else if (str[i]==(str[i-1]+1) || str[i]==str[i-1]-1) //all the remaining
            {
                continue;
            }
        else
        {
            flag=false; 
            break; 
        }
        
        
    }
    
    if (flag)
    {
        printf("\nYes , it is a Summit String");
    }
    else
    {
        printf("\nNo , it is not a Summit String");
    }
    
    
    return 0;
}