#include<iostream>
using namespace std;

bool subsetsum(int set[], int n, int sum )
{
    bool subset[n+1][sum+1];

    for(int i=0; i<=n; i++)
        subset[i][0] = true;
    for(int i=1; i<=sum ; i++)
        subset[0][i] = false;

    for (int i = 1; i < n+1 ; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(j<set[i-1])
                subset[i][j] = subset[i-1][j];
            else if (j >= set[i-1])
                subset[i][j] = subset[i-1][j] || subset[i-1][j-set[i-1]] ;
        }
    }

    //printing the table
    for (int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++)
          printf ("%2d", subset[i][j]);
       cout <<"\n";
     }

    return subset[n][sum];
}

int main()
{
    int set[] = {3, 5, 6, 7, 9, 20}; int sum = 10;
    int n = sizeof(set)/sizeof(set[0]); //size of set
    if (subsetsum(set,n,sum))
        cout<<"found a subset for given sum"<<endl;
    else
        cout<<"no subset found for given sum" <<endl;
    return 0;
}