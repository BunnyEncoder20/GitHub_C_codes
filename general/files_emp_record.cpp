#include<iostream>
#include<fstream>
using namespace std;

struct employee
{
    int eno;
    char name[20];
    float salary;
};


void menu()
{
    system("cls");
    cout<<"Menu"<<endl;
    cout<<"1. Read all records"<<endl;
    cout<<"2. Read specific record"<<endl;
    cout<<"3. Write a record"<<endl;
    cout<<"4. Update a record"<<endl;
    cout<<"5. Backup File"<<endl;
    cout<<"6. Exit"<<endl;
    int ch; cin>>ch;

    switch (ch)
    {
    case 1 :  readallrec();  
    break;
    case 2 : readspecificrec();
    break;
    case 3 : writearec();
    break;
    case 4 : updatearec();
    break;
    case 5 : backitup();  
    break;
    case 6 : cout<<"Program Terminated"<<endl; break;
    default: cout<<"invalid input !"<<endl;
        break;
    }       
}

void readallrec()
{
    struct employee emp;
    ifstream empfile("employee.txt");
    char ch; int i=1;
    cout<<"Reading all records "<<endl;

    while (!empfile.eof())
    {
        empfile.read((char*)&emp,sizeof(struct employee));
        if(!empfile.eof())
        {
            cout<<"Record no. "<<i<endl;
            cout<<"Employee ID : "<<emp.eno<endl;
            cout<<"Employee Name : "<<emp.name<endl;
            cout<<"Employee Salary : "<<emp.salary<endl;
            i++;
        }
    }
    empfile.close();
    cout<<"\n End of Operation, enter any key to continue"<<endl;
    char ch; ch=getch();
}

void readspecificrec()
{
    struct employee empfile();
    
}

void writearec()
{
    struct employee emp;
    ofstream empfile("employee.txt",ios::app);
    char ch;
    cout<<"Write a Record : "<<endl;
    cout<<"Enter the employee number"<<endl; cin>>emp.eno;
    cout<<"Enter the employee name : "<<endl; cin>>emp.name;
    cout<<"Enter the employee Salary : "<<endl; cin>>emp.salary;

    if (!empfile.write((char*)&emp,sizeof(struct employee)))
        cout<<"Error in writing the record"<<endl; 
    else    
        cout<<"One record has been entered successfully"<<endl;
    
    empfile.close();
    cout<<"\n End of Operation, enter any key to continue"<<endl;
    char ch; ch=getch();
}


int main()
{
    menu();
    return 0;
}
