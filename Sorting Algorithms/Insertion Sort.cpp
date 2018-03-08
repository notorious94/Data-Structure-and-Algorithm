#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void insertion_sort(int array[], int size)
{
    for(int i = 1; i < size ; i++)
    {
        int value = array[i];
        int hole = i;

        while( hole > 0 && array[hole-1] > value )
        {

            array[hole] = array[hole-1];
            hole--;

        }

        array[hole] = value;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int array[5];

    printf("Input FIVE Values: ");

    for(int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }

    insertion_sort(array,5);

    printf("\nAfter Sorting : ");

    for(int i = 0;i < 5; i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n");

    return 0;
}
