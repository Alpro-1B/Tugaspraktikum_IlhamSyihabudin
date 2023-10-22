#include <iostream>

using namespace std;

int main() {

    int jumlahTeman,jumlahBebek,sisaBebek;
    cout<<"masukkan jumlah bebek pak tatang = ";
    cin>>jumlahBebek;
    cout<<"Masukkan jumlah teman pak tatang = ";
    cin>>jumlahTeman;

    cout<<"\n\nSetiap teman pak tatang akan mendapatkan = " << jumlahBebek/jumlahTeman <<"ekor bebek" <<endl<<endl;
    cout<<"Setelah semua bebek dibagikan masih tersisah bebek pak tatang sejumlah = " <<(jumlahBebek % jumlahTeman)<<"ekor bebek" <<endl;

return 0;
}
