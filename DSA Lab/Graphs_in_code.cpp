#include<bits/stdc++.h>
using namespace std;
//how to take in grid/graph in coding


int graph1[10][10]; //adjacency matrix . The (v1,v2) with an edge in between are marked by either 1 or the weight of the edge
vector<int> graph2[10]; //adjacent linked list which is implemented in the form of a vector
//eg : v1->v2,v3,v4 implies v1 is a linked list with connections to v2,v3,v4 (the vertices it is connected to in the graph)

int main()
{
    int n,m; //no. of vertices, no. of edges 
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        graph1[v1][v2] = 1; //filling adjacency matrix
        graph1[v2][v1] = 1;

        graph2[v1].push_back(v2);   //filling adjacency
        graph2[v2].push_back(v1);   //linked list 
    }

    //checking if connected or not (for a vertix (i,j)):
    int v1=2,v2=3;  
    if(graph1[v1][v2]==1)       //adjacency matrix
    {
        cout<<"The edges are connected";
    }
    
    for(int child:graph2[v1])    //adjacency linked list 
    {
        if (child==v2)
        {
            cout<<"The edges are connected";
        }
    }
    return 0;
}