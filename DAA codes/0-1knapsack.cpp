#include<iostream>
#include<vector>
using namespace std;

int maxi(int a , int b)
{ return (a>b)? a:b ;}

int knap(int W, int wt[], int val[], int n)
{
    int w;
    vector<vector<int>> K(n+1,vector<int>(W+1));

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i==0||w==0)
            {
                K[i][w] = 0;
            }
            else if(wt[i-1]<=w)
                K[i][w] = maxi(val[i-1]+K[i-1][w-wt[i-1]], K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
        
    }
    
    return K[n][W];
}

int main()
{
    int W = 50;
    int wt[] = {10,20,30};
    int  val[] = {60,100,120};
    int n = sizeof(val)/sizeof(val[0]);
    cout<<"Maximum profits : "<<knap(W,wt,val,n) ;
    return 0;
}