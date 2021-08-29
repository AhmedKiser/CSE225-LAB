#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

void sortedMerge(int arr1[], int arr2[], int arr[],
                                int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n) {
        arr[k] = arr1[i];
        i += 1;
        k += 1;
    }
    while (j < m) {
        arr[k] = arr1[j];
        j += 1;
        k += 1;
    }
    sort(res, res + n + m);
}

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> arr2[i];
    }
    int i=0, j=0, k=0;
    int arr[m+n];
    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }

        else
        {
            arr[k++] = arr2[j++];
        }
    }

   while (i < n && j < m)
    {
        arr[k++] = arr1[i++];
         arr[k++] = arr2[j++];
    }

    for (int i = 0; i < m+n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}

