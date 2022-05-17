#include<bits/stdc++.h>
using namespace std;
int size = 8, disk_size = 200;
void C_scan(int ready_queue[],int head)
{
    int seek_ops=0,distance,current_cyl;
    vector<int> left,right,seek_seq;

    left.push_back(0);  //end values
    right.push_back(disk_size-1);

    for (int i = 0; i < size; i++)      //pushing values
    {
        if(ready_queue[i]<head)
            left.push_back(ready_queue[i]);
        else if(ready_queue[i]>head)
            right.push_back(ready_queue[i]);
    }
    
    sort(left.begin(),left.end());  //sorting
    sort(right.begin(),right.end());

    cout<<"\n\nThe seek sequence is : "<<"\n\n"<<head;
    for (int i = 0; i < right.size(); i++)
    {
        current_cyl=right[i];
        seek_seq.push_back(current_cyl);
        distance = abs(current_cyl-head);
        seek_ops+=distance;
        head=current_cyl;
    }
    head = 0;       //after getting to right end jump to front
    seek_ops+=(disk_size-1);

    for (int i = 0; i < left.size(); i++)
    {
        current_cyl=left[i];
        seek_seq.push_back(current_cyl);
        distance = abs(current_cyl-head);
        seek_ops+=distance;
        head=current_cyl;
    }
    
    //displaying results
    for (int i = 0; i < seek_seq.size(); i++)
    {
        cout<<"->"<<seek_seq[i];S
    }
    cout<<"\n\nThe number of seek operations took place : "<<seek_ops<<"\n\n";
}

int main()
{
    int ready_queue[size] = {98,183,37,122,14,124,65,67};
    int head = 53;

    C_scan(ready_queue,head);
    return 0;
}