/*Consider a general asset class that can be used to represent any item that has monetary value. Some examples of an asset are: stocks, bonds, savings accounts, and any other piece of property. In designing this collection of classes, the asset class holds the data that is common to all of the specialized asset subclasses. The individual asset subclasses, such as the stock class, inherit the asset properties and contribute additional properties. Write a class to implement the above inheritance and to show the asset that can be saved based on all three classes. All the asset values in each category are considered per annum. And the interest is taken as 12% for fixed or bond deposits and 8%for saving class. The asset for the stock field is num_shares * share_price, for Bond class as (current value of fixed deposit + Interest_rate * current_value), similarly for Savings class it savings (current value + Interest_rate * current value). Consider share price value as current value.

 

Input Format:

Enter Descriptor

Enter the date

Enter the current value of Descriptor

Enter number of shares required

Enter the share price.

Enter the interest rate for bond (fixed deposits)

Enter the interest rate for Savings

Output format:

Display the Descriptor name

Display the Date

Display the asset value based on stock

Display the asset value based on Fixed Deposit

Display the asset value based on Savings amount*/

#include<iostream>
using namespace std;

int main()
{
    float var = 45.78965120000223;
    printf("%.2f",var);
    return 0;
}