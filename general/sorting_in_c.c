#include<stdio.h>
/*
Write a C program to sort an input array in ascending order.

Example input:

7

2

13

5

1

99  

Output:

1                                                                                             

2                                                                                             

5                                                                                             

7                                                                                             

13                                                                                            

99  
*/
void bubblesort(int a[],int n)
{
    int temp;
        for(int i =0; i<n;i++)
        {
            for (int j=0; j<n-i-1;j++)
            {
                if (a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                
            }
        }
        printf("\n\nSorted Array: \n");
        for (int i=0; i<n;i++)
        {
             printf("%d\n",a[i]);

        }
}

void main()
{
    int n=5;
    int a[n];
    for (int i=0;i<n;i++)   
    {
        scanf("%d",&a[i]);
    }
    
   bubblesort(a,n);
}
