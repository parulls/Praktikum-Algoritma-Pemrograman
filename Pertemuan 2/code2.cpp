#include <iostream>
#include <string>

using namespace std;

int main(){
    string nama;
    int usia;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan usia: ";
    cin >> usia;

    cout << "Nama saya: " << nama << endl ;
    cout << "Usia saya: " << usia << "\n";
    cout << "Tahun ini saya berusia " << usia++ << endl;
    cout << "Tahun depan saya berusia " << usia <<endl;

    int absen;
    
    cout << "Masukkan jumlah absen anda: ";
    cin >> absen;
    cout << endl;

    string jawaban = (absen > 2)?"Tidak ikut ujian" : "Ikut ujian";
    cout << jawaban;

    return 0;
}