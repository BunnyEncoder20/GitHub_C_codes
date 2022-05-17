//insertion sort using B_search to find the point of insertion
#include<bits/stdc++.h>
#include<list>
using namespace std;
int size = 10;

int b_search(int arr[],int element, int low, int high)
{
    if(high<=low)
        return (element>arr[low])?(low+1):low;
    
    int middle = (high+low)/2;
    
    if(element == middle)
        return middle+1;
    else if(element > arr[middle])
        return b_search(arr,element,middle+1,high);
    else
        return b_search(arr,element,low,middle-1);
}

void binary_i_sort(int arr[])
{
    int location,high;

    for (int i = 1; i < size; i++)
    {
        high = i-1;
        int element = arr[i];
        location = b_search(arr,element,0,high);

        while (high >= location)
        {
            arr[high+1]=arr[high];
            high--;
        }
        arr[high+1] = element;
    }
    
}

int main()
{
    int arr[] = {1,3,5,7,9,8,6,4,2};
    
    cout<<"Unsorted Array :\n";
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    
    binary_i_sort(arr);

    cout<<"\n\nSorted Array :\n";
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    
    

    return 0;
}