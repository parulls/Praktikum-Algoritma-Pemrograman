#include <stdio.h>   //header

#define PI 3.14 //konstanta
float r; //variabel global

//fungsi
float hitungLuas() {
    return PI * r * r;
} 

float hitungKeliling() {
    return 2 * PI * r;
} 

//fungsi utama atau main program
int main() {
    float luas, keliling;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);

    luas = hitungLuas();
    keliling = hitungKeliling();

    printf("%.2f\n", luas);
    printf("%.2f\n", keliling);

    return 0;
}

