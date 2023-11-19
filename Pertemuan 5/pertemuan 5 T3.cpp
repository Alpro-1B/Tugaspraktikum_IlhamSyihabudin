#include <iostream>

using namespace std;

void Fibonacci(int j);

int main()
{
    cout << "Program Deret Fibonacci" << endl<<endl;

    //deklarasi variabel
    int j;

    //meminta user memasukkan angka deret fibonancci yang diinginkan
    cout << "masukkan angka fibonacci : ";
    cin >> j;

    //menampilkan output deret fibonacci
    cout<<"\nBerikut adalah " << j << " Deret fibonacci yang diinginkan : ";

    //memanggil fungsi parameter untuk memunculkan deret fibonacci
    Fibonacci(j);

    cout<<"\n\nSELESAI TERIMAKASIH"<<endl;

    return 0;
}
    //fungsi menampilkan deret fibonacci
    void Fibonacci(int j){
       int r=0;//deklarasi variabel dan inisialisasi
       int s=1;//deklrasi variabel dan inisialisasi

    //looping untuk membuat deret fibonacci
    for (int p = 0; p < j; p++) {
        cout << r << " ";//menampilkan anggka

         int t= r+s;//dijumlah untuk menghitung angka selanjutnya deret fibonacci
            r=s;//menggeser angka sebelumnya menjadi angka saat ini
            s=t;//menggeser angka saat ini menjadi angka selanjutnya
    }
}

