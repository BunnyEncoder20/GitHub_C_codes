/*
Given a square matrix of dimension, n write a C program to find the maximum along the 
diagonals. For example given a 4x4 matrix as shown below:
| 12 13 4 8 |
|24 56 23 11|
|55 43 28 19|
|77 81 99 10|

Diagonal elements are 12, 56, 28, 10, 77, 43, 23 and 8, maximum among these will be 77.

Input Format

First line contains the dimension of the square matrix, n

Next 'n' lines contain the elements of row of the matrix separated by a space

Output Format

Print the maximum value in the diagonal  {I'm going to be doing for both max and min tho}*/

#include<stdio.h>
#include<stdlib.h>

int diagonal (int n,int matrix[][n])
{
    int pmax=matrix[0][0],smax=matrix[n-1][0],pmin=matrix[0][0],smin=matrix[0][n-1];
    //p = primary, s= secondary
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                if (pmax<matrix[i][j])
                {
                    pmax=matrix[i][j];
                }
                if (pmin>matrix[i][j])
                {
                    pmin=matrix[i][j];
                }
                
            }
            if ((i+j)==(n-1))
            {
                
                if (smax<matrix[i][j])
                {
                    smax=matrix[i][j];
                }
                if (smin>matrix[i][j])
                {
                    smin=matrix[i][j];
                }
            }   
        }
    }
    printf("\nMaximum primary diagonal number = %d\nMaximum secondary diagonal number = %d\nMin in primary diagonal number = %d\nMin in secondary diagonal number = %d",pmax,smax,pmin,smin);
    int maxi=matrix[0][0];
    maxi=pmax>smax?pmax:smax;
    
    return maxi;
}

int main()
{
    system("CLS");
    int n,maxdiag;
    scanf("%d",&n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    maxdiag=diagonal(n,matrix); printf("\nMaximum of all Diagonal elements is : %d",maxdiag);
    return 0;
}