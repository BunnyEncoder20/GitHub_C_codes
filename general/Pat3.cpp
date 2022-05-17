#include<iostream>
#include<string.h>
using namespace std;

class person
{
    public :
    char name[20];
    int code;
    person(char n,int c)
    {
        cin>>name>>code;
        cout<<name<<endl<<code<<endl;
    }
    virtual void display()
    {
        cout<<name<<endl;
        cout<<code<<endl;
    }
};
class account : virtual public person
{
    public :
    int pay;
    account(char n,int c, int p)
    {
        strcpy(n,name); code=c; pay=p;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<code<<endl;
        cout<<pay<<endl;
    }
};
class admin : virtual public person
{
    public:
    int exp;
    admin(char n,int c, int e)
    {
        strcpy(n,name); code=c; exp = e;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<code<<endl;
        cout<<exp<<endl;
    }
};
class master : public account,admin
{
    
    public :
    master(char n,int c, int e, int p)
    {
        strcpy(name,n); code=c; exp = e; pay=p; 
    }
    void display()
    {
        cout<<name<<endl;
        cout<<code<<endl;
        cout<<exp<<endl;
        cout<<pay<<endl;
        if(pay<5000)
        {
            cout<<"Trainee";
        }
        else
        {cout<<"Master Trainee";}
    }
};
int main()
{
    char name[20]; int c,e,p;
    
    cin>>name>>c>>e>>p;
    master m(name[20],c,e,p);
    m.display();
    return 0;
}