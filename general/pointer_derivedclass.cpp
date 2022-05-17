#include<iostream>
using namespace std;

class BC
{
    public :
        int b;
    void show()
    {
        cout<<"b= "<<b<<endl;
    }
};

class DC: public BC
{
    public :
        int d;
    void show()
    {
        cout<<"b= "<<b<<endl;
        cout<<"d= "<<d<<endl;
    }
};


int main()
{
BC *bptr;
BC base;
bptr = &base;
bptr->b = 100;
cout<<"bptr points to base object"<<endl;
bptr->show();
DC derived;
bptr = &derived;
bptr->b = 200;
//Bptr.d = 300; check this
cout<<"bptr points to derived object \n";
bptr->show();
DC *dptr;
dptr = &derived;
dptr->d = 300;
cout<<"dptr is derived type pointer"<<endl;
dptr->show();
return 0;
}
