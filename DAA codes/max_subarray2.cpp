#include <bits/stdc++.h>
using namespace std;
int size =16;

int max(int x, int y) {
    return (x > y) ? x : y;
}
 

int maxsub(int array[], int low, int high)
{
    if (high <= low) {
		return array[low];
	}

    int left_max = INT_MIN;
    int sum = 0;
    int mid = (low + high) / 2;

    //left side
    for (int i = mid; i >= low; i--)
    {
        sum += array[i];
        if (sum > left_max) {
            left_max = sum;
        }
    }
 
    //right side
    int right_max = INT_MIN;
    sum = 0;    // reset sum to 0
    for (int i = mid + 1; i <= high; i++)
    {
        sum += array[i];
        if (sum > right_max) {
            right_max = sum;
        }
    }
 
    // Recursively find the maximum subarray sum for the left
    // and right subarray, and take maximum
    int left_right_max = max(maxsub(array, low, mid),
                            maxsub(array, mid + 1, high));
 
    // return the maximum of the three
    return max(left_max + right_max,left_right_max);
}
 
int main()
{
    int array[] = { 13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};

    cout<<"The maxium subarray sum is = "<<maxsub(array, 0, size - 1);
 
    return 0;
}