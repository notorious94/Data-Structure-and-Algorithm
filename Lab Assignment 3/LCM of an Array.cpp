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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,v,gcd,multi=1;

    vector<int>data;

    pf("How many elements ? : ");
    sif(n);

    pf("\nInput %d Values\n\n",n);

    for(int i=0;i<n;i++)
    {
        sif(v);
        multi*=v;
        data.push_back(v);
        if(i==0)
            gcd=data[0];
        else
            gcd =__gcd(data[i],gcd);
    }

    int lcm=multi/gcd;

    pf("\nLCM of the array is: %d\n", lcm);

    return 0;
}
