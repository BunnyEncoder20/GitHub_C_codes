/*
Recursive Fibonacci
Given the value of 'n', write a recursive routine in C to print the first 'n' elements 
of the Fibonacci series. Fibonacci series is obtained by the sum of the preceding two terms 
in the series. The first two terms are 0 and 1.

Eg.,

for n=7,

the Fibonacci terms are 0,1,1,2,3,5,8

Input Format

Value of 'n'

Output Format

Fibonacci series of 'n' terms, each term separated by a space */
#include<stdio.h>
int recursiveFibb(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    else
    {
        return (recursiveFibb(n-1)+recursiveFibb(n-2));
    }
    
    
}


int main()
{
    int n;
    scanf("%d",&n); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",recursiveFibb(i));
    }
    
    return 0;
}