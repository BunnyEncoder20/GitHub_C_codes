/*
Verification of circular prime number
A circular prime number is a prime number 'p' with a property that all the numbers got by cyclically permuting the digits of 'p', are also a prime number.

A number is said to be a prime if it has no factors other than the number 1 and itself. 19937 is a circular prime number, as all the numbers obtained by cyclically permuting the number 19937 : 99371, 93719,37199,71993,19937 are all prime.

Develop an algorithm and write a C program to check if the given number is a circular prime or not.

Input Format

A number

Output Format

Print Circular prime or Not circular prime
*/


#include<stdio.h>
#include<string.h>

int prime(int n)
{
    int i , flag=1;

    for ( i = 2; i < n/2; i++)
    {
        if(n%i==0)
        {
            flag = 0;break;
        }
    }
     return flag;
}

int rotator(char refstr[])
{
    int n=0;
    char temp = refstr[0];
    for (int i = 0; i < strlen(refstr); i++)
    {
        n*=10;
        n+=refstr[i]-'0';
        refstr[i]=refstr[i+1];
    }
    refstr[strlen(refstr)]=temp;
    return n;

}

int main()
{
    int n,num,flag=1; char string[20];
    scanf("%s",&string);
    n=rotator(string);
    printf("1st : %d\n",n);
    while(num!=n)
    {
        num=rotator(string); //printf("%d\n",num);
        if(prime(num)==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    printf("Not circular prime");
    else
    printf("Circular prime");

    return 0;
}