/*
Nama    : Kavin Nafis Maulana
Nim     : A11.2022.14253
*/
#include <iostream>

using namespace std;

int pertambahan(int x,int y){
    return x+y;
}
int pengurangan(int x,int y){
    return x-y;
}
int perkalian(int x,int y){
    return x*y;
}
int total(int n,int aray[]){
    int to;
    for(int a=0;a<n;a++){
        to=to+aray[a];
    }
    return to;
}
float rata(int r,int aray[]){
    float t=0;
    float rt=0;
    for(int a=0;a<r;a++){
        t=t+aray[a];
    }
    rt= t/r;
    return rt;
}
int a1,a2;
int main()
{
    cout<<"========Operasi Matematika========"<<endl;
    cout<<"Masukkan Angka Pertama = ";
    cin>>a1;
    cout<<"Masukkan Angka Kedua   = ";
    cin>>a2;
    cout <<"Hasil Pertambahan      = "<<pertambahan(a1,a2)<< endl;
    cout <<"Hasil Pengurangan      = "<<pengurangan(a1,a2)<< endl;
    cout <<"Hasil Perkalian        = "<<perkalian(a1,a2)<< endl;
    cout<<"==============Array==============="<<endl;
    cout<<"Masukkan Jumlah Array   = ";
    int n;
    cin>>n;
    int aray[n];
    cout<<"Masukkan Nilai Array   = ";
    for(int a=0;a<n;a++){
        cin>>aray[a];
    }
    cout<<"Total dari Array        = "<<total(n,aray)<<endl;
    cout<<"Rata - Rata dari Array  = "<<rata(n,aray)<<endl;

    return 0;
}
