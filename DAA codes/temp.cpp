#include<iostream>
#include<algorithm>
using namespace std;

struct item{
	int weight,value;
	item(int value, int weight) : value(value),weight(weight){}
};

bool cmp(struct item a, struct item b)
{
	double r1 = (double) a.value/a.weight;
	double r2 = (double) b.value/b.weight;
	return r1>r2;
}

double knap(struct item arr[], int N, int size)
{
	sort(arr,arr+size,cmp);
	int current_weight = 0;
	double finalvalue = 0.0;

	for (int i = 0; i < size; i++)
	{
		if (current_weight + arr[i].weight<=N)
		{
			current_weight+=arr[i].weight;
			finalvalue+=arr[i].value;
		}
		else{
			int remaining = N-current_weight;
			finalvalue += arr[i].value*((double)remaining / arr[i].weight);
			break;
		}
	}

	return finalvalue;
}

int main()
{
	item arr[] = { { 100, 10 },
                        { 280, 40 },
                        { 120, 20 },
                        { 120, 24 } };
	int N = 60;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Loot : "<<knap(arr,N,size);
	return 0;
}
