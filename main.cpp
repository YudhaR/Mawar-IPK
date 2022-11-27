#include <iostream>

/*
    Program Mawar IPK
    Ket : Program menentukan ipk untuk lulus atau tidak lulus
    By  : Yudha Rizqia Grafer
    Tgl : 14 oktober 2022

*/

using namespace std;

int main()
{
     //kamus
    float ipk;

    //algoritma
    cout << "Masukkan IPK : ";
    cin >> ipk;
    if (( ipk >= 3.5 )&&( ipk <= 4.0 )){
        cout << "LULUS";
    }else if (( ipk >= 2.5 )&&( ipk <= 3.49 )){
    cout << "Dipertimbangkan";
    }else if (( ipk >= 0 )&&( ipk < 2.5 )){
    cout << "Tidak Lulus";
    }else{
    cout << "Inputan Salah";
    }

    return 0;
}
