#include<iostream>
using namespace std;

class item 
{
    int code;
    float price;
    public :
    void getdata(int a , float b)
    {
        code = a ;
        price = b;
    }
    void show(void)
    {
        cout<<"Code : "<<code<<endl;
        cout<<"Price : "<<price<<endl;
    }

};

int main()
{
    item x; item *ptr=&x;
    x.getdata(1,10); x.show();
    ptr->getdata(2,20);
    ptr->show();
    return 0;
}