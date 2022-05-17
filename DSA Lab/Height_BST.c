#include<stdio.h>
#include<stdlib.h>
//use linked lists to make a small BT & calc it's height

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int digi)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = digi;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int height_of_tree(struct node* root)
{
    if (root==NULL)
    {
        return 0;
    } 
   int l_height = height_of_tree(root->left);
   int r_height = height_of_tree(root->right);

   if (l_height>=r_height)
   {
       return l_height+1;
   }
   else
   {
       return r_height+1;
   }
}

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data); 
        printf(" height of node = %d\n",height_of_tree(root)-1);
        inorder(root->right);
    }
}

int main()
{
    struct node* root = create(4);      //making root node
    struct node* n1 = create(2);      
    struct node* n2 = create(5);      
    struct node* n3 = create(1);      
    struct node* n4 = create(3);      //nodes made

    root->left = n1;                  //linking the nodes
    root->right = n2;
    root->left->left = n3;
    root->left->right = n4;           //creation of BST complete

    printf("Using InOrder Traversal : \n");
    inorder(root); printf("\n\n");

    return 0;
}