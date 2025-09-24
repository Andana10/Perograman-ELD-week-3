#include <iostream>
using namespace std;

int main() {
	int x = 0;
	cout << "Masukkan sebuah bilangan bulat:";
	cin >> x;
	if (x < 1){
		cout << "Salah input";
	}
	if (x%2==0 && x!=2){
		cout << "Bukan prima";
	}
	if (x%2!=0 & x>1){
		cout << "Mungkin prima";
	}

}

