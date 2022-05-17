#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int INRbasket[100];
int USDbasket[100];
int EURbasket[100];
float sumINRbasket=0;
float sumUSDbasket=0;
float sumEURbasket=0;
int INRn=0;
int USDn=0;
int EURn=0;

int isprime(int num)
{
    int midway=num/2;
    for (int i = 2; i <=midway; i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}

void segcurry(int bucket[],int size)
{
    /*for (int i = 0; i < size; i++)
    {
        printf(" %d",bucket[i]);
    }
    */
    int e=0,r=0,d=0;
    for (int i = 0; i < size; i++)
    {
        if (isprime(bucket[i]))
        {
            EURbasket[e]=bucket[i]; e++; EURn++;
            sumEURbasket+=86.5; //printf("came here1");
        }
        else
        {
            if (bucket[i]%2==0)
            {
                USDbasket[d]=bucket[i]; d++; USDn++;
                sumUSDbasket+=73;   //printf("came here2");
            }
            else
            {
                INRbasket[r]=bucket[i]; r++; INRn++;
                sumINRbasket++; //printf("came here3");
            }
        }
    }
    
}


void view(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
}

float getMean(int arr[],int size)
{
    float sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum/size;
}


float getMedian(int basket[],int size)
{
    for(int i=0;i<size;i++)    //sorting array
    {
        for(int j=0;j<size;j++)
        {
            if(basket[i]<basket[j])
            {
                int temp=basket[i];
                basket[i]=basket[j];
                basket[j]=temp;
            }
        }
    }

    /*for (int i = 0; i < size; i++)
    {
        printf(" %d",basket[i]);
    }
    */

    float median=0;

    if(size%2==0)
    {
        median=( (basket[(size-1)/2] + basket[(size-1)/2+1] ) / 2.0);        
        //printf("here1");
    }
    else
    {
        median=( (basket[(size-1)/2]) / 2.0);
        //printf("here2");
    }
    return median;
}

float getMode(int a[],int n)
{
    int max=0; float mode=0;
    for(int i=0; i<n; i++)
    {
        int temp=a[i];
        int counter=0;
        for(int j=0; j<n; j++) 
        { 
            if(temp==a[j]) 
            counter++; 
            if(counter>max)
            {
                max=counter;
                mode=temp;
            }
        }
    }
    return mode;
}

void subs(int h,float value)
{
    if (h==1)
    {
        sumINRbasket-=value;
        printf("New INR total : %f",sumINRbasket);
    }
    else
    {
        if (h==2)
        {
            sumUSDbasket-=(value/73);
            printf("New USD total : %f",sumUSDbasket);
        }
        else
        {
            sumEURbasket-=(value/86.5);
             printf("New EUR total : %f",sumEURbasket);
        }
    }
}

int main()
{
    int size=25;
    int bucket[]={10,1,2,3,4,5,19,45,8,9,4,5,6,6,7,7,7,8,8,10,1,1,2,3,7};
    /*   //for manual input
    int size;
    printf("Enter the size of the bucket: ");
    scanf("%d",size);
    int bucket[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",bucket[i]);
    }
    */

    segcurry(bucket,size);
    
    int ch,h; float value;
    while (ch!=5)
    {
        printf("\n1.INR baskets\n2.USD basket\n3.EUR basket\n4.Subtract value\n5.Exit\nEnter choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: //INR basket
            printf("\nINR basket = "); view(INRbasket,INRn);
            printf("\nTotal INR value = %f",sumINRbasket);
            printf("\nINR basket mean : %f",getMean(INRbasket,INRn));
            printf("\nINR basket median : %f",getMedian(INRbasket,INRn));
            printf("\nINR basket mode : %f",getMode(INRbasket,INRn));
            printf("\n");
            break;
        case 2: //USD basket
            printf("\nUSD basket = ");view(USDbasket,USDn);
            printf("\nTotal USD value = %f",sumUSDbasket);
            printf("\nUSD basket mean : %f",getMean(USDbasket,USDn));
            printf("\nUSD basket median : %f",getMedian(USDbasket,USDn));
            printf("\nUSD basket mode : %f",getMode(USDbasket,USDn));
            printf("\n");
            break;
        case 3: //EUR basket
            printf("\nEUR basket = ");view(EURbasket,EURn);
            printf("\nTotal EUR value = %f",sumEURbasket);
            printf("\nEUR basket mean : %f",getMean(EURbasket,EURn));
            printf("\nEUR basket median : %f",getMedian(EURbasket,EURn));
            printf("\nEUR basket mode : %f",getMode(EURbasket,EURn));
            printf("\n");
            break;
        case 4:
            printf("\nWhich Currency basket? :\n1.INR basket\n2.USD basket\n3.EUR basket\n"); scanf("%d",&h);
            printf("\nHow much withdraw (in INR)?\n"); scanf("%f",&value);
            subs(h,value);
            printf("\n");
            break;
        case 5: break;
        default:
            printf("Enter valid choice!\n");
        }
    }
    return 0;
}