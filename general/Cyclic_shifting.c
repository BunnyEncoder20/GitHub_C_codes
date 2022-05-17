/*
Cyclic Right Shift of Elements
Given a set of elements stored in an array and a number 'm', design an Algorithm and 
write the subsequent C program to perform cyclic right shift of the array by 'm' places. 
For example, if the elements are 
12, 13, 16, 7, 10 and m =2 
then the resultant set will be 
7, 10, 12, 13, 16.

 Input Format

Number of elements in the set: 'n'

element-1

element-2

...

element-n

value of 'm'

 

Output Format

Elements in the set after right shift by 'm' places */
#include<stdio.h>

void cyclicshifting(int a[],int n,int m)
{
    int temp;
    for (int i = 0; i < m; i++)
    {
        temp=a[n-1];
        for (int j = n-1; j >0 ; j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
}

int main()
{
    int n,m;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&m);
    cyclicshifting(num,n,m);
    
}