// Consider a situation where we have given few strings on a piece of 
// paper; say string str1. Alongside of every string str1 another string is 
// given as str2. You need to write a program to find that the string str1 
// can be converted to string str2 after 0 or more deletion. The 
// constraint attached with the deletion is that the deletion can only 
// occur at the beginning of the characters. (KMP)

// Input format:
// Enter number of strings cases
// Enter str1
// Enter str2
// Enter str1
// Enter str2

// Output format:
// Print Y if conversion is possible else print N


#include<iostream>
#include<cstring>
using namespace std;

void computeLPS(char *pat, int m, int* lps)
{
    int length=0;
    lps[0] = 0;

    int i=1; 
    while(i<m){
        if(pat[i]==pat[length])
        { length++; lps[i]=length; i++ ;}

        else {
            if (length!=0)
                length = lps[length-1];
            
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void kmpSearch(char* pat, char*txt)
{
    int m = strlen(pat); int lps[m];
    int n = strlen(txt);

    computeLPS(pat,m,lps);

    int i=0 , j=0 ;

    while(i<n){
        if (pat[j]==txt[i])
        {j++;i++;}

        if (j==m){
            cout<<"Pattern found at index : "<< i-m;
            j = lps[j-1];
        }

        else if (i<n && pat[j]!=txt[i]){
                if(j!=0)
                    j = lps[j-1];
                else
                    i=i+1;
        }
    }
}

int main()
{
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    kmpSearch(pat,txt);

    return 0;
}