#include <iostream>

using namespace std;

int main()
{
    int j;
    cout << "## Program Deret Fibonacci ## \n" << endl;
    cout << "masukkan angka fibonacci : ";
    cin >> j;

    int r=0;
    int s=1;

    for (int p = 0; p < j; p++) {
        cout << r << " ";

        int t= r+s;
            r=s;
            s=t;
    }

    cout << endl;

    return 0;
}
