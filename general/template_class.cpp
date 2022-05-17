#include<iostream>
using namespace std;

template<class T>
class weight
{
    T kg;
    public :
    void getdata(T wt)
    {
        kg = wt ;
    }
    T senddata()
    {
        return kg;
    }
};

template<class t1,class t2>
class lengthy
{
    t1 meters; t2 cms;
    public :
    void getdata(t1 x, t2 y)
    {
        meters = x; cms = y;
    }
    t1 putmeters()
    {
        return meters;
    }
    t2 putcms()
    {
        return cms;
    }
};
int main()
{
    weight <int>obj1; 
    weight <string>obj2;
    lengthy <int,double>obj;
    obj1.getdata(5); obj2.getdata("5kgs"); obj.getdata(20,.654);
    cout<<"Entered weight is : "<<obj1.senddata()<<endl;
    cout<<"Entered weight is : "<<obj2.senddata()<<endl;
    cout<<"Entered length is : "<<obj.putmeters()<<obj.putcms()<<endl;
    return 0;
}