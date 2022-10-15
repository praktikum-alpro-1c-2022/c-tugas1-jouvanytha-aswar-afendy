#include <iostream>
using namespace std;


int main(){
    //  Tugas 3
    //Tidak Menggunakan Variable Sementara
    int a1 = 2;
    int b1 = 7;

    a1 = a1 - b1;
    b1 = a1 + b1;
    a1 = b1 - a1;

    cout << "Tidak Menggunakan Variable Sementara" << endl;
    cout << "Hasil a = " << a1 << endl;
    cout << "Hasil b = " << b1 << endl;

    return 0;
}
