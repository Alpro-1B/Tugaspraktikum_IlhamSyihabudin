#include <iostream>

using namespace std;

int main()
{
    int sisi,panjang,lebar,alas,tinggi;
    char luas;

    cout<<"BUATLAH PERHITUNGAN: PERSEGI, PERSEGI PANJNAG, SEGITIGA"<<endl;
    cout<<"\nKETIK 'E' agar mendapatkan perhitungan PERSEGI\n"<<endl;
    cout<<"\nKETIK 'F' agar mendapatkan perhitungan PERSEGI PANJANG\n"<<endl;
    cout<<"\nKETIK 'G' agar mendapatkan perhitungan SEGITIGA\n"<<endl;

    cout<<"Ingin menghitung apa: ";cin>>luas;

    switch(luas){
    case 'E':
        cout<<"Ingin Menghitung PERSEGI\n"<<endl;
        cout<<"Masukkan Sisi: ";cin>>sisi;
        cout<<"Luas Persegi: "<<sisi*sisi<<endl;
    break;
    case 'F':
        cout<<"Ingin Menghitung PERSEGI PANJANG\n"<<endl;
        cout<<"Masukkan Panjang: ";cin>>panjang;
        cout<<"Masukkan Lebar: ";cin>>lebar;
        cout<<"Luas Persegi panjang: "<<panjang*lebar<<endl;
    break;
    case 'G':
        cout<<"Ingin menghitung SEGITIGA\n"<<endl;
        cout<<"Masukkan Alas: ";cin>>alas;
        cout<<"Masukkan Tinggi: ";cin>>tinggi;
        cout<<"Luas Segitiga: "<<0.5*alas*tinggi<<endl;
    break;
    default:
        cout<<"saya tidak tahu"<<endl;
    }

    return 0;
}
