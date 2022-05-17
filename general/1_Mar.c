#include<stdio.h>
#include<stdlib.h>

/*
void main()
{
    int range,n1=0,n2=1,nxt=1;
    printf("Range : ") ; scanf("%d",&range); printf("\n");
    printf("%d\n",n1);
    for (int i = 0; nxt <= range; i++)
    {
        printf("%d\n",n2); 
        nxt=n1+n2;
        n1=n2; n2=nxt;
    }
    printf("\n\n");
}
*/
int add(int,int);
int subs(int,int);
int multi(int,int);
float divi(int,int);
int mod(int,int);
void main()
{
    int num1,num2; char choice;
    scanf("%d",&num1);
    scanf("%d",&num2); getchar();
    scanf("%c",&choice);

    switch (choice)
    {
    case '+':printf("\n%d",add(num1,num2));
        break;
    case '-':printf("\n%d",subs(num1,num2));
        break;
    case '*':printf("\n%d",multi(num1,num2));
        break;
    case '/':printf("\n%.2f",divi(num1,num2));
    break;
    case '%':printf("\n%d",mod(num1,num2));
    default:
        break;
    }
}

int add(int num1,int num2)
{
    return(num1+num2);
}
int subs(int num1,int num2)
{
    return(num1-num2);
}
int multi(int num1,int num2)
{
    return(num1*num2);
}
float divi(int num1,int num2)
{
    return(num1/num2);
}
int mod(int num1,int num2)
{
    return(num1%num2);
}