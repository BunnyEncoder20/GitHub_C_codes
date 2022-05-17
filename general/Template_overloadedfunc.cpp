#include<iostream>
using namespace std;

template<class T>
void print_func(T word)
{
    cout<<word<<endl;
}

template <class T>
void print_func(T word,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<word<<endl;
    }
    
}
int main()
{
    print_func("qwerty56 sup69");
    print_func(34);
    print_func("Hello",5);
    return 0;
}