//Bahasa C
/*
#include <stdio.h>
int main (){
    char nama[50];
    int usia;
    float ipk;

    printf("Masukkan Nama Anda: ");
    scanf("%s", &nama);
    printf("Masukkan Usia Anda: ");
    scanf("%d", &usia);
    printf("Masukkan IPK Anda: ");
    scanf("%f", &ipk);

    printf("Nama saya adalah %s. Saya berusia %d tahun. Dan IPK saya semester lalu adalah %.2f", nama, usia, ipk);
}
*/

// Bahasa CPP
#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    string nama;
    int usia;
    float ipk;

    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Masukkan usia anda: ";
    cin >> usia;
    cout << "Masukkan ipk anda: ";
    cin >> ipk;

    cout << "Nama saya adalah " << nama <<". Saya berusia " << usia << " tahun. Dan IPK saya semester lalu adalah "<< fixed << setprecision(2) << ipk << ".";
}