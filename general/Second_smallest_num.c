/*
Q} Given a set of elements, design an Algorithm and write the subsequent C program to 
determine the second smallest number in that set.

 

Input Format

Number of elements in 'n'

element-1

element-2

...

element-n

 

Output Format

Second smallest element in the set */

#include<stdio.h>

int sort(int nums[],int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (nums[j]>nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
            
        }
        
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("The length of the set is : %d\n",n);
    int nums[n];  
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&nums[i]);
    }
    sort(nums,n);
    printf("\n\nThe second smallest number is : %d",nums[1]);
    return 0;
}