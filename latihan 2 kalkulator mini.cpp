#include <iostream>
using namespace std;

int main() {
      int opsi;
      double a, b, hasil;

      cout << "1 : penjumlahan(+)\n";
      cout << "2 : pengurangan(-)\n";
      cout << "3 : perkalian(*)\n";
      cout << "4 : pembagian(/)\n";
      cout << "Masukkan opsi (1-4): ";
      cin >> opsi;

      if (opsi < 1 || opsi > 4) {
      cout << "Terjadi kesalahan, masukkan opsi yang valid!\n";
      return 1;
      }

      cout << "Masukkan biangan pertama: ";
      cin >> a;
      cout << "Masukkan bilangan kedua: ";
      cin >> b;

      switch (opsi) {
      case 1:
            hasil = a + b;
            cout << "Hasilnya adalah: " << hasil;
            break;
      case 2:
            hasil = a - b;
            cout << "Hasilnya adalah: " << hasil;
            break;
      case 3:
            hasil = a * b;
            cout << "Hasilnya adalah: " << hasil;
            break;
      case 4:
            if (b == 0) {
                cout << "Terjadi kesalahan: Pembagian oleh nol tidak diperbolehkan!\n";
            } else {
                hasil = a / b;
                cout << "Hasilnya adalah: " << hasil;
            }
}
}