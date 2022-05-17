#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int * y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bsort(int a[],int size)
{
   // printf("here");
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int number_of_towers(int a[],int size)
{
    int i=0,count=0,blocks[]={0,0,0,0,0,0,0,0,0,0};
    int towers[]={0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    bsort(a,size);
    
    for (int i = 0; i < size; i++)
    {
        blocks[a[i]]=1; 
    }
    printf("\n\n");
    
    
    
    
    while (i<10)
    {
        if (blocks[i]==1)
        {
            if (blocks[i+1]==1)
            {
                //printf("here %d\n",i);
                towers[i+1]=1; i+=3; 
            }
            else
            {
                towers[i]=1; i+=2;
            }
            count++; //printf("here %d\n",i);
        }
        else
        {
            i++;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",blocks[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",towers[i]);
    }
    printf("\n\n");

    return count;
}


int main()
{
    int houses[]={8,9,1,2,3,6};
    int sizehouses=sizeof(houses)/sizeof(houses[0]);
    //printf("%d\n",sizehouses);

    printf("\nThe minimum number of towers are : %d\n",number_of_towers(houses,sizehouses));

    return 0;
}