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

ull fact(ull n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n;
    pf("Input a Number: ");
    sf("%llu",&n);

    pf("\nFactorial of %llu is : %llu\n",n,fact(n));

    return 0;
}
