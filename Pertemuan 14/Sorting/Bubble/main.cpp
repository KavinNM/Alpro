#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void bubble(int ar[],int n){
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(ar[i]>ar[i-1]){
                swap(ar[i],ar[i+1]);
            }
        }
        bubble(ar,n-1);
    }
}
void print(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}

int main()
{
    auto start = high_resolution_clock::now();
    int ar[]={1,4,0,42,1};
    int n=sizeof(ar)/sizeof(int);
    print(ar,n);
    cout<<endl;
    bubble(ar,n);
    print(ar,n);
    cout<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(ar)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(bubble(ar,n))<<" Bytes";
    return 0;
}
