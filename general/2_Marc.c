#include<stdio.h>
#include<stdlib.h>
void factorial(int*,int*);

/*
int main() //factorial of number using pointrs and callby ref
{
    int range,res=1;
    printf("Range : ") ; scanf("%d",&range);
    factorial(&range,&res);
    printf("%d! = %d",range,res);
}

void factorial(int *range,int *res)
{
    
    for (int i = *range; i>0; i--)
    {
        *res*=i;
    }
    
}*/

/*
write a C-Program to perform the following operations on integers of 10 
elements using functions. Ask the user for the option to perform the operation.
The operations are listed below:

Insert an element
Take the value of the element to be inserted and the index at which the
element to be inserted from the user. The array should maintain the number 
of elements present in the array. Index given by the user should never be more 
than the no of elements present in the array. After insertion display all the 
elements in the array. Note: user cannot insert more than the maximum size of 
an array.
Find an element
Prompt the user for the position of an element to find        
Clue: Use Global array.*/
void insertion(int*,int*,int*);
void find(int*,int*);

int main()
{
    int size=5,pos,num,index;
    //scanf("%d",&size);
     int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",a[i]);
    }

    scanf("%d",&pos); 
    if (pos>5)
    {
       printf("Invalid !");
    }
    else
    {
        scanf("%d",&num);
        insertion(&a,&pos,&num);
        for (int i = 0; i < 5+1; i++)
        {
            printf("\n%d",a[i]);
        } 
    }
    
    //scanf("%d",&index);
   // find(&index,&a);
    
    return 0;
}

void insertion(int *a,int *pos,int *num)
{
    for (int i = 5-1; i >*pos-1 ; i--)
    {
        *a[i+1]= *a[i];
    }

    *a[*pos-1]= *num; //insertion
}
/*
void find(int *index,int *a[])
{
    printf("index : %d",*index);
}*/