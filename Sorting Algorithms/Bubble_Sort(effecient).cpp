#include<bits/stdc++.h>
using namespace std;

vector<int>array;

void bubble_sort()
{
    int k,i,flag,n=array.size();
    for(k=1;k<n;k++)
    {
        flag=0;
        for(i=0;i<n-k;i++)
        {
            if(array[i]>array[i+1])
            {
                swap(array[i], array[i+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int n,value;
    printf("How many elements ?: ");
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>value;
        array.push_back(value);
    }

    bubble_sort();

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
