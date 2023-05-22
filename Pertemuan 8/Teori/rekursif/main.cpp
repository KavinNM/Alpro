#include <iostream>

using namespace std;
int tambah(int a,int b){
    if(b==0){
        return a;
    }else{
    return tambah(a+1,b-1);
    }
}

int kurang(int a,int b){
    if(b==0){
        return a;
    }else{
    return kurang(a-1,b-1);
    }
}

int kali(int a,int b){
    if(b==0){
        return 0;
    }else{
    return a+kali(a,b-1);
    }
}

float bagi(float a,float b){
    if(a<b){
        return 1;
    }else{
    return 1+bagi(a-b,b);
    }
}

int pangkat(int a,int b){
    if(b==0){
        return 1;
    }else{
    return a*pangkat(a,b-1);
    }
}

int fib(int a) {
  if (a == 0 || a==1){
    return a;
  } else {
    return (fib(a-1) + fib(a-2));
  }
}
int fak(int a){
    if(a==0){
        return 1;
    }else{
    return a*fak(a-1);
    }
}
float a,fibo,b;
int main()
{
    cout<<"Angka pertama : ";
    cin>>a;
    cout<<"Angka Kedua   : ";
    cin>>b;
    cout<<"[Pertambahan] "<<endl;
    cout<<a<<" + "<<b<<" = "<<tambah(a,b)<< endl;
    cout<<"[Pengurangan]"<<endl;
    cout<<a<<" - "<<b<<" = "<<kurang(a,b)<< endl;
    cout<<"[Perkalian]"<<endl;
    cout<<a<<" x "<<b<<" = "<<kali(a,b)<< endl;
    cout<<"[Pembagian]"<<endl;
    cout<<a<<" / "<<b<<" = "<<bagi(a,b)<< endl;
    cout<<"[Pangkat]"<<endl;
    cout<<a<<" ^ "<<b<<" = "<<pangkat(a,b)<< endl;
    cout<<"[Faktorial]"<<endl;
    cout<<"Faktorial dari "<<a<<" = "<<fak(a)<<endl;
    cout<<"[Fibonacci]"<<endl;
    cout<<"Banyak Fibonacci = ";
    cin>>fibo;
    for(int i=0;i<fibo;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}
