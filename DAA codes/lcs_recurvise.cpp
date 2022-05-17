#include<bits/stdc++.h>
using namespace std;

int lcs (string str1, string str2, int i, int j)
{
    if (i == 0 || j == 0)
        return 0;
    
    else if (str1[i-1] == str2[j-1]){

        return 1 + lcs(str1, str2, i-1, j-1);
    }

    else 
        return max(lcs(str1, str2, i, j-1), lcs(str1, str2, i-1, j));
}


void get_lcs (char *str1, char *str2, int row, int column )
{
    int table[row+1][column+1];  

    //making the entire table just to print the lcs
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

    int i=row, j=column;
    char subsequence[k + 1];     //making the char array for the subsequence 
    subsequence[k] = '\0' ;     //plus one is for the end_of_line character

    //back tracking the diagonal arrows on the table
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
    string str1 = "ABCBDAB";
    string str2 = "BDCABA";

    cout<<"Sequence 1 : " << str1 <<"\n" << "Sequence 2 : " << str2 << "\n" ;

    int lcs_length = lcs(str1,str2,str1.size(),str2.size());

    cout<<"The LCS length = "<<lcs_length;

    char str1_char_array[str1.size()+1];
    char str2_char_array[str2.size()+1];

    strcpy(str1_char_array , str1.c_str());
    strcpy(str2_char_array , str2.c_str());
    //string.c_str returns pointer to array that ends with null terminated 
    get_lcs(str1_char_array,str2_char_array,str1.size(),str2.size());

    return 0;
}