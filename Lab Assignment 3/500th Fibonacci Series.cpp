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

string sum(string a, string b)
{
    int x,y;
    string result;

    for(int i=a.size()-1,j=b.size()-1,carry=0;i>=0||carry||j>=0;j--,i--)
    {
        (i<0) ? x = 48 : x = a[i];
        (j<0) ? y = 48 : y = b[j];

        carry = x + y + carry - 96;

        result.push_back(carry%10+48);

        carry /= 10;
    }

    reverse(result.begin(), result.end());

    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string  fibo[501];

    fibo[0] = "1";
    fibo[1] = "1";

    for(int i=2;i<501;i++)
        fibo[i] = sum(fibo[i-1],fibo[i-2]);

    int n;

    while(1)
    {
        pf("Enter the Sequence No: ");
        sif(n);
        if(n==0)
        {
            pf("Exiting Program...\n");
            break;
        }
        pf("\n%dth Fibonacci Number is\n\n%s\n",n,fibo[n-1].c_str());
    }

    return 0;
}
