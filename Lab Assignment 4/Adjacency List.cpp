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
    printf("\nInput Connected Nodes and Their Cost:\n\n");

    vector<int>adjacency_list[node];
    vector<int>adjacency_cost[node];


    for(int i=0;i<edge;i++)
    {
        int x,y,cost;

        scanf("%d%d%d",&x,&y,&cost);

        adjacency_list[x].push_back(y);
        adjacency_list[y].push_back(x);

        adjacency_cost[x].push_back(cost);
        adjacency_cost[y].push_back(cost);

    }

    /// Print Function

    for(int i=0;i<node;i++)
    {
        printf("Node %d is Connected with: ",i);

        for(int j=0;j<adjacency_list[i].size();j++)
            printf("%d ",adjacency_list[i][j]);

        printf("\nWith Cost: ");

        for(int j=0;j<adjacency_cost[i].size();j++)
            printf("%d ",adjacency_cost[i][j]);

        printf("\n\n");
    }

    return 0;
}
