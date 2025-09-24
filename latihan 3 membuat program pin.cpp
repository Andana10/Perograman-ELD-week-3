#include <iostream>
#include <string>
using namespace std;

int main() {
      string username;
      int pin;

      cout << "Masukkan username (tanpa spasi): ";
      cin >> username;
      cout << "Masukkan pin(0-9999): ";
      cin >> pin;

      if (username == "ugo") {
            if (pin>=0000 && pin <= 9999) {
                  cout << "Akses diterima";
            } else {
                  cout << "PIN invalid";
            }
      } else {
            cout << "User tidak dikenali";
      }

}