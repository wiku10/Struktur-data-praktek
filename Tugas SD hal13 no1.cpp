#include <iostream>
#include <conio.h>

using namespace std;
int main() {    
    float angka, total = 0, rata;
    int jumlah;
    cout << "Progam Mencari Rata-rata" << endl;
    cout << endl;
    cout << "masukkan jumlah angka yg digunakan untuk mencari rata-rata  : "; cin >> jumlah;
    cout << endl;
    
    for (int i = 1; i <= jumlah; i++) {
        cout << "Masukkan angka            : "; cin >> angka;
        total = total + angka;
    }
    cout << endl;
    cout << "Total                      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 : " << rata;
    getch();
}
