#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int lower,upper,flag,count=0;
    printf("Enter the lower limit :\n"); scanf("%d",&lower);
    printf("Enter the Upper limti :\n"); scanf("%d",&upper);

    while (lower<upper)
    {
        flag=1;
        for (int i = 2; i<=lower/2; i++)
        {
            if (lower%i==0) 
            {
                flag=0;
                break;
            }
            
        }
        if (flag==1)
        {
            printf("%d\n",lower); count++;
        }
        lower++; 
        
    }
    printf("Total number of prime numbers : %d",count);
       
}