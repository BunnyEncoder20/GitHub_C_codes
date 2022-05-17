#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
    int n[10];
    for (int  i = 0; i < 10; i++)
    {
        n[i]=i+100;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("\n%d",n[j]);
    }
    
    
    return 0;
}
*/
/*
void main()         //Q1) Finding odd and even number in an array
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
            printf("\n%d : The number is even",a[i]);
        }
        else
        {
            printf("\n%d : The number is odd",a[i]);
        }
    }
    
    
}
*/
/*
void main()         //Q3) Displaying Array
{
    char a[5];
    int b[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d character code : ",i+1); scanf("%c",&a[i]);
        printf("Enter the %d interger code : ",i+1); scanf("%d",&b[i]); getchar();
    }

    printf("Character code\tInterger code\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c\t\t%d\n",a[i],b[i]);
    }
    
}*/

/*
void main()             //Q2} 2D Matrix Multiplications
{
    system("cls");
    int rows,cols;
    printf("Enter the rows of 1st matrix : "); scanf("%d",&rows);
    printf("Enter the rows of 1st matrix : "); scanf("%d",&cols);
    
    int a[rows][cols],b[rows][cols],res[rows][cols];

        printf("Enter the First matrix :\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }

        printf("\nEnter the numbers of matrix 2 : \n");

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                scanf("%d",&b[i][j]);
            }
            
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                res[i][j]=0;
                for (int k = 0; k < cols; k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
                
            }
            
        }
        printf("\n\nResultant matrix is :\n");
        for(int i=0;i<rows;i++)    
        {    
            for(int j=0;j<cols;j++)    
            {    
                printf("%d\t",res[i][j]);    
            }    
            printf("\n");    
        }   
        printf("\n");
    
   
    

}*/

void main()     //Q4) To fins duplicate numbers and their postion in array
{
    int n;
    printf("Enter the number of numbers : "); scanf("%d",&n);  
    int a[5];
    printf("Enter the numbers of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            else
            {
                if (a[i]==a[j])
                {
                    printf("The number %d is duplicated at positions %d & %d\n",a[i],i,j);
                    
                }
                
            }
            
            
        }
        
    }
    
}