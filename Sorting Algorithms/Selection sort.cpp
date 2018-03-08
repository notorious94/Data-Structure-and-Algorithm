#include<bits/stdc++.h>
using namespace std;

void selection_sort(int A[], int N)
{
    for(int i = 0 ; i < N-1 ; i++)
    {
        int min = i;

        for(int j = i + 1;j < N; j++)
        {
            if(A[j] < A[min])
                min = j;
        }

        swap(A[min], A[i]);
    }
}

int main()
{
    int N;
    int *A;
    cin>>N;

    A = new int [N];

    for(int i=0;i<N;i++)
        cin>>A[i];

    selection_sort(A,N);

    for(int i = 0; i < N ; i++)
        cout<<A[i]<<" ";

    cout<<endl;

    return 0;
}
