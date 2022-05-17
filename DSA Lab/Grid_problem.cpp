// A person tries to escape from the prison, He will be able to escape this grid if he can reach to any building that is on the boundary of grid. He can jump from one building to the other if and only if :
// The buildings shares the edges with each other, i.e are adjacent
// Top left corner building is represented as (1,1)
// Bottom Right corner of the building can be represented as (NXM)
// Find what are the edges that he has to surpass to read any of the boundary edge of the building.
#include<bits/stdc++.h>
using namespace std;
vector<int> grid[100];
vector<int> edges[100];
int visited[4][4];
int level[4][4];


int bfs(int startx,int starty)
{
    queue<pair<int,int>> q;
    q.push({startx,starty})
    visited[startx][starty]=1; 
    while (!q.empty())
    {
        pair<int,int> current_vertix = q.front();
        cout<<"Current node : ("<<current_vertix.first<<","<<current_vertix.second<<")\n";
        for (int child : g[current_vertix])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child]=1;
                level[child]=level[current_node]+1;
            }
        }
        q.pop();
    
}

int main()
{
    int n,m,x,y;
    cout<<"Enter the Number of Vertixs and Edges";
    cin>>n>>m;
    cout<<"Enter the coordinates of prison:\n";
    cin>>x>>y;

    //creating the grid
    for (int i = 0; i < n; i++) //there is no 0 vertix
    {
        int v1,v2;
        cin>>v1>>v2;
        grid[v1].push_back(v2);
        grid[v2].push_back(v1);
    }
    //creating edges vector
    for (int i = 0; i < n; i++)
    {
        int e1,e2;
        cin>>e1>>e2;
    }
    
    return 0;
}