#include<bits/stdc++.h>
using namespace std;

void FCFS(int ready_queue[],int head)
{
    int seek_ops=0,cylinders_moved,current_cyl;

    cout<<"\nSeeking Sequence : "<<endl<<head;
    for (int i = 0; i < 8; i++)
    {
        current_cyl = ready_queue[i];
        cylinders_moved = current_cyl-head;
        seek_ops += cylinders_moved;
        head = current_cyl;
    }
    
    for (int i = 0; i < 8; i++)
    {
        cout<<"->"<<ready_queue[i];
    }
        
    cout<<"\nThe Number of Seek operations : "<<seek_ops<<"\n\n";
    
}

int main()
{
    int ready_queue[8]={98,183,37,122,14,124,65,67};
    int head = 53;
    FCFS(ready_queue,head);
    return 0;
}