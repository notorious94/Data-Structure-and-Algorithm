#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, * swap;
    int row1, row2;

    cout<<"Enter the size of matrix : ";
    cin>>y>>x;
    int ** matrix = new int*[y];

    for(int i=0;i<y;i++)
        matrix[i] = new int[x];

    cout<<"Enter the matrix\n";

    for(int i=0;i<y;i++)
        for(int j=0;j<x;j++)
            cin>>matrix[i][j];

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            cout << matrix[i][j] << " ";
        cout<<endl;
    }

    cout<<"Enter the rows to be interchanged : ";

    cin>>row1>>row2;

    swap=matrix[row1-1];

    matrix[row1-1]= matrix[row2-1];

    matrix[row2-1]=swap;

    cout<<"New Matrix"<<endl;

    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
            cout << matrix[i][j] << " ";
        cout<<endl;
    }

    return 0;
}
