/* Insertion sort
1. 10K inputs in increasing order sorted. Note time taken
2. 10K inputs in decreasing order sorted. Note time taken
3. 10K inputs in random order. Note time taken
HW. 100 inputs in random order. Note time taken for sorting numbers in odd places in array
*/
#include<bits/stdc++.h>
using namespace std;

double isort(int arr[],int size)
{
    double comps=0;
    for (int i = 1; i < size; i++)
    {
        int key = arr[i],j = i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j]; comps++;
            j=j-1;
        }
        comps++;
        arr[j+1]=key;
    }
    return comps;
}

void printarr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size = 100000;
    int asc_arr[size];
    int dsc_arr[size];
    int rand_arr[size];
    double comparisons1,comparisons2,comparisons3;

    time_t start1,end1,start2,end2,start3,end3;
    double tt1,tt2,tt3;

    //initialize arrays
    for (int i = 0; i < 99999; i++)
    {
        asc_arr[i]=i;
    }
    
    for (int i = 100000; i > 0; i--)
    {
        dsc_arr[i]=i;
    }
    
    for (int i = 0; i < 99999; i++)
    {
        rand_arr[i]=rand();
    }
    
    //sort arrays
    time(&start1);
    comparisons1 = isort(asc_arr,size);
    //printarr(asc_arr,size);
    time(&end1);  
    tt1 = double(end1-start1);
    cout<<"\n\nAscending Order took "<<tt1<<setprecision(5)<<"secs to run\n";
    cout<<"Ascending Order took "<<comparisons1<<" comparisons\n\n";
    
    
    time(&start2);
    comparisons2 = isort(dsc_arr,size);
    //printarr(dsc_arr,size);
    time(&end2);   
    tt2 = double(end2-start2);
    cout<<"\n\nDecending Order took "<<tt2<<setprecision(5)<<"secs to run\n";
    cout<<"Decending Order took "<<comparisons2<<" comparisons\n\n";
    
    
    time(&start3);
    comparisons3 = isort(rand_arr,size);
    //printarr(rand_arr,size);
    time(&end3);
    tt3 = double(end3-start3);
    cout<<"\n\nRandom Order took "<<tt3<<setprecision(5)<<"secs to run\n";
    cout<<"Random Order took "<<comparisons3<<" comparisons\n\n";
    return 0;
}