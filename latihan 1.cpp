#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Masukkan sebuah bilangan bulat x: ";
    cin >> x;

    if (x < 0) {
        if (x % 2 == 0) {
            cout << "negatif dan genap";
        } else {
            cout << "negatif dan ganjil";
        }
    } else if (x > 0) {
        if (x % 2 == 0) {
            cout << "positif dan genap";
        } else {
            cout << "positif dan ganjil";
        }
    } else {
        cout << "nol";
    }

}