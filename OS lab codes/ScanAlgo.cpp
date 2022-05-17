#include<bits/stdc++.h>
using namespace std;
int size=8,disk_size=200;

void scanalgo(int ready_queue[],int head,string direction)
{
    int seek_ops=0;
    int distance,current_cyl;
    vector<int> left,right,seek_seq;

    if(direction=="left")
        left.push_back(0);
    else if (direction=="right")
        right.push_back(disk_size-1);
    
    for (int i = 0; i < size; i++)
    {
        if(ready_queue[i]<head)
            left.push_back(ready_queue[i]);
        else if(ready_queue[i]>head)
            right.push_back(ready_queue[i]);
    }

    //sorting
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());

    cout<<"\n\nThe seek sequence is : "<<"\n\n"<<head;
    int runtime=2;  //run twice one for each direction
    while(runtime--)
    {
        if (direction=="left")
        {
            for (int i = left.size()-1; i >= 0; i--)
            {
                current_cyl = left[i];
                seek_seq.push_back(current_cyl);
                distance = abs(current_cyl-head);
                seek_ops+=distance;
                head = current_cyl;
            }
            direction = "right";
        }
        else if(direction=="right")
        {
            for (int i = 0; i < right.size(); i++)
            {
                current_cyl = right[i];
                seek_seq.push_back(current_cyl);
                distance = abs(current_cyl-head);
                seek_ops+=distance;
                head = current_cyl;
            }
            direction = "left";
        }
    }

    
    for (int i = 0; i < seek_seq.size(); i++)
    {
        cout<<"->"<<seek_seq[i];
    }
    cout<<"\n\nThe number of Seeks operations taken : "<<seek_ops<<"\n\n";
}

int main()
{
    int ready_queue[size] = {98,183,37,122,14,124,65,67};
    int head = 53;

    scanalgo(ready_queue,head,"right");
    return 0;
}