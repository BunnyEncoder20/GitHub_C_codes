#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};
struct node* head;

void insert(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp = head;      //temp transverse node

    if(head==NULL)
    {
        newnode->data=value;
        newnode->link=NULL;
        head=newnode;
    }
    else
    {
        while (temp->link!=NULL)
        {
            temp=temp->link;        //taking transverse node till the end
        }
        temp->link=newnode;
        newnode->data=value;
        newnode->link=NULL;
    }
    printf("[insert]Element %d added\n",value);
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

int maxifunc()
{
    struct node* temp=head;
    int maxi=INT_MIN;

    while (temp!=NULL)
    {
        if (maxi<temp->data)
        {
            maxi=temp->data;
        }
        
        temp = temp->link;
    }
    return maxi;
}

int minifunc()
{
    struct node* temp=head;
    int mini=INT_MAX;
    while (temp!=NULL)
    {
       
        if (mini>temp->data)
        {
            mini=temp->data;
        }
        temp = temp->link;
    }
    return mini;
}
int main()
{
    int elements,maxi,mini;
    
    cout<<"Enter the 5 elements : \n";
    for (int i = 0; i < 5; i++)
    {
        cin>>elements; insert(elements);
    }

    cout<<"\n";
    display();

    //maxi = maxifunc()
    maxi=maxifunc(); mini=minifunc();
    cout<<"The maximum is : "<<maxi<<endl;
    cout<<"The minimum is : "<<mini<<endl;
    return 0;
}