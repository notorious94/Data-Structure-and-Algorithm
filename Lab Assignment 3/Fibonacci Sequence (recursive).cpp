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

ull DP_fibo[500];

ull fibo(ull n)
{
    if(n<=1)
        return 1;
    else if(DP_fibo[n]!=0)
        return DP_fibo[n];
    else
        return DP_fibo[n]=fibo(n-1)+fibo(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n;
    pf("Enter Sequence No: ");
    sf("%llu",&n);

    pf("\n%lluth Fibonacci Number is : %llu\n",n,fibo(n-1));

    return 0;
}


