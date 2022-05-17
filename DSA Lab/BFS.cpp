#include<bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> g[N];
int visited[N];
int level[N];
//trying to implement BFS

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start]=1; 

    while (!q.empty())
    {
        int current_node = q.front();
        cout<<"Current node : "<<current_node<<"\n";
        for (int child : g[current_node])
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
}

int main()
{
    int n;
    cout<<"Enter the number of nodes : ";
    cin>>n;

    for (int i = 0; i < n; i++) //there is no 0 vertix
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bfs(1);
    for (int i = 1; i <=n; i++)
    {
        cout<<"Level of node "<<i<<" : "<<level[i]<<endl;
    }
    
    return 0;
}