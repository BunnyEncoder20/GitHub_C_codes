#include <bits/stdc++.h>
using namespace std;

//  ABCDEFG
//  0123456
int graph[7][7] = { //adjacency matrix
   //A, B, C, D, E, F, G
    {0, 8, 0, 6, 5, 0, 0},  // A
    {8, 0, 2, 0, 12, 7, 0}, // B
    {0, 2, 0, 4, 0, 3, 0},  // C
    {6, 0, 4, 0, 3, 9, 11}, // D
    {5, 12, 0, 3, 0, 0, 4}, // E
    {0, 7, 3, 9, 0, 0, 0},  // F
    {0, 0, 0, 11, 4, 0, 0}, // G
};
int visited[7] = {};//visited
char vertics[] = {'A','B','C','D','E','F','G'};
int main()
{
    for (int i = 0; i < 7; i++)
        visited[i] = false;

    visited[0] = true;

    cout << "Edges   | Weights" << endl;
    int e = 0; // edges

    while (e < 6)
    {
        int r = 0, c = 0, mini = INT_MAX;

        for (int i = 0; i < 7; i++)
        {
            if (visited[i])
            {
                for (int j = 0; j < 7; j++)
                {
                    if (!visited[j] && graph[i][j]>0)
                    {
                        if (mini > graph[i][j])
                        {
                            mini = graph[i][j];
                            r = i;
                            c = j;
                        }
                    }
                }
            }
        }
        visited[c] = true;
        cout <<vertics[r] << " --- " << vertics[c] << " : " << graph[r][c] << endl;
        e++;
    }
    return 0;
}