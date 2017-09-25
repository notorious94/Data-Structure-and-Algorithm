#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define pi acos(-1.0)
#define get_stl(s) getline(cin,s)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

void BFS(vector<int>graph[], int nodes, int source)
{
    vector<int>level(nodes,-1);/// For Distance

    vector<int>parent(nodes,0);/// For Parent

    vector<bool>visited(nodes,false); /// for Flagging Nodes

    visited[source]=true;
    level[source]=0;
    parent[source]=0;

    queue<int>Q;
    Q.push(source);

    while(!Q.empty())
    {
        int u=Q.front(); /// Top Element

        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];

            if(visited[v]==false) /// Unvisited Node Found
            {
                visited[v]=true; /// Node Got Visited
                level[v]=level[u]+1;/// Counting Distance
                parent[v]=u;/// Parent
                Q.push(v);
            }
        }
        Q.pop(); /// Poping Element
    }

    for(int i=0;i<nodes;i++) /// Printing Shortest Distance
    {
        printf("%d to %d = %d\n", source,i,level[i]);
    }
    cout<<endl;
    return;
}

int main()
{
    int nodes, edges;
    printf("How Many nodes & edges ?: ");
    cin>>nodes>>edges;

    vector<int>graph[nodes]; /// Graph Declared

    printf("Input Connected Edge Relation between Vertex\n\n");

    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;

        graph[x].push_back(y); /// Relation Binding
        graph[y].push_back(x);

    }

    int source;
    printf("\nEnter Source : ");
    cin>>source;

    BFS(graph, nodes, source); /// BFS called

    return 0;
}
