#include<iostream>
using namespace std;
int board[10][10];


bool safe(int row, int col,int n)
{
    int i,j;
    // cout<<"safe";
//as we are going from left to right , so we only need to check the board on the left side 
//checking the left row :- 
    for (int i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }

    //checking the lower left diagonal :-
    for(i=row,j=col; j>=0 && i<n; i++,j--)
    {
        if (board[i][j])
            return false;
    }

    //checking upper left diagonal :-
    for (i=row,j=col; i>=0 && j>=0 ; i--,j--)
    {
        if (board[i][j])
            return false;
    }

    //if all of the above conditions are passed then the queen is safe
    return true; 
}

int count = 1;
void printboard(int n)
{
    // cout<<"printboard";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<n; j++)
            cout<<board[i][j]<<"  ";
        cout<<"\n";
    }
    cout<<"Completed"<<count++<<endl;
}

bool nqueens(int col, int n)
{
    // cout<<"nqueens" ;
    if (col>=n){
        printboard(n);
        return 0;
    }

    bool result = false;
    for (int i = 0; i < n; i++)
    {
            if (safe(i,col,n))
            {
                board[i][col] = 1;

                result = nqueens(col+1,n) || result;

                board[i][col] = 0 ;
            }
    }
    
    return result;
}


bool board_making(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0 ;
        }
    }

    if (!nqueens(0,n))
    {
        // cout<<"The solution do not exist" ;
        return false;
    }
    else {
        // printboard(n);
        return true;
    }
    
}

int main()
{
    int n;
    cin>>n;
    board_making(n);
    return 0;
}