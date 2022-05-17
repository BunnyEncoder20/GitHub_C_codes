// Consider a class called Bubble sorting which will sort the integer elements in increasing order. The class will take the list of elements which is not accessible to other classes. Consider Three functions as GetList() which will read the values into the list, Sorting() which will sort the elements in the list, finally, Display() will display the sorted elements. Implement the given example.
// Input format:
// Read the number of elements
// Read the elements
// Output format:
// Display the elements
// Consider the following list for sorting
// #include<iostream>

// using namespace std;

// class bubblesorting
// {
//     private :
//     int size;
//     int list[10];

//     public:
//     int getsize()
//     {
//         int n;
//         cout<<"Enter the number of elements :";
//         cin>>n;
//         return n;
//     }

//     void getlist(int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin>>list[i];
//         }

//     }

//     void display(int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout<<list[i]<<"\n";
//         }

//     }

//     void sorting(int n)
//     {
//         int temp;
//         for (int i = 0; i < n-1; i++)
//         {
//             for (int j = 0; j < n-i-1; j++)
//             {
//                 if (list[j]>list[j+1])
//                 {
//                     temp=list[j];
//                     list[j]=list[j+1];
//                     list[j+1]=temp;
//                 }

//             }

//         }

//     }

// }s;

// int main()
// {
//     int n=s.getsize();
//     s.getlist(n);
//     s.sorting(n);
//     s.display(n);

//     return 0;
// }

// Q2)Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but sometimes a car goes by without paying (as zero toll pass). The tollbooth keeps track of the number of cars that have gone by, and of the total amount of money collected.  Model this tollbooth with a class called tollbooth. The two data items are a type unsigned int to hold the number of cars and a type double to hold the total amount of money collected as private data members. Write a member function Initialise()(function1) that will initialize these two values to zero. A member function called payingcar() (funciton2) increments the car  number and adds 0.50 to the total cash (already existing total amount). Another function called nopaycar()(function3), increments the car total but adds nothing to the cash total. The option between function2 and function3 chosen based type of pay by the customer. This process will be repeated until the option by the admin user says NO as ‘N”. Options for Payment is 0  (Zeor Toll)or 1(PAY Toll). Finally a member function called display() displays the two totals. (Note : try for 2 times of calculation to check the test cases   )

// Input format
// Read option for payment

// Read the option to proceeding

// Output format
// Print the value of the number of cars as an integer

// Print the total amount collected  as value with two decimal points

#include<iostream>
using namespace std;

class tollbooth
{
    private:
    unsigned int carnum;
    double money;

    public:
    void Initialise()
    {
        carnum=0; money=0;
    }
    void payingcar()
    {
        carnum++; money+=0.50;
    }
    void nopaycar()
    {
        carnum++;
    }
    void display()
    {
        cout<<"Number of cars = "<<carnum<<"\n";
        cout<<"Total money = "<<money;
    }
}t;

int main()
{
    char ch='2';
    // t.Initialise();
    do
    {
        switch (ch)
        {
        case '0': t.nopaycar();
        break;
        case '1': t.payingcar();
        break;
        case '2': t.Initialise();
        break;
        default:
            break;
        }

        cin>>ch;
        if (ch=='NO')
        {
            break;
        }

    } while (ch!='N');

    t.display();



    return 0;
}