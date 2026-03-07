#include <stdio.h>

int main() {
    char nama[100];
    int usia;

    printf("Masukkan usia: ");
    scanf("%d", &usia);

    // getchar(); // Membersihkan karakter newline dari buffer

    printf("Masukkan nama lengkap: ");
    gets(nama); // Fungsi gets() membaca string termasuk spasi

    printf("\nNama Anda: %s\n", nama);
    printf("Usia Anda: %d tahun\n", usia);

    return 0;
}
