#include <iostream>

using namespace std;

void Fibonacci(int x);

int main()
{
    cout<<"HALLO SELAMAT DATANG"<<endl<<endl;

    //deklarasi variabel
    int x;

    //meminta user memasukkan angka untuk deret fibonacci yang diinginkan
    cout<<"Masukkan Angka Yang Di Inginkan Untuk Deret Fibonacci : ";
    cin>>x;

    // menampilkan output deret fibonacci
    cout<<"\nBerikut Adalah " << x << " Deret Fibonacci Yang Anda Inginkan : ";

    //memanggil fungsi parameter untuk memunculkan deret fibonacci
    Fibonacci(x);

    cout<<"\n\nSELESAI TERIMAKASIH"<<endl;

    return 0;
}
    //fungsi menampilkan deret fibonacci
    void Fibonacci(int n){
        int a=0;//deklarasi variabel dan inisialisasi
        int b=1;//deklarasi variabel dan inisialisasi

    //looping untuk membuat deret fibonacci
    for (int m = 0; m < n; m++) {
        cout << a << " ";//menampilkan angka

        int c=a + b;//dijumlah untuk menghitung angka selanjutnya deret fibonacci
            a=b;//menggeser angka sebelumnya menjadi angka saat ini
            b=c;//menggeser angka saat ini menjadi angka selanjutnya
    }
}
