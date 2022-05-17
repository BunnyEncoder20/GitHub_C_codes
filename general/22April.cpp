#include<iostream>
using namespace std;

class vector
{
    private :
    float vect[10];


    public:
    void makevect()
    {
        float start;
        cout<<"Enter the Starting element :";
        cin>>start; vect[0]=start;
        for (int i = 1; i<10; i++)
        {
            vect[i]=vect[i-1]+1;
        }
    }
    void modify()
    {
        int pos,scalar;
        cout<<endl<<"Enter the position to be modified :";
        cin>>pos;
        cout<<endl<<"Enter the scalar value :";
        cin>>scalar;
        vect[pos-1]*=scalar;
    }
    void display()
    {
        cout<<endl;
        for (int i = 0; i < 10; i++)
        {
            cout<<vect[i]<<endl;
        }

    }
}v;


int main()
{
    v.makevect();
    v.modify();
    v.display();
    return 0;
}