#include<stdio.h>

void math(int a, int b,int *add,int *subs,float *multi,float *divi)
{
    *add=a+b;
    *subs=a-b;
    *multi=a*b;
    *divi=a/b;

}
void main()
{
    system("cls");
    int a,b,add,subs; float multi,divi;
    printf("Enter A : "); scanf("%d",&a);
    printf("Enter B : ");scanf("%d",&b);
    math(a,b,&add,&subs,&multi,&divi);
    printf("\n\nAddition : \t%d \nSubstraction :  %d \nMultiplication : %f \nDivision : %f",add,subs,multi,divi);

}