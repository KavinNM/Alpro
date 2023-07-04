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
int linear(int ar[],int n,int key){
    if(n==0){
        return -1;
    }
    if(ar[n-1]==key){
        return n-1;
    }
    return linear(ar,n-1,key);
}
int main()
{
    auto start = high_resolution_clock::now();

    int ar[] = {5, 6, 2, 7, 3, 9, 2, 4};
    int n = sizeof (ar) / sizeof (int);
    print(ar,n);
    int key = linear(ar,n,2);
    if(key <0){
        cout<<"Tidak ada didalam Array"<<endl;
    }else if(key >= 0){
        cout<<"Ada didalam Array"<<endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(ar)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(linear(ar,n,key))+sizeof(key)<<" Bytes";
    return 0;
}
