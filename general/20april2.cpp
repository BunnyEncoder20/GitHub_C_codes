#include<iostream>
using namespace std;

class time
{
    private:
    int hours1,minutes1,hours2,minutes2,sumh,summ;

    public :
    void gettime()
    {
        cout<<"Enter the Hour 1:"<<endl; cin>>hours1;
        cout<<"Enter the minutes 1:"<<endl; cin>>minutes1;
        cout<<"Enter the Hour 2:"<<endl; cin>>hours2;
        cout<<"Enter the minutes 2:"<<endl; cin>>minutes2;

    }
    void puttime()
    {
        cout<<"Total Time = "<<sumh<<" hrs "<< summ<<" mins"<<endl;
    }
    void addtime()
    {
        summ=minutes1+minutes2;
        sumh=hours1+hours2+(summ/60);
        summ=summ%60;
    }
}t;

int main()
{
    t.gettime();
    t.addtime();
    t.puttime();
    return 0;
}