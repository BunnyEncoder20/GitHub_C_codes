#include<bits/stdc++.h>
using namespace std;

int size = 3;

struct process
{
    int process_id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
    int start_time;
};

bool compare_bursts(process p1, process p2)
{
    return p1.burst_time<p2.burst_time;     //returns true if p1 less than p2 and in right place else returns false
}                                               //if false then p2 should come before p1

int main()
{
    struct process p[3];
    int p_num = 1001;
    cout<<"\nThe number of processes : "<<size<<"\nEnter the Burst times for the processes :\n\n";

    for (int i = 0; i < size; i++)
    {
        p[i].process_id = p_num;
        p[i].arrival_time = 0;
        cout<<"Enter the Burst time for process_"<<p_num++<<" :\n";
        cin>>p[i].burst_time;
    }

    sort(p,p+size,compare_bursts);
    
    int total_waiting_time = 0; float avg_waiting_time;
    int total_turnaround_time = 0; float avg_turnaround_time;

    for (int i = 0; i < size; i++)
    {
        if(i==0)
            p[i].start_time = 0;
        else
            p[i].start_time = p[i-1].completion_time;
        
        p[i].completion_time = p[i].start_time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

        total_waiting_time += p[i].waiting_time;
        total_turnaround_time += p[i].turnaround_time;
    }

    avg_waiting_time = (float)total_waiting_time/size;
    avg_turnaround_time = (float)total_turnaround_time/size;
    
    cout<<"Process_ID"<<"   "<<"Burst Time"<<"   "<<"Waiting time"<<"   "<<"TurnAround\n";

    for (int i = 0; i < size; i++)
        cout<<p[i].process_id<<"          "<<p[i].burst_time<<"           "<<p[i].waiting_time<<"             "<<p[i].turnaround_time<<endl;
    
    cout<<"\n\n";
    cout<<setprecision(3)<<fixed;
    cout<<"Average Waiting Time : "<<avg_waiting_time<<"\n";
    cout<<"Average Turnaround Time : "<<avg_turnaround_time<<"\n\n";
    return 0;
}