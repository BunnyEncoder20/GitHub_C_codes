#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node* next;
};
struct node* head;

void push()
{
    int value;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    if (ptr==NULL)
        printf("\nPushing of element not possible : 404\n\n");
    else
    {
        printf("\nEnter the element : "); scanf("%d",&value);

        if(head==NULL)
        {
            ptr->value = value;  
            ptr -> next = NULL;  
            head=ptr; 
        }
        else   
        {  
            ptr->value = value;  
            ptr->next = head;  
            head=ptr;  
        }
        printf("\nElement was successfully pushed !\n\n");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nStack Underflow !!\n\n");
    }
    else
    {
        item = head->value;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("\nTop most element popped !\n\n");
    }   
}

void display()
{
    int i;
    struct node *ptr;
    ptr=head;

    if(ptr==NULL)
        printf("\nStack is empty !\n\n");
    else
    {
        while (ptr!=NULL)
        {
            printf("%d\n",ptr->value);
            ptr=ptr->next;
        }
    }
}

int main()
{
    int ch=0;
    printf("\n\n---Stack (Linked List)---\n\n");

    while (ch!=4)
    {
        printf("Enter your choice :\n");
        printf("1. Push\n2. Pop\n3. View\n4. Exit\n\nYour choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
            break;
            
            case 2: pop();
            break;

            case 3: display();
            break;

            case 4: printf("\nxxx Program terminated xxx\n" );
            break;

            default: printf("Invalid Choice please try again");
        };

    }
    
    return 0;
}



