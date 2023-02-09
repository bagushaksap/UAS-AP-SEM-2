#include <iostream>

using namespace std;

float hitungLuasLingkaran(float r) {
    return 3.14 * r * r;
}

int main()
{
    cout << "~~  Program C++ Menghitung Luas Lingkaran  ~~" << endl;
    cout << "=============================================" << endl;
    cout << endl;

    float r;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    cout << "Luas lingkaran = "<< hitungLuasLingkaran(r) << endl;

    return 0;
}
