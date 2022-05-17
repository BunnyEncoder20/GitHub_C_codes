#include<stdio.h>
#include<string.h>

#define N 5
int Queue[N];
int front =-1;
int rear =-1;

void enqueue(int val)
{
    if(rear==N-1)
    {
        printf("Queue is full !\n");
    }
    else if (front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        Queue[rear]=val;
    }
    else
    {
        rear++;
        Queue[rear]=val;
    }
}

void dequeue()
{
    if (front==-1 && rear==-1)
    {
        printf("The queue is empty ! \n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
    
}

void display()
{
    if(front==-1&&rear==-1)
    {
         printf("The queue is empty ! \n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d  ",Queue[i]);
        }
    }
    
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3); printf("\n");
    display();
    dequeue(); printf("\n");
    display();
    dequeue(); printf("\n");
    display();
}