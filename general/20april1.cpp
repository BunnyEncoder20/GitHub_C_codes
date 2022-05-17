#include<iostream>
using namespace std;

class emp
{
    private:
    int empid,age,sal;
    char name[30];

    public:
    getdata()
    {
        cout<<"Enter the id of employee :"; cin>>empid;
        cout<<"Enter the name of the employee :"; cin>>name;
        cout<<"Enter the age of the employee :"; cin>>age;
        cout<<"Enter the salary of employee : "; cin>>sal;
    }
    putdata()
    {
        cout<<"Employee ID : "<<empid<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<sal<<endl;
    }

}manager[2],worker[3],foremen[3];
int main()
{
    int category;
    cout<<"Enter the Category for employee :"<<endl<<"1.Manager"<<endl<<"2.Foremen"<<endl<<"3.Worker"<<endl;
    cin>>category;

    switch (category)
    {
    case 1:
    cout<<"Enter the data for Manager category :"<<endl;
    for (int i = 0; i < 2; i++)
    {
        manager[i].getdata();
    }
    cout<<endl<<"Data  for Manager category of Employee"<<endl;
    for (int i = 0; i < 2; i++)
    {
        manager[i].putdata();
    }
    break;

    case 2 :
    cout<<"Enter the data for the Foremen class :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        foremen[i].getdata();
    }
    cout<<endl<<"Data  for Foremen category of Employee"<<endl;
    for (int i = 0; i < 3; i++)
    {
        foremen[i].putdata();
    }
    break;

    case 3:
    cout<<"Enter the Data for worker category :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        worker[i].getdata();
    }
    cout<<endl<<"Data  for Worker category of Employee"<<endl;
    for (int i = 0; i < 3; i++)
    {
        worker[i].putdata();
    }

    default: cout<<"Invalid input !"<<endl<<"Terminated";
        break;
    }

    return 0;
}