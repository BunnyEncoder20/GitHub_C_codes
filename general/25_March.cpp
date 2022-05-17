#include<iostream>
using namespace std;

/*
void operation(int test)
{
    try
    {
        if(test) throw test;
        else throw "Value is 0";
    }
    catch(int i)
    {
        cout<<"Caught xception #:"<<i<<"\n";
    }
    catch(const char *str)
    {
        cout<<"Caught the string :"<<str<<"\n";
    }


}
int main()
{
    operation(1);
    operation(2);
    operation(0);
    operation(3);

    return 0;
}
*/

int main()
{
    int x=7;
    int &ref=x; ref = 8;
    

}