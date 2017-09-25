#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define pi acos(-1.0)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

void TOH (int n, string from ,string to ,string auxiliary)
{
    if(n==1)
    {
        pf("\nMove Disk 1 from Rod %s to Rod %s\n",from.c_str(),to.c_str());
        return;
    }

    TOH(n-1,from,auxiliary,to);

    pf("\nMove Disk %d from Rod %s to Rod %s\n",n, from.c_str(), to.c_str());

    TOH(n-1,auxiliary,to,from);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string from, to, auxiliary;
    int n;

    pf("!!! Welcome to Tower of Hanoi !!!\n\n");

    while(1)
    {
        pf("How many Disk (0 to Exit): ");
        sf("%d",&n);

        if(n==0)
        {
            pf("\nGAME OVER\n");
            break;
        }

        pf("\nFrom Disk : ");
        getline(cin,from);

        pf("\nTo Disk : ");
        getline(cin,to);

        pf("\nAuxiliary Disk : ");
        getline(cin,auxiliary);

        TOH(n,from,to,auxiliary);

        pf("\n");
    }

    return 0;
}
