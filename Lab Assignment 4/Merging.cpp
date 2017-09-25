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
    vector<int>left;
    vector<int>right;
    vector<int>main;

    int n,i=0,j=0;

    pf("Input Element of Left Sub Array:\n");
    for(int i=0;i<10;i++){
        cin>>n;
        left.push_back(n);
    }

    pf("\nInput Element of Right Sub Array:\n");
    for(int i=0;i<10;i++){
        cin>>n;
        right.push_back(n);
    }

    while(i<left.size()&&j<right.size()){
        if(left[i]<right[j]){
            main.push_back(left[i]);
            i++;
        }
        else{
            main.push_back(right[j]);
            j++;
        }
    }
    while(i<left.size()){
        main.push_back(left[i]);
        i++;
    }

    while(j<right.size()){
        main.push_back(right[j]);
        j++;
    }

    pf("\nMAIN Sub array:\n\n");

    for(int i=0;i<main.size();i++)
        cout<<main[i]<<" ";
    cout<<endl<<endl;

    return 0;
}
