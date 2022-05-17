#include<iostream>

using namespace std;

class person
{
    protected:
        char name[20];
    public :
        void getdata()
        {
            cout<<"Enter your name\n"; cin>>name;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
        }
};

class employee : public person
{
    protected :
        int eid;
        char designation[20];
    public :
        void getinfo();
        void dis();
};

class partime_employee : public employee
{
    int no_of_hours;
    public :
        void get_parttime_employee()
        {
            employee::getinfo();
            cout<<"Enter number of hours worked : "<<endl; cin>>no_of_hours;
        }
        void info_parttime_employee()
        {
            employee::dis();
            cout<<"Number of hours worked : "<<no_of_hours;
        }
};

void employee::getinfo()
{
    person::getdata();
    cout<<"Enter eid and designation :\n";
    cin>>eid>>designation;
}
void employee::dis()
{
    person::display();
    cout<<"Eid = "<<eid<<endl;
    cout<<"Designation : "<<designation<<endl;
}

main()
{
    partime_employee e;
    e.get_parttime_employee();
    e.info_parttime_employee();
    return 0;
}