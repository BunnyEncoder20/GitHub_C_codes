#include<bits/stdc++.h>
using namespace std;

first_occurance(int array[],int low,int high,int find_this,int size)
{
    if(high>=low)
    {
        int middle = low+(high-low)/2;
        if ((middle == 0 || find_this > array[middle - 1]) && array[middle] == find_this)
            return middle;

        else if (find_this > array[middle])
            return first_occurance(array, (middle + 1), high, find_this, size);
        else
            return first_occurance(array, low, (middle - 1), find_this, size);
    }
    return -1;
}

last_occurance(int array[],int low,int high,int find_this,int size)
{
    if (high >= low) 
    {
        int middle = low + (high - low) / 2;
        if ((middle == size - 1 || find_this < array[middle + 1]) && array[middle] == find_this)
            return middle;
        
        else if (find_this < array[middle])
            return last_occurance(array, low, (middle - 1), find_this, size);
        else
            return last_occurance(array, (middle + 1), high, find_this, size);
    }
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of the array : \n";
    cin>>size;
    int array[size];

    cout<<"Enter the elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    int find_this;
    cout<<"\n\nEnter the element to be searched for : ";
    cin>>find_this;
    cout<<"\n\nFirst occurance of element = "<<first_occurance(array,0,size-1,find_this,size);
    cout<<"\nLast occurance of element = "<<last_occurance(array,0,size-1,find_this,size)<<endl;
    return 0;
}