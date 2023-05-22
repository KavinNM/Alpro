/*
Nama    : Kavin Nafis Maulana
Nim     :A11.2022.14253
Kelompok:4207
*/

#include <iostream>

using namespace std;
void cetakar(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
void bubel(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;

            }
        }
    }
}
void select(int a[],int n){
    int temp,pos;
    for(int i=0;i<n;i++){
        pos=i;
        for(int j=i;j<n;j++){
            if(a[j]>a[pos]){
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}
int main()
{
    cout<<"Masukkan jumlah array : ";
    int n;
    cin>>n;
    int ar[n];
    int ar2[n];
    for(int i=0;i<n;i++){
        cout<<"Index ke-"<<i<<" : ";
        cin>>ar[i];
        ar2[i]=ar[i];
    }

    cout<<"Array sebelum dishort :"<<endl;
    cetakar(ar2,n);
    cout<<endl;
    cout<<"Sort dengan buble : "<<endl;
    bubel(ar,n);
    cetakar(ar,n);
    cout<<endl;
    cout<<"Array sebelum dishort :"<<endl;
    cetakar(ar2,n);
    cout<<endl;
    cout<<"Sort dengan selection : "<<endl;
    select(ar2,n);
    cetakar(ar2,n);
    return 0;
}
