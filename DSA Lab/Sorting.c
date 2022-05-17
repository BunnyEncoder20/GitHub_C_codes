#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int a[],int n)
{
    int temp,comp=0,swaps=0;
        for(int i =0; i<n-1;i++)
        {
            for (int j=0; j<n-i-1;j++)
            {
                comp++;
                if (a[j]>a[j+1])
                {
                    swap(&a[j],&a[j+1]);
                    swaps++;
                }
                
            }
        }
        printf("\n\nSorted Array: \n");
        for (int i=0; i<n;i++)
        {
             printf("%d ",a[i]);
        }
        printf("\nNumber of comparisions made : %d\n",comp);
        printf("Number of swaps made : %d\n",swaps);
}

void selection_sort(int a[],int n)
{
    int min_index,comp=0,swaps=0;

    for (int i = 0; i < n-1; i++)
    {
        min_index=i; 
        for (int j = i+1; j < n; j++)
        {
            comp++;
            if(a[j]<a[min_index])
            {
                min_index=j; 
                swap(&a[min_index],&a[i]); swaps++;
            }
        }
    }
    
    printf("\n\nSorted Array: \n");
        for (int i=0; i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nNumber of comparisions made : %d\n",comp);
        printf("Number of swaps made : %d\n",swaps);
}

void insertion_sort(int a[],int n)
{
    int key,j,comp=0,swaps=0,enter;

    for (int i = 1; i < n; i++)
    {
        key=a[i]; j=i-1; enter=0;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j]; j--; comp++; enter=1;
        }
        if(enter==0)
            continue;
        a[j+1]=key; swaps++;
    }

    printf("\n\nSorted Array: \n");
        for (int i=0; i<n;i++)
        {
             printf("%d ",a[i]);
        }
        printf("\nNumber of comparisions made : %d\n",comp);
        printf("Number of swaps made : %d\n",swaps);
}

int main()
{
    int a1[]={5,4,3,2,1},a2[]={1,3,2,5,4},a3[]={1,2,3,4,5},n=5;
    insertion_sort(a1,n);
    insertion_sort(a2,n);
    insertion_sort(a3,n);

    return 0;
}