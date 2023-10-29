#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Masukkan Nilai A: ";
    cin>> a;
    cout<<"Masukkan Nilai B: ";
    cin>> b;
    cout<<"Masukkan Nilai C: ";
    cin>> c;

    if (a>b && a>c){
            cout<<"Nilai terbesar adalah:"<<a<<endl;
    }else if(b>a && b>c){
        cout<<"Nilai terbesar adalah:"<<b<<endl;
    }else if (c>a && c>b){
        cout<<"Nilai terbesar adalah:"<<c<<endl;
    }else {
        cout<<"Nilai yang anda Masukkan Invalid"<<endl;
    }
    return 0;
}
