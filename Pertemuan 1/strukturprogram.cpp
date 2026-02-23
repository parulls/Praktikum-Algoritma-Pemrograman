//header
#include <iostream>
#include <iomanip>

#define PI 3.14 //konstanta

using namespace std;

//fungsi
float hitungLuas(float r) {
    return PI * r * r;
}

float hitungKeliling(float r) {
    return 2 * PI * r;
}

//fungsi utama atau main program
int main() {
    float jariJari, luas, keliling;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    luas = hitungLuas(jariJari);
    keliling = hitungKeliling(jariJari);

    cout << "Luas lingkaran: " << fixed << setprecision(2) << luas << endl;
    cout << "Keliling lingkaran: " << fixed << setprecision(2) << keliling << endl;

    return 0;
}
