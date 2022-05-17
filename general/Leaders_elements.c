/*
Leaders of Elements
Given a set of 'n' elements in an order, identify all the leaders and print them. An 
element is said to be a leader if all the elements to its right are smaller than it. 
For example, if the elements are 12, 13, 16, 7, 10 then there is only one leader element 16. 
If there are no leaders in the given set of elements then print 'No leaders'.

Input Format

Number of elements in the given set: 'n'

element-1

element-2

...

element-n

Output Format

Elements that are leaders. Else, print 'No leaders' when there is no leader */
#include<stdio.h>

void leaders(int *set,int n)
{
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        int counter=0;
        for (int j = i; j < n; j++)
        {
            if (set[i]>set[j])
            {
                counter++;
            }
            
        }
        if (counter==n-i-1)
        {
            printf("\n%d\n",set[i]); flag=1;
        }
    }
    if (flag==0)
    {
        printf("No leaders");   
    }
    
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int set[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&set[i]);
    }
    leaders(set,n);
    return 0; 
}