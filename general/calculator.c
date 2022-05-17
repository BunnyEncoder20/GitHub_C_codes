#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calc_options();
void addition();
void substraction();
void multiplication();
void division();
void power();
void square_root();
void exponential();
void factorial();
void logarythmic();
void trigonometric();
void percentage();

int main()
{
    //wassaup()
    system("cls");
    calc_options();

    printf("\n*** Thank you ***\n\n");
    return 0;
}

void calc_options()
{
    system("cls");
    char choice;
    printf("~~~ GDK Productions Calculator ~~~\n\n\nEnter the symbol of operation :\n\n1) Addition (+)\n2) Substraction (-)\n3) Multiplication (*)\n4) Division (/)\n5) Raised to power (^)\n6) Square root (s)\n7) Exponent (e)\n8) Factorial (!)\n9) Log (l)\n10) Trigonometric functions (t)\n11) Percentage (p)\n12) Exit Calculator (x)\n\nEnter your choice : ");
    scanf("%c",&choice);
    switch (choice)
    {   
    case '+' : addition();
    break;

    case '-' : substraction();
    break;

    case '*' : multiplication();
    break;

    case '/' : division();
    break;

    case '^' : power();
    break;

    case 's' : square_root();
    break;

    case 'e' : exponential();
    break;

    case '!' : factorial();
    break;
     
    case 'l' : logarythmic();
    break;

    case 't': trigonometric();
    break;

    case 'p': percentage();
    break;

    case 'x' : return;

    
    }
}

void addition()
{
    system("cls"); int a,b;
    printf("Additions");
    printf("\n\nEnter the first number :"); scanf("%d",&a);
    printf("Enter the second number : "); scanf("%d",&b);
    printf("Sum of Numbers is = %d",a+b);
    getchar(); getchar();
    
    calc_options();
}

void substraction()
{
    system("cls"); int a,b;
    printf("Substraction : ");
    printf("\n\nEnter the first number :"); scanf("%d",&a);
    printf("Enter the second number : "); scanf("%d",&b);
    printf("Difference of Numbers is = %d",a-b);
    getchar(); getchar();
    
    calc_options();
}

void multiplication()
{
    system("cls"); int a,b;
    printf("Multiplication :");
    printf("\n\nEnter the first number :"); scanf("%d",&a);
    printf("Enter the second number : "); scanf("%d",&b);
    printf("The product of Numbers is = %d",a*b);
    getchar(); getchar();
    
    calc_options();
}

void division()
{
    system("cls"); float a,b;
    printf("Division : ");
    printf("\n\nEnter the Numerator :"); scanf("%d",&a);
    printf("Enter the Denominator : "); scanf("%d",&b);
    printf("Result is = %.3f",a/b);
    getchar(); getchar();
    
    calc_options();
}

void power()
{
    system("cls"); double a,b; 
    printf("Power Calculations");
    printf("\n\nEnter the base number :"); scanf("%lf",&a);
    printf("Enter the power number : "); scanf("%lf",&b);
    printf("%.0lf raised to power %.0lf is = %.0lf",a,b,pow(a,b));
    getchar(); getchar();
    
    calc_options();
}

void square_root()
{
    system("cls"); int a;
    printf("Square roots :");
    printf("\n\nEnter the number :"); scanf("%d",&a);
    printf("Square root of Number is = %.2f",sqrt(a));
    getchar(); getchar();
    
    calc_options();
}

void exponential()
{
    system("cls"); int a;
    printf("Exponential :");
    printf("\n\nEnter the power of e :"); scanf("%d",&a);
    printf("Expotential of the number is = %.2f",exp(a));
    getchar(); getchar();
    
    calc_options();
}

void factorial()
{
    system("cls"); int a,fact=1;
    printf("Factorial :");
    printf("\n\nEnter the number :"); scanf("%d",&a);

    for (int i = 1; i <=a; i++)
    {
        fact=fact*i;
    }
    
    printf("Factorial of %d is = %d",a,fact);
    getchar(); getchar();
    
    calc_options();
}

void logarythmic()
{
    system("cls"); int a; char ch;
    printf("Log Calculation :"); getchar();
    printf("\nBase 'e' or base '10' ? "); scanf("%c",&ch); getchar();
    printf("Enter the value of x : "); scanf("%d",&a);

    if (ch=='e')
    {
        printf("The value of log base e of the number is : %.2f",log(a));
    }
    else
    {
        printf("The value of log base 10 of the number is : %.2f",log10(a));
    }
    
    getchar() ; getchar();
    
    calc_options();
}

void trigonometric()
{
    system("cls");
    printf("Trigonometric Calculations : \n");
    char ch; float theta; getchar();
    printf("Which functions ? : \n1.Sin (s)\n2.Cos (c)\n3.Tan (t)\nEnter your pick : "); scanf("%c",&ch);
     getchar();

    switch (ch)
    {
    case 's':printf("Enter the value of the angle : "); scanf("%f",&theta);
            printf("Sin(%.2f) is = %.2f",theta,sin(theta));
    break;
    
    case 'c':printf("Enter the value of the angle : "); scanf("%f",&theta);
            printf("Cos(%.2f) is = %.2f",theta,cos(theta));
    break;

    case 't':printf("Enter the value of the angle : "); scanf("%f",&theta);
            printf("Tan(%.2f) is = %.2f",theta,tan(theta));
    break;

    default:printf("Invalid function!!!\nRedirecting to default options...");
            
        break;
    }

    getchar(); getchar();
    calc_options();
}

void percentage()
{
    system("cls");
    float percentage,total,numerator;
    printf("Percentage Calculator\n\n");
    printf("Enter the number : "); scanf("%f",&numerator);
    printf("Enter the total number : "); scanf("%f",&total);
    printf("\n\nThe percentage of %.2f in %.2f is = %.2f %",numerator,total,(numerator/total)*100);
    getchar(); getchar();
    calc_options();
    
}