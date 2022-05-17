// C++ program to print largest contiguous array sum
#include<bits/stdc++.h>
using namespace std;
int size = 16;

int maxsub(int array[])
{
	int max_till_now = INT_MIN;
	int max_end = 0;
	int start=0,end=0;

	for (int i = 0; i < size; i++)
	{
		max_end = max_end + array[i];
		if (max_till_now < max_end)
			max_till_now = max_end;

		if (max_end < 0)
			max_end = 0;
	}
	return max_till_now;
}

int main()
{
	int array[] = { 13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
	int max_sum = maxsub(array);
	cout << "Maximum subarray sum is " << max_sum;
	return 0;
}
