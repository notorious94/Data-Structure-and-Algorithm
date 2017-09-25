#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *data, n;
    cout<<"How many elements ?: ";
    cin>>n;

    data= new int [n+1];                   ///Size of array

    cout<<"Input elements.\n";
    for(int i=1;i<=n;i++)
        cin>>data[i];          ///Getting Input

    int k, loc=1, max=data[1]; ///Step 1

    while(k<=n)                ///Condition Checking
    {
        k++;                   ///Increasing value of K
        if(max<data[k])
        {
            max=data[k];       ///Updating MAX and LOC
            loc=k;
        }
    }

    cout<<"Location: "<<loc<<" Max Value: "<<max<<endl;  ///Printing

    delete(data);

    return 0;

}

