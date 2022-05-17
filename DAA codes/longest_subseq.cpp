// Develop a bottom-up dynamic programming algorithm for Longest Common 
// Subsequence (LCS) problem and implement using C++. Print the length of the 
// LCS and the LCS as well.

// #include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

void lcs(char *str1, char *str2, int row, int column)
{
    int table[row+1][column+1];  //+1 cause we have to add the zero row and column also

    //making the table :-
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            if (i==0 || j==0)
                table[i][j]=0;
            
            else if ( str1[i-1] == str2[j-1])
                table[i][j] = table[i-1][j-1] + 1;

            else
                table [i][j] = max( table[i-1][j] , table[i][j-1] );
        }
    }
    
    int k = table[row][column];     //final box value of the table = length of subsequence 
    cout<<"\nThe length of longest sub sequence  = " << k <<"\n" ;

    int i=row, j=column;
    char subsequence[k + 1];     //making the char array for the subsequence 
    subsequence[k] = '\0' ;     //plus one is for the end of line character

    //back tracking the arrows on the table
    while (i > 0 && j >0)
    {
        if (str1[i-1] == str2[j-1])
        {
            subsequence[k-1] = str1[i-1];
            i--; j--; k--;      
        }
        
        else if (table[i-1][j] > table[i][j-1])
            i--;
        else 
            j--;
    }

    //print the subsequence 
    cout<<"\nLCS : " << subsequence << "\n" ;
}

int main()
{
    char string1[] = "ABCBDAB" ;
    char string2[] = "BDCABA" ;
    // cin>>string1;
    // cin>>string2;

    cout<<"Sequence 1 : " << string1 <<"\n" << "Sequence 2 : " << string2 << "\n" ;

    // int r = ;
    // int c = ;

    lcs(string1,string2,strlen(string1),strlen(string2));
    return 0;
}