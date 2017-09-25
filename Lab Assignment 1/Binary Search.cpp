#include<bits/stdc++.h>
using namespace std;
int main()
{
    int data[100], n;
    cin>>n;

    for(int loc=1;loc<=n;loc++)
        cin>>data[loc];

    int item;
    cin>>item;                   ///Getting input for Item

    int beg=1, end=n, mid=(beg+end)/2;   ///Setting up values

    while(beg<=end&&data[mid]!=item) ///Loop Condition
    {
        if(item<data[mid])         ///Updating upper bound
            end=mid-1;
        else
            beg=mid+1;            ///Updating lower Bound

        mid=(beg+end)/2;          ///Updating MID value
    }

    if(data[mid]==item)           ///Printing for found data

        cout<<"Found in Location: "<<mid<<endl;

    else                        ///Alternate Message

        cout<<"Not Found.\n";

    return 0;
}
