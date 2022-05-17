#include<iostream>
using namespace std;
class operators
 {
     public:
     void add();
     void subs();
     void multiple();
     void divide();
 };

 class numbers : public operators
 {
     int x,y;
     public : 
     void getnum();
     void getop();
 };
 void numbers::getnum()
 {
    cout<<"Enter numbers";
    cin>>x>>y;
 }
 void numbers::getop()
 {
     
 }

int main()
{
    numbers n; 
    n.getnum(); n.getop();
}
