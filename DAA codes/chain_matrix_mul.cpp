// Given a sequence of matrices, find the most efficient way to multiply
// these matrices together. The efficient way is the one that involves 
// the least number of multiplications.

// Input Format:
// Number of matrix: n
// Enter the dimension for n matrix (considering that column of first matrix and row of second matrix should be same. Also considered as one dimension).

// Output Format:
// Minimum number of matrix multiplication
// Test case-1:
// Input:
// 5
// 40
// 20
// 30
// 10
// 30
// Output:
// 26000
// Test case-2:
// Input:
// 4
// 10
// 30
// 5
// 60
// Output :
// 4500

#include<bits/stdc++.h>
using namespace std;

int min_mul_order(int p[], int i, int j )
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    for (k = i; k < j; k++)
    {
        count = min_mul_order(p, i, k)
                + min_mul_order(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;
    }
 
    // Return minimum count
    return min;
}

int main()
{
    int array1[]={5,40,20,30,10,30}, n1 = 6;
    int array2[]={4,10,30,5,60}, n2 = 5;

    cout<<"Min Multiplications are : "<<min_mul_order(array1, 1, n1-1);
    cout<<"\n";
    cout<<"Min Multiplications are : "<<min_mul_order(array2, 1, n2-1);
    return 0;   
}