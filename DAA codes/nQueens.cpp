#include<iostream>
// #define n 4
using namespace std;

bool safe(int board[][10] ,int row, int col,int n)
{
    int i,j;

//as we are going from left to right , so we only need to check the board on the left side 
//as we might have placed a queen back there only

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

bool nqueens(int board[][10], int col, int n)
{
    //once we reach the end col that means all the queens have been placed successfully
    //Hence we return true on that
    if (col>=n)
       return true;
    
    for (int i = 0; i < n; i++)
    {
        if (safe(board,i,col,n))
        {
            board[i][col] = 1;

            if (nqueens(board,col+1,n))
                return true;

            board[i][col] = 0; //backtracking
            //if the placements of the queens doesn't lead to a solution, remove the queens
        }
    }
    return false;
    // if queen cannot be placed in any row, then return false
}


void printboard(int board[][10],int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<n; j++)
            cout<<board[i][j]<<"  ";
        cout<<"\n";
    }
}


bool board_making(int n)
{
    int board[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0 ;
        }
    }

    if (!nqueens(board,0,n))
    {
        cout<<"The solution doesn't exist";
        return false;
    }
    else {
        printboard(board,n);
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