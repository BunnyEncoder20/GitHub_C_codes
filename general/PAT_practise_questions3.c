/*
Given an nXn matrix with entries as numbers, write an algorithm and C program to print the maximum value in each row of the matrix.

Input Format

Value of 'n'

Element in first row first column

Element in first row second column

..

Element in the first row n-th column

Element in second row first column

Element in second row second column

..

Element in the second row n-th column

...

Element in nth row first column

Element in nth row second column

..

Element in nth row n-th column

Output Format

Maximum value in the first row

Maximum value in the second row

...

Maximum value in the n-th row
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,val,k=0; scanf("%d",&size);
    int mat[size][size],maxi[size];

    for (int i = 0; i < size; i++)
    {
        maxi[k]=0;
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&val);
            if (val>maxi[k])
            {
                maxi[k]=val;
            }

        }
        k++;

    }
    for (int i = 0; i < size; i++)
    {
        printf("Max value in %d row is : %d\n",i+1,maxi[i]);
    }


    return 0;
}