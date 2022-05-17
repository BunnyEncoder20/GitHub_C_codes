#include<bits/stdc++.h>
using namespace std;
int size = 8;

void get_distance(int ready_queue[],int head, int difference[][2])
{
    for (int i = 0; i < size; i++)
    {
        difference[i][0]= abs(head-ready_queue[i]);
    }
}

int get_min(int difference[][2])
{
    int index=-1,mini = __INT_MAX__;

    for (int i = 0; i < size; i++)
    {
        if(difference[i][1]!=1 && mini>difference[i][0])
        {
            mini = difference[i][0]; index = i;
        }
    }
    return index;
}

void SSTF(int ready_queue[],int head)
{
    int difference[size][2] = {{0,0}};
    int seek_ops = 0, seek_seq[size]; 

    
    for (int i = 0; i < size; i++)
    {
        seek_seq[i]=head;
        get_distance(ready_queue,head,difference);
        int index = get_min(difference);
        difference[index][1]=1;
        seek_ops += difference[index][0];
        head = ready_queue[index];
    }

    seek_seq[size] = head; 
    cout<<"\nThe Seek Sequence for SSTF is : "<<"\n\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"->"<<seek_seq[i];
    }
    
    cout<<"\n\nThe seek operations taken : "<<seek_ops<<"\n\n";
}

int main()
{
    int ready_queue[8]={98,183,37,122,14,124,65,67};
    int head = 53;
    SSTF(ready_queue,head);
    return 0;
}