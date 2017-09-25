#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cout<<"Rows and Column: ";
    cin>>r>>c;
    int matrix[r][c];
    int rs[r]={0},cs[c]={0};

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            {
                cin>>matrix[i][j];
                rs[i]+=matrix[i][j];
            }

    for(int j=0;j<c;j++)
        for(int i=0;i<r;i++)
            cs[j]+=matrix[i][j];

    for(int i=0;i<r;i++)
        cout<<"Row "<<i+1<<" sum: "<<rs[i]<<endl;
    for(int j=0;j<c;j++)
        cout<<"Column "<<j+1<<" sum: "<<cs[j]<<endl;

    return 0;
}
