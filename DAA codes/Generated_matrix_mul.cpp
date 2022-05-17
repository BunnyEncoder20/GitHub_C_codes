#include<bits/stdc++.h>
using namespace std;

void display_mat(int x[32][32])
{
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<"\n";
    }
}

// int size = 2;
void matrix_mul_iterative(int a[32][32],int b[32][32])
{
    int result[32][32];
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < 32; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout<<"\n\nIterative method Resultant Matrix :\nTime Complexity = O(n^3)\n";  
    display_mat(result);
}

// void matrix_mul_divide_n_conquer(int a[][32],b[],[32])
// {
//     int result[32][32];
//     int n = sizeof(a)/sizeof(array[0]); //number of rows of a

    
// }

int main()
{
    srand(time(0));
    int a[32][32],b[32][32];
    
    // int test1[2][2] = {{1,0},
    //                     {0,1}}; 
    // int test2[2][2] = {{1,2},
    //                 {3,4}};

    // matrix_mul_iterative(test1,test2);

    //initializing 
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            a[i][j]=(rand()%(9-0+1))+0;
            b[i][j]=(rand()%(9-0+1))+0;
        }
    }

    //displaying
    cout<<"\n\nMatrix A :\n";
    display_mat(a);
    cout<<"\n\nMatrix B :\n";
    display_mat(b);
    
    matrix_mul_iterative(a,b);
    return 0;
}