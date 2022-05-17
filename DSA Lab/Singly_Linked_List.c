#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* head;

void B_insert(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
    {
        newnode->data=value;
        newnode->link=NULL;
        head=newnode;
    }
    else
    {
        newnode->data=value;
        newnode->link=head;
        head=newnode;    
    }
    printf("[B_insert]Element %d added\n",value);
}

void E_insert(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp = head;      //temp transverse node
    while (temp->link!=NULL)
    {
        temp=temp->link;        //taking transverse node till the end
    }
    temp->link=newnode;
    newnode->data=value;
    newnode->link=NULL;

    printf("[E_insert]Element %d added\n",value);
}

void M_insert(int value,int n)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    int counter=1;

    while (counter!=n)
    {
        temp=temp->link;    //getting temp node to desized position 
        counter++;
    }
    newnode->data=value;
    newnode->link=temp->link;     //newnode next points to the next node in link
    temp->link=newnode;         //postional node points to new node

    printf("[M_insert]Element %d added\n",value);
}

void B_delete()
{
    int del_elemento = head->data;
    head=head->link;

    printf("[B_delete]Element %d deleted\n",del_elemento);
}

void E_delete()
{
    struct node* temp=head;
    while (temp->link->link!=NULL)
    {
        temp=temp->link;    //getting to 2nd last element 
    }
    int del_elemento=temp->link->data;
    temp->link=NULL;
    
    printf("[E_delete]Element %d deleted\n",del_elemento);
}

void M_delete(int n)
{
    struct node* temp=head;
    int counter=1;
    while (counter!=n-1)
    {
        temp=temp->link;
        counter++;
    }
    //printf("%d\n",counter);
    int del_elemento=temp->link->data;
    temp->link=temp->link->link;

    printf("[M_delete]Element %d deleted\n",del_elemento);
}

void display()
{
    struct node* transverse=head;
    while (transverse->link!=NULL)
    {
        printf("%d -> ",transverse->data);
        transverse=transverse->link;
    }
    printf("%d\n\n",transverse->data);    
}

int main()
{
    B_insert(2);
    B_insert(1);
    display();
    E_insert(3);
    E_insert(6);
    display();
    M_insert(4,3);
    M_insert(5,4);
    display();
    B_delete();
    B_delete();
    display();
    E_delete();
    E_delete();
    display();
    B_insert(2);
    B_insert(1);
    E_insert(5);
    E_insert(6);
    display();
    M_delete(4);
    M_delete(3);
    display();
    return 0;
}