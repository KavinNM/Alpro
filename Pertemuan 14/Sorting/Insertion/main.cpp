#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void print(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void insertionSort (int arr[], int size, int i = 1)
{
    if (i <= size)
    {
        int j = i;
        while (arr[j - 1] > arr[j] && j > 0)
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        insertionSort (arr, size, i += 1);
    }
}

int main()
{
    auto start = high_resolution_clock::now();

    int ar[] = {5, 6, 2, 7, 3, 9, 2, 4};
    int n = sizeof (ar) / sizeof (int);
    print(ar,n);
    insertionSort(ar,n);
    print(ar,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(ar)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(insertionSort(ar,n))<<" Bytes";
    return 0;
}
