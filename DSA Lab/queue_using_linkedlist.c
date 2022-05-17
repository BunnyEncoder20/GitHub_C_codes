#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* front;
struct node* rear;

void enqueue(int temp)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
        printf("Memory allocation failed");
    else
    {
        newnode->data=temp;

        if(front==NULL)
        {
            front=newnode; rear=newnode;
            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
            rear->next=NULL;
        }
    }
}

void dequeue()
{
    struct node* temp;

    if(front==NULL)
        printf("Queue underflow !\n");
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
    
}
void display()
{
    struct node* counter;
    if(front==NULL)
         printf("Queue empty!\n");
    else
    {
        counter=front;
        while (counter!=NULL)
        {
            printf("%d  ",counter->data);
            counter=counter->next;
        }
        
    }       
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); 
    display();
    dequeue(); printf("\n");
    display();
    dequeue(); printf("\n");
    display();
    dequeue(); printf("\n");
    display(); 
    
    return 0;
}