#include<iostream>
using namespace std;

class stack
{
    int top;
    int arr[5];

    public :
    stack()
    {
        top=-1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if(top==4)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        if(isFull())
            cout<<"Stack overflow"<<endl;
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else
        {
            int popval=arr[top];
            arr[top]=0;
            top--;
            return popval;
        }
    }

    int count()
    {
        return(top+1);
    }
    int peek(int pos)
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos,int val)
    {
        arr[pos]=val;
        cout<<"value changed at position"<<pos<<endl;
    }
    void display()
    {
        cout<<"All the values in the stack are :"<<endl;
        for (int i = 4; i>= 0; i--)
        {
            cout<<arr[i]<<endl;
        }
        
    }
};
int main()
{
    stack s;
    int option,position,value;

    do
    {
        cout<<"Enter the option :"<<endl;
        cout<<"1. Push"<<endl
            <<"2. Pop"<<endl
            <<"3. isEmpty"<<endl
            <<"4. isFull"<<endl
            <<"5. peek"<<endl
            <<"6. count"<<endl
            <<"7. change"<<endl
            <<"8. display"<<endl
            <<"9. Clear screen"<<endl
            <<"0. Exit"<<endl;
        cin>>option;
        switch (option)
        {
        case 0: 
            break;
        case 1:
            cout<<"Enter the value to be pushed :"<<endl;
            cin>>value;
            s.push(value);
            break;
        case 2:
            cout<<"pop function called\nPopped value : "<<s.pop()<<endl;
            break;
        case 3: 
            if(s.isEmpty())
                cout<<"Stack is empty"<<endl;
            else
                cout<<"Stack is not empty"<<endl;
            break;
        case 4:
            if(s.isFull())
                cout<<"Stack is full"<<endl;
            else
                cout<<"Stack is not full"<<endl;
            break;
        case 5:
            cout<<"Enetr the position to peek :"<<endl;
            cin>>position;
            cout<<"The element at position"<<position<<" is : "<<s.peek(position)<<endl;
            break;
        case 6:
            cout<<"The number of elements in the stack is : "<<s.count()<<endl;
            break;
        case 7:
            cout<<"Enter the position where to change :"<<endl;
            cin>>position;
            cout<<"Enter the value of new element : "<<endl;
            cin>>value;
            s.change(position,value);
            break;
        case 8:
            cout<<"Calling display function"<<endl;
            s.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout<<"Enter a valid input !"<<endl;
            break;
        }
    } while (option!=0);
    cout<<"Program terminated !";
    return 0;
}
