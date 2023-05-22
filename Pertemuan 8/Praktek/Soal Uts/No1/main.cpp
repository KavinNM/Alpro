/*
Nama    : Kavin Nafis Maulana
Nim     :A11.2022.14253
Kelompok:4207
*/

#include <iostream>

using namespace std;
bool ganjil(int a){
    return a%2==1? 1:0;
}
void mingenap(int ar[],int n){
    int temp=ar[0];
    int index;
    for(int i=0;i<n;i++){
        if(!ganjil(ar[i])){
            if(ar[i]<temp){
                temp=ar[i];
                index=i;
            }
        }
    }
    cout<<"Nilai genap terkecil = "<<temp<<" pada index ke-"<<index;
}
int main()
{
    int ar[5]={99,4,6,2,97};
    int n=5;
    mingenap(ar,n);
    return 0;
}
