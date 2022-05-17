#include<stdio.h>

int stack[100],x,n,top,ch;
void push()
{
    if(top>=n-1)
        printf("\nStack Overflow !!!");
    else
    {
        printf("\nEnter the element to be added to the stack :\n");
        scanf("%d",&x);
        top++; stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
        printf("\nStack Underflow !!!");
    else
    {
        printf("\nElement removed from stack : %d",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("\nElements of the stack are :\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
    else
    {
        printf("\nStack is Empty !");
    }
}

void peek()
{
    if(top<=-1)
        printf("\nStack is empty !");
    else{
        printf("\nThe top/peek element is : %d",stack[top]);
    }
}

int main()
{
    top=-1;
    printf("Enter the size of the stack : ");
    scanf("%d",&n);
    

    do
    {
        printf("Enter your choice : \n1. Push\n2. Pop\n3.View Stack\n4. Peek\n5. Exit\nchoice = ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1: push();
                break;
            case 2 : pop();
                break;
            case 3 : display();
                break;
            case 4 : peek();
                break;
            case 5 : 
                break;
            default: printf("\nNot a valid choice, try again!");
                break;
        }
        printf("\n\n");
    } while (ch!=5);
    printf("\nThank you for studying C stack");
    return 0;
}