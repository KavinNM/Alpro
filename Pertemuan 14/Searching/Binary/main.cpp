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
int binarySearch (int arr[], int num, int left, int right)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == num)
        {
            return mid;
        }

        else if (arr[mid] < num)
        {
            return binarySearch (arr, num, mid + 1, right);
        }

        else if (arr[mid] > num)
        {
            return binarySearch (arr, num, left, mid - 1);
        }
    }

    return -1;
}
int main()
{
    auto start = high_resolution_clock::now();

    int ar[] = {5, 6, 2, 7, 3, 9, 2, 4};
    int n = sizeof (ar) / sizeof (int);
    print(ar,n);
    int key = binarySearch(ar,7,0,n-1);
    if(key <0){
        cout<<"Tidak ada didalam Array"<<endl;
    }else if(key >= 0){
        cout<<"Ada didalam Array"<<endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
   cout<< "Space Complexity = "<<sizeof(ar)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(key)<<" Bytes";
    return 0;
}
