//bubblesort with O(n) complexity
#include<bits/stdc++.h>
using namespace std;
int size = 5;

void bubblesort(int arr[])
{
    
    for (int i = 0; i < size-1; i++)
    {
        bool not_swapped = true;
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                not_swapped = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if (not_swapped)
                break;
        }
        if (not_swapped)
            break;
    }
}

int main()
{
    int arr[]={5,4,3,2,1};
    cout<<"Unsorted Array :\n";
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    
    bubblesort(arr);

    cout<<"\n\nSorted Array :\n";
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";

    return 0;
}