#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define INF 0x7FFFFFFF
#define pi acos(-1.0)
#define get_stl(s) getline(cin,s)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)
#define puf(a) printf("%llu\n",a)
#define pii pair<int, int>

typedef long long ll;
typedef unsigned long long ull;

int partition(int *A, int s, int e)
{
    int pivot = A[e];
    int pindex = s;
    for(int i=s;i<e;i++)
        if(A[i]<=pivot)
        {
            swap(A[i], A[pindex]);
            pindex++;
        }

    swap(A[pindex], A[e]);
    return pindex;
}

void quick_sort(int *A, int p, int q)
{
    if(p<q)
    {
        int pindex = partition(A,p,q);
        quick_sort(A,p,pindex-1);
        quick_sort(A,pindex+1,q);
    }
}

int main()
{
    //freopen("in.txt","r", stdin);
    //freopen("out.txt","w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[]= {7,2,1,6,8,5,3,4};

    quick_sort(A, 0, 7);

    for(int i=0;i<8;i++)
        cout<<A[i]<<" ";

    return 0;
}
