#include<stdio.h>
#include<stdlib.h>
//used  linked list to implement a binary tree (10 elements) 
//and use all three transversal concepts 

struct node
{
    int data;
    struct node* left;
    struct node* right;
};  

struct node* create(int digit)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = digit;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root)
{
    if (root!=NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        //printf("\n");
        preorder(root->right);
    }
}

void postorder(struct node* root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
    
}


int main()
{
    struct node* n0 = create(0); //making the nodes of the tree
    struct node* n1 = create(1);
    struct node* n2 = create(2);
    struct node* n3 = create(3);
    struct node* n4 = create(4);
    struct node* n5 = create(5);
    struct node* n6 = create(6);
    struct node* n7 = create(7);
    struct node* n8 = create(8);
    struct node* n9 = create(9);

    //printf("Working fine till now");

    n0->left = n1;      //linking the nodes
    n0->right = n2;
    n1->left = n3;
    n1->right = n4;
    n3->left = n7;
    n3->right = n8;
    n2->left = n5;
    n2->right = n6;
    n6->right = n9;

    printf("\nPreOrder Traversal : \n");
    preorder(n0); printf("\n\n");

    printf("PostOrder Traversal : \n");
    postorder(n0); printf("\n\n");

    printf("InOrder Traversal : \n");
    inorder(n0); printf("\n\n");
    return 0;
}