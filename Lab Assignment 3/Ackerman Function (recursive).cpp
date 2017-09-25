#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

int DP_ackerman[10000][10000]; /// Memoization

int ackerman(int m, int n)
{
    if(m==0)
        return ++n;

    else if(DP_ackerman[m][n]!=-1)
        return DP_ackerman[m][n];

    else if(m>0&&n==0)
        return DP_ackerman[m][n] = ackerman(m-1,1);

    else
        return DP_ackerman[m][n] = ackerman(m-1,ackerman(m,n-1));
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;

    memset(DP_ackerman,-1,sizeof(DP_ackerman));

    pf("Input Two Value: ");

    sf("%d%d",&m,&n);

    pf("\nAckerman Value is : %d\n", ackerman(m,n));

    return 0;

}
