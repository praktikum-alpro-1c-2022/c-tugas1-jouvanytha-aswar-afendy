#include <iostream>
using namespace std;


int main(){
    //  Tugas 2
    int a = 77;
    int b = 27;

    int c = a;
    a = b;
    b = c;

    cout << "Menggunakan Variable Sementara" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
