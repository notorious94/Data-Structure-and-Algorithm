#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *data, n;
    cout<<"How many elements ?: ";
    cin>>n;
    data=new int [n+1];
    for(int loc=1;loc<=n;loc++)
        cin>>data[loc];

    int item,loc=1;                  ///Getting Item and  setting location to 1
    cin>>item;

    data[n+1]=item;                  ///Putting item value into N+1 index

    while(data[loc]!=item)           ///Condition Checking
        loc++;                       ///Increasing location value

    if(loc==n+1)                     ///Decision 1

        cout<<"Not Found\n";

    else                             ///Alternate Decision

        cout<<"Found in Location: "<<loc<<endl;
    delete(data);

    return 0;
}

