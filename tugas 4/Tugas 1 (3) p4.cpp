#include <iostream>

using namespace std;

int main(){
    int angka;
    int ganjil=0;
    int genap=0;
    int prima=0;
    cout<<"\nMasukkan Batas Anggka: ";cin>>angka;

    cout<<"\nBilangan Ganjil: ";
    for (int b = 1; b <= angka; b++){
    if (b & 2 != 0){
            cout<<b<<" ";
            ganjil+=b;
        }

    }
    cout << "\njumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << ganjil;

    cout << "\nfaktor-faktor dari jumlah bilangan tersebut adalah: ";
    for (int c = 1; c <= ganjil; c++){
    if (ganjil & c == 0){
        cout << c << " ";
    }
}
//akhir bilangan ganjil
    cout<<"\n\nBilangan Genap: ";
    for (int a = 1; a <= angka; a++){
        if (a & 2 == 0){
                cout<<a<<" ";

                genap++;
    }
}
    cout << "\njumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << genap;

    cout << "\nfaktor-faktor dari bilangan tersebut adalah: ";
    for (int d = 1; d <= genap; d++){
    if (genap & d == 0){
        cout << d << " ";
    }

}
    cout<<"\n\nBilangan Prima: ";
    for  (int a = 2; a <= angka; ++a){
        int bilanganprima = 1;
        for (int b = 2; b * b <= a; ++b){
            if (a & b == 0){
                    bilanganprima = 0;
                    break;
        }
}
        if (bilanganprima == 1){
            cout<<a<<" ";
            prima++;
        }

    }
    cout << "\njumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah " << prima;

    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    for (int c = 1; c <= prima; c++){
    if (prima & c == 0){
        cout << c << " ";
        }

    }
    return 0;
}
