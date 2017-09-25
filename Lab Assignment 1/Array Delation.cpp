#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *data, n;
    cout<<"How many elements ?: ";
    cin>>n;

    data= new int [n+1];

    for(int i=1;i<=n;i++)
        cin>>data[i];

    int loc;
    cout<<"Position of the item: ";
    cin>>loc;      ///Getting Input of location

    while(loc<n)   ///Condition Checking
    {
        data[loc]=data[loc+1];   ///Pulling up data by one index at a time
        loc++;                   ///Updating index
    }

    n--;                        ///Decreasing Size

    for(int i=1;i<=n;i++)
        cout<<data[i]<<" ";

    cout<<endl;

    delete (data);

    return 0;
}
