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


int main()
{
    int node, edge;

    printf("How many Nodes and Edges ?: ");
    scanf("%d%d", &node, &edge);

    int graph[node][node];
    memset(graph, 0, sizeof(graph)); /// Setting all values to Zero

    printf("\nInput Connected Nodes and Their Cost:\n\n");
    for(int i=0;i<edge;i++)
    {
        int x,y,cost;
        scanf("%d%d%d",&x,&y,&cost);

        graph[x][y]=cost; /// As Because this is an Undirected Graph
        graph[y][x]=cost;

    }

    printf("\n");

    /// Print Function

    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            printf("%d  ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
