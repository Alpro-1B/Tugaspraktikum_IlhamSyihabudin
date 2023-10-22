#include <iostream>

using namespace std;

int main() {
 //PENUKARAN NILAI MENGGUNAKAN VARIABEL TAMBAHAN
    // VARIABEL thirdValue adalah variabel tambahan untuk menukar variabel firstValue ke secondValue dan secondValue ke firstValue
    int firstValue,secondValue, thirdValue;
    firstValue = 10; //variabel pertama
    secondValue = 8; //variabel kedua
    thirdValue = 4; //variabel tambahan

    // Nilai yang diketahui
    cout<< "Diketahui" <<endl;
    cout<< "First value = " <<firstValue<<endl;
    cout<< "Second value = " <<secondValue<<endl;
    cout<< "third value = " <<thirdValue<<endl<<endl;

    //penukaran nilai menggunakan variabel tambahan
    cout<<"sebelum ditukar \nfirst value = 10 "<<endl;
    cout<<"second value = 8"<< endl;

    // Bertukar antara variabel
    thirdValue = firstValue;
    firstValue = secondValue;
    secondValue = thirdValue;

    // penukaran nilai agar nilai firstValue ke secondValue dan nilai secondValue ke firstValue
    cout<<"\nSetelah ditukar \nFirst value = "<<firstValue<<"\nSecond value = "<<secondValue<<endl<<endl;

    //PENUKARAN NILAI TANPA VARIABEL TAMBAHAN
    //reset nilai
    firstValue = 10;//variabel pertama
    secondValue = 8;//variabel kedua

    cout<<"cara kedua "<<endl;
    cout<<"Sebelum ditukar"<<endl;
    cout<<"First value = 10 "<<endl;//menampilkan firstValue adalah 10
    cout<<"Second value = 8 "<<endl<<endl;//menampilkan secondValue adalah 8

    // Bertukar antara variabel
    firstValue = firstValue + secondValue;//menjumlah keduanya agar salah satu variabel bisa dikurang sehingga mendapat nilai salah satunya
    secondValue = firstValue - secondValue;//kurangi nilai firstValue dengan secondValue agar nilai dari second value nya berubah
    firstValue = firstValue - secondValue;//kurangi nilai firstValue yang baru dengan nilai secondValue baru sehingga tersisa nilai secondValue yang lama

    //penukaran variabel
    cout<<"Sesudah ditukar"<<endl;
    cout<<"First value = "<<firstValue<<endl;//menampilkan hasil jika firstValue adalah 8
    cout<<"Second value = "<<secondValue<<endl;//menampilkan hasil jika secondValue adalah 10

return 0;
}



