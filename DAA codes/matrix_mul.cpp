#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matA[3][3]={1,2,3,4,5,6,7,8,9};
    int matB[3][3]={1,2,3,4,5,6,7,8,9};
    int product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j]=0;

            for (int k = 0; k < 3; k++)
            {
                product[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }
    cout<<"\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<product[i][j]<<" ";   //printing the Matrix
        }
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}