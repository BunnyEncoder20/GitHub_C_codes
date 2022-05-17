/*An Embedded computing system has sensors and controllers connected together
The sensors will store their data in a common pool for storage purposes. 
The controller will access the data and performs the operations to be 
executed for the computing system. Consider the pool storage will access 
the data as a list of  integer elements and these are the list of operations 
performed  by the sensors to store the data

Adding an element: adds an element to the list at the end

Removing an element: removes the element from the list and adjusts the list

Searching in an array: returns the position of an element to be searched from 
the list

Write a C program to perform data storage for sensors using pointers. Prompt 
the user for the option of operation to perform. After each operation display 
all the elements

Note : consider the list of elements into the array initially as : 3 4 6 7 2

Input format :

Option element

Eg:

Input format :1 8

After adding : 3 4 6 7 2 8

Eg: 2 7

After deleting : 3 4 6 2 8

Eg: 3 6

After searching : 3 4 6 2 8

The position of 6 is 2.*/

#include<stdio.h>
#include<stdlib.h>



void add(int *a, int *n)
{
    int element;
    //printf("%d  %d",a,a++);
    scanf("%d",&element);
    for (int i = 1; i <=*n; i++)
    {
        printf("%d",*a); a++;
        if (i==*n)
        {
            *a++=element;
        }
             
    }
    

}

void del(int a[],int n)
{
    int element,pos;    scanf("%d",&element);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==element)
        {
            pos=i;
        }
    }
    for (int i = pos; i < n - 1; i++)
    a[i] = a[i+1];

    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}

void search(int a[],int n)
{
    int pos,element;
    scanf("%d",&element);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==element)
        {
            printf("The position of %d is %d",element,i);
        }
        else
        {
            continue;
        }
        
        
    }
    
}

int main()
{
    system("cls");
    int a[5]={3 ,4, 6 ,7 ,2},ch,size=5; int *arr=a;

    scanf("%d",&ch);
    
    switch (ch)
    {
    case 1: add(a,&size);
    printf("\n");
    for (int i = 0; i < *n+1; i++)
    {
        printf("%d",*a);
    }
    
    break;
    case 2: del(a,size);
    break;
    case 3: search(a,size);
    break;
    
    default:
        break;
    }

    return 0;
}

