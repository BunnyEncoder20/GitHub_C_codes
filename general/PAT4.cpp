#include<iostream>
using namespace std;

template<class t>
void sort(int n)
{
    int i, j; t arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (i = 0; i < n-1; i++)    
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                //swap<t>(&arr[j], &arr[j+1]);
                t temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
                
        }
       
    }

    t oarr[n];
     for(i = 0; i < n; i++){
        oarr[i] = arr[n-i-1];
    }   
    for (int i = 0; i < n; i++)
    {
        cout<<oarr[i]<<endl;
    }
    
}

int main()
{
    int datatype,size;
    cin>>datatype>>size;
    if (datatype==1)
    {
        sort<int>(size);
    }
    else
    {
        sort<float>(size);
    }
    
    return 0;
}