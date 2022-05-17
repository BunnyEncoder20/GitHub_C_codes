#include<stdio.h>
#include<stdlib.h>



int main()              // Q)Total marks of 6 subjects 
{
    float marks,total=0; char bal[10];
    printf("Enter the marks of subjects below :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Marks of subject %d : ",i+1); scanf("%f",&marks);
        total+=marks;
    }
    printf("The total marks are : %.2f",total);
    
    
    return 0;
}

/*
int main()          //display all digits of the long number :
{
    int n,i=0;
    printf("Enter the interger value : "); scanf("%d",&n);
    while (n!=0)
    {
        
        printf("The %d place digit is %d \n",i+1,n%10);
        n=n/10; i++;
    }
    
   
}
*/

/*
int main()          //greatest among 3 numbers 
{
    int n1,n2,n3;
    printf("Enter n1 : "); scanf("%d",&n1);
    printf("Enter n2 : "); scanf("%d",&n2);
    printf("Enter n3 : "); scanf("%d",&n3);

    if ((n1>n2) && (n1>n3))
    {
        printf("%d is the greatest number !",n1);
    }
    else if ((n2>n1)&&(n2>n3))
    {
        printf("%d is the greatest number !",n2);
    }
    else if ((n3>n1)&&(n3>n2))
    {
        printf("%d is the greatest number !",n3);
    }
    
    
    
    

}
*/
/*
int main()          //displaying max and min from a set of numbers
{
    system("cls");
    int max=-32768,min=32768,n,temp;
    printf("Enter the total number of numbers : "); scanf("%d",&n);
    printf("Enter the numbers one by one : \n");

    for (int i = 0; i <n; i++)
    {
        scanf("%d",&temp);
        if (temp<min)
        {
            min=temp; continue;
        }
        if (temp>max)
        {
            max=temp; continue;
        }
        
        
    }
    printf("The largest number was %d\nAnd the smallest one was %d",max,min);

    return 0;     
}
*/