/*
A company stores the following details of employees such as name, employee id, basic pay, % of DA and HRA. Given details of ‘n’ employees of an organization. Write a C code to

i. get the details of each employee.

ii. print their employee id and

iii. Total salary.

Total salary = Basic Pay + % of DA * basic pay + HRA.

Input Format

value of ‘n’

Employee name of employee1

Employee id of employee1

Basic pay of employee1

Percentage of DA of employee1

HRA of employee1

…

Employee name of employee – n

Employee id of employee – n

Basic pay of employee – n

Percentage of DA of employee – n

HRA of employee – n

Output Format

Employee id of employee1

Total salary of employee1

Employee id of employee2

Total salary of employee2

…

Employee id of employee – n

Total salary of employee – n
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n ; scanf("%d",&n);
    char ename[n][20]; int d[]={100,209,3890,4101010,52589};
    int eid[n],basicpay[n], percentageDA[n],HRA[n];
    for (int i = 0; i < 5; i++)
    {
        printf("%d",d[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d %d",&ename[i],&eid[i],&basicpay[i],&percentageDA[i],&HRA[i]);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n%d\n",eid[i],basicpay[i]+((basicpay[i]*percentageDA[i])/100)+HRA[i]);
    }



    return 0;
}