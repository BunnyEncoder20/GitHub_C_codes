#include <iostream>
#include <cstring>
#define d 256
using namespace std;

void robin_karp(char *txt, char *pat, int q)
{
    int n = strlen(txt);
    int m = strlen(pat);
    int i, j;
    int p = 0, t = 0;
    int h = 1;

    for (int i = 0; i < m - 1; i++)
    {
        h = (h * d) % q;
    }

    for (int i = 0; i < m; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            bool flag = true;
            for (j = 0; j < m; j++)
            {
                if (txt[i + j] != pat[j])
                {
                    flag = false;
                    break;
                }
                if (flag)
                    cout << " ";
            }
            if (j == m)
            {
                cout << "Found pattern at index : " << i << endl;
            }
        }

        else if(i<n-m){
            t = (d*(t-txt[i]*h) + txt[i+m])%q ;
            if(t<0)
                t+=q;
        }
    }
}

int main()
{
    char txt[] = "Geeks for Geeks";
    char pat[] = "Geeks";
    int q = 101;
    robin_karp(txt, pat, q);

    return 0;
}