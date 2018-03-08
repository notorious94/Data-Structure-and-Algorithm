#include<bits/stdc++.h>

using namespace std;

void merge ( int L[], int ls, int R[], int rs, int A[] ) /// Merging Function

/// L [] = LEFT sub_array

/// ls = size of LEFT sub_array

/// R [] = RIGHT sub_array

/// rs = size of RIGHT sub_array

/// A [] = MAIN Array

{
    int i, j, k;

    for( i = 0, j = 0, k = 0; i < ls && j < rs; k++ )
    {

        if( L[i] < R[j] )  // Comparing elements of two sub_arrays
        {
            A[k] = L[i]; /// Filling up **MAIN ARRAY** with **LEFT sorted sub_array** elements

            i++;        // Incrementing index of **LEFT Sub_array**

        }

        else              // False Condition
        {
            A[k] = R[j]; /// Filling up **MAIN ARRAY** with **RIGHT sorted sub_array** elements

            j++;        // Incrementing index of **RIGHT Sub_array**

        }

    }

    while(i < ls)
    {
        A[k] = L[i];  /// Filling up **MAIN ARRAY** with rest of **LEFT sorted sub_array** elements

        // if there is any

        i++;   // Incrementing index of **LEFT sub_array**

        k++;   // Incrementing index of **MAIN_array**
    }

    while(j < rs)
    {
        A[k] = R[j];  /// Filling up **MAIN ARRAY** with rest of **RIGHT sorted sub_array** elements

        // if there is any

        j++;  // Incrementing index of **RIGHT sub_array**

        k++; // Incrementing index of **MAIN_array**
    }
}

void mergesort( int A[], int size )  /// Merge_sort Function

            /// ARRAY and it's SIZE
{
    if( size < 2 )
    {
        return; /// **Base_Condition** of Recursion
    }

    int ls = size / 2; /// ls = size of LEFT sub_array  **( 6 / 2 = 3)**

    int rs = size - ls; /// rs = size of  RIGHT sub_array **( 6 - 3 = 3 )**

    int L [ls];  /// L[] = LEFT sub_array

    int R [rs]; /// R[] = RIGHT sub_array



    for( int i = 0 ; i < ls ; i++ )

        L[i] = A[i];   /// Copying elements of the **LEFT** part of the **MAIN ARRAY**

        /// { 10, 8, 15 }

    for( int i = ls ; i < size ; i++)

        R[i-ls] = A[i];  /// Copying elements of the **RIGHT** part of the **MAIN ARRAY**

        /// { 13, 9, 7 }

    mergesort( L , ls ); /// Recursive call for LEFT sub_array

    mergesort( R , rs ); /// Recursive call for RIGHT sub_array

    merge( L, ls, R, rs, A ); /// Merging two Sub_arrays
}

int main()
{
    int A[] = { 10, 8, 15, 13, 9, 7 };  // Unsorted Array

    int size = 6;                       // SIX elements

    cout << "Unsorted Array:\n\n";

    for( int i = 0; i < size; i++ )

        cout << A[i] << " ";      // Printing Unsorted Data

    cout<<endl<<endl;

    mergesort( A, size );         /// Merge_sort Function Called

    cout << "Sorted Array:\n\n";

    for( int i = 0; i < size; i++ )

        cout << A[i] << " ";      // Printing Sorted Data

    cout << endl;

    return 0;
}
