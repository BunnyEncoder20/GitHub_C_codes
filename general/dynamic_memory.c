#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
    int *ptr1=(int*)malloc(5*sizeof(int));
    int *ptr2=(int*)calloc(5,sizeof(int));
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d",&ptr1[i]);
        //ptr1++;
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d",&ptr2[i]);
        //ptr2++;
    }
    
    
    free(ptr1);free(ptr2);
    return 0;
}*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a; int(*ptr)[5]=&a;
    printf("p = %d , ptr = %d\n",p,ptr);
    p++;ptr++;
    printf("p = %d , ptr = %d\n",p,ptr);

    printf("\n\n\n");   //multidimensional array with pointers


    int a2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d %d\t",(*(a2+i)+j),*(*(a2+i)+j));
        }
        printf("\n");
    }
    

    printf("\n\n");
} */

void main()     //Percentage of student using dynamic memory alloc of pointers 
{
    int size;
    printf("Enter the number of subjects : "); scanf("%d",&size);
    int *ptr=(int*)calloc(size,sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    float p,total=0;
    for (int i = 0; i < size; i++)
    {
        total+=ptr[i];
    }
    p=(total/(size*100))*100;
    
    printf("\nPercentage of student is = %.2f",p);

    free(ptr);
}