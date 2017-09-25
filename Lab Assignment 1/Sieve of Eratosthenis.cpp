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
    int max_range=1000001;
    int root=sqrt(max_range);

    vector<bool>prime(max_range, true);

    prime[0]=prime[1]=false; /// 0 and 1 are not Prime

    for(int i=4;i<max_range;i+=2)
        prime[i]=false; /// Eliminating Even Number

    for(int i=3;i<=root;i+=2)
        if(prime[i]) /// If The number is Prime
            for(int j=i*i;j<max_range;j+=2*i)
                prime[j]=false; /// Eliminating Factors of that Number

    int range;

    cout<<"Range of Prime : ";
    cin>>range;
    cout<<endl;

    for(int i=2;i<=range;i++)
        if(prime[i])
            cout<<i<<" is a Prime Number"<<endl;

    return 0;
}
