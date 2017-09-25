#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 600
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull fibo[100],n;
    fibo[0]=1;
    fibo[1]=1;

    pf("Insert Sequence No: ");
    sf("%llu",&n);

    for(ull i=2;i<100;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];

    pf("\n%lluth Fibonacci Sequence is %llu\n",n,fibo[n-1]);

    return 0;
}
