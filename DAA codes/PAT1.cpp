// Given a list of elements where one element has been missed out by mistake in a series of element. 
// In order to find the missing elements divide and conquer approach is applied so that the time taken
// to find out the missing element will be logarithmic.

#include<bits/stdc++.h>
using namespace std;
int size = 5;

int find_num(int test_arr[])
{
    int low = 0;
    int high = size-1;

    int common_diff = test_arr[1]-test_arr[0];

    while (low<=high)
    {
        int middle = high-low/2;

        //check left side
        if(middle-1>0 && test_arr[middle]-test_arr[middle-1]!=common_diff)    
            return test_arr[middle-1] + common_diff;

        //check right side
        else if(test_arr[middle+1]-test_arr[middle]!=common_diff && middle+1<size)
            return test_arr[middle+1] - common_diff;
        
        //if element lies on left subarray
        if(test_arr[middle]-test_arr[0]!=(middle-0)*common_diff)
            high = middle-1;

        //if element lies on right subarray
        else
            low = middle+1;
    }
    return 0;
}

int main()
{
    int test_arr1[] = {1, 3, 5, 7, 11};
    int test_arr2[] = {1 ,4 ,7 ,13 ,16};

    cout<<"Missing Term : "<<find_num(test_arr1);
    cout<<"\n\n";
    cout<<"Missing Term : "<<find_num(test_arr2);

    return 0;
}