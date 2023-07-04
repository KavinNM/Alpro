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
void selectionSort (int arr[], int size, int i = 0)
{
    if (i < size)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        selectionSort (arr, size, i += 1);
    }
}
int main()
{
    auto start = high_resolution_clock::now();

    int ar[] = {7, 3, 4, 8, 5, 7};
    int n = sizeof(ar)/sizeof(int);
    print(ar,n);
    selectionSort(ar,n);
    print(ar,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(ar)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(selectionSort(ar,n))<<" Bytes";
    return 0;
}
