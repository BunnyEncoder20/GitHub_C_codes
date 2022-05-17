#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;

void B_insert(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
    {
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    }
    else
    {
        newnode->data=value;
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
    }
    printf("[B_insert]%d node added\n",newnode->data);
}

void E_insert(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    //printf("memory allocatioon success");
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->data=value;
    newnode->next=NULL;
    

    printf("[E_insert]%d node added\n",newnode->data);
}

void display()
{
    printf("\n");
    if (head==NULL)
    {
        printf("Linked List has no nodes\n");
        return;
    }
    
    struct node* transverse=head;
    while (transverse->next!=NULL)
    {
        printf("%d <=> ",transverse->data);
        transverse=transverse->next;
    }
    printf("%d\n\n",transverse->data);
}

void display2()  //trouble with the first node, stops at 2nd last node when going from tail to head node
{
   struct node* transverse=head;
    while (transverse->next!=NULL)
    {
        transverse=transverse->next;
    }
    printf("In reverse :\n");
    while (transverse->prev!=NULL)
    {
        printf("%d <=> ",transverse->data);
        transverse=transverse->prev;
    }
    //transverse==head?printf("Yes"):printf("No");
    printf("%d\n\n",transverse->data);
}

void B_delete()
{
    struct node* temp=head;
    if(head->next==NULL)
    {
        head=NULL;
        printf("%d",temp->data);
        free(temp);
        return;
    }

    int deleto_elemento=head->data;
    head=head->next;
    free(temp);
    printf("[B_delete]%d node deleted\n",deleto_elemento);
}

void E_delete()
{
    struct node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    //printf("%d",temp->data);
    int deleto_elemento=temp->data;
    temp->prev->next=NULL;
    free(temp);
    
    printf("[E_delete]%d node deleted\n",deleto_elemento);
}

void M_insert(int value,int n)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    int counter=1;
    while (counter!=n)
    {
        temp=temp->next; counter++;
    }
    newnode->data=value;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;

    printf("[M_insert]%d node added at %d\n",newnode->data,n);
}

void M_delete(int n)
{
    struct node* temp=head;
    int counter=1;
    while (counter!=n)
    {
        temp=temp->next; counter++;
    }
    int deleto_elemento=temp->data;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);

    printf("[M_delete]%d node deleted from %d\n",deleto_elemento,n);
}
int main()
{
    B_insert(3);
    display();
    B_insert(2);
    B_insert(1);
    display();
    E_insert(4);
    E_insert(5);
    display();
    display2();
    B_delete();
    B_delete();
    display();
    E_delete();
    E_delete();
    display();
    B_insert(2);
    B_insert(1);
    E_insert(4);
    E_insert(5);
    display();
    display2();
    E_insert(10);
    display();
    M_insert(6,5);
    M_insert(7,6);
    M_insert(8,7);
    M_insert(9,8);
    display();
    display2();

    M_delete(2);
    M_delete(3);
    M_delete(4);
    M_delete(5);
    display();
    E_delete();
    display();
    display2();

    B_delete();
    B_delete();
    B_delete();
    B_delete();
    display();
    B_delete();
    display();
    return 0;
}