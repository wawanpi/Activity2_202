#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
    return p * l;
}
float LuasLingkaran(float r) {
    return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
    return 0, 5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;

    do {
        cout << "\n\n=============== " << endl;
        cout << "======= MENU ===== " << endl;
        cout << "================= " << endl;
        cout << "1. Luas Persegi " << endl;
        cout << "2. Luas Lingkaran " << endl;
        cout << "3. Luas Segitiga " << endl;
        cout << "4. Exit" << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukan Panjang = ";
            cin >> panjang;
            cout << "Masukan Lebar = ";
            cin >> lebar;
            cout << "Luas Petsegi Panjang = " << LuasPersegi(panjang, lebar);
            break;
        case 2:
            cout << "Masukan Alas =";
            cin >> jejari;
            cout << "Luas Lingkaran = " << LuasLingkaran(jejari);
            break;
        case 3:
            cout << "Masukan Alas = ";
            cin >> alas;
            cout << "Masukan Tinggi =";
            cin >> tinggi;
            cout << "Luas Segitiga = " << LuasSegitiga(alas, tinggi);
            break;
        case 4:
            break;
        default:
            cout << "PILIHAN SALAH" << endl;
            break;
        }
    } while (pilihan != 4);
}
