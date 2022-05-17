#include<stdio.h>
#include<stdlib.h>

void cycleswap()
{

}

int main()
{
    int a,b,c,d;
    printf("Enter the Valus of a,b,c,d :");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("Values before swapping are : \na=%d\nb=%d\nc=%d\nd=%d\n\n",a,b,c,d);

    cycleswap(&a,&b,&c,&d);
    return 0;
}