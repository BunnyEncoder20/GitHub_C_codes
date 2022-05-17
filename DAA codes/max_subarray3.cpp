#include<bits/stdc++.h>
using namespace std;
int size = 16;

void maxsub(int array[])
{
    int max_till_now = INT_MIN;
    int max_end = 0;
    int start = 0, end = 0, s=0;
 
    for (int i=0; i< size; i++ )
    {
        max_end += array[i];
 
        if (max_till_now < max_end)
        {
            max_till_now = max_end;
            start = s;
            end = i;
        }
 
        if (max_end < 0)
        {
            max_end = 0;
            s = i + 1;
        }
    }
    cout << "Maximum contiguous sum is  = "<< max_till_now << "\n";
    cout << "Start index : "<< start << "\n" << "End index "<< end <<"\n";
}
 
int main()
{
    int array[] = { 13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    maxsub(array);
    return 0;
}