#include <stdio.h>
#include <conio.h>

int main(){
    char nama[50], jurusan[50];
    int usia;

    printf("Masukkan nama: ");
    scanf("%s", &nama);
    // gets(nama);
    getchar();

    printf("Masukkan jurusan: ");
    // scanf("%s", &nama);
    gets(jurusan);

    printf("Masukkan usia: ");
    scanf("%d", &usia);
    getchar();

    printf("Masukkan character: ");
    char char1 = getch();

    printf("\n Nama saya: ");
    // puts(nama);
    // putchar(char1);

    usia+=1;

    printf("\nNama saya adalah %s. Saya berumur %d. Saya dari jurusan %s. Karakter yang saya masukkan %c", nama, usia, jurusan, char1);

    return 0;
}