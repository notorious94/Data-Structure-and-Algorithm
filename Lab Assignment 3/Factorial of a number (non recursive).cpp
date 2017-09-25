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

    ull n,fact=1;
    pf("Insert a Number: ");
    sf("%llu",&n);

    for(ull i=1;i<=n;i++)
        fact*=i;

    pf("\nFactorial of %llu is : %llu\n",n,fact);

    return 0;
}
