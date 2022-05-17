#include<bits/stdc++.h>
using namespace std;
int size=8,disk_size=200;

void c_look(int ready_queue[],int head)
{
    int seek_ops=0,distance,current_cyl;
    vector<int> left,right,seek_seq;

    for (int i = 0; i < size; i++)      //pushing values
    {
        if(ready_queue[i]<head)
            left.push_back(ready_queue[i]);
        else if(ready_queue[i]>head)
            right.push_back(ready_queue[i]);
    }

    sort(left.begin(),left.end());  //sorting
    sort(right.begin(),right.end());

    cout<<"The Seek sequence is :\n\n"<<head;
        for (int i = 0; i < right.size(); i++)
        {
            current_cyl=right[i];
            seek_seq.push_back(current_cyl);
            distance = abs(current_cyl-head);
            seek_ops+=distance;
            head = current_cyl;
        }

        seek_ops+=abs(left[0]-head);    //jumping to leftmost req_cylinder 
        head = left[0];

        for (int i = 0; i < left.size(); i++)
        {
            current_cyl=left[i];
            seek_seq.push_back(current_cyl);
            distance = abs(current_cyl-head);
            seek_ops+=distance;
            head = current_cyl;
        }

    
    //displaying results
    for (int i = 0; i < seek_seq.size(); i++)
    {
        cout<<"->"<<seek_seq[i];
    }
    
    cout<<"\n\nThe number of seek operations performed : "<<seek_ops<<"\n\n";
    
}

int main()
{
    int ready_queue[size] = {98,183,37,122,14,124,65,67};
    int head = 53;

    c_look(ready_queue,head);
    return 0;
}