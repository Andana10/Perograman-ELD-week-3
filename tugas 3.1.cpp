#include <iostream>
using namespace std;

int main(){
	int x = 0;
	
	cout << "Masukkan nilai: ";
	cin >> x;
	if ( x >= 80 ) {
		cout << "A";
	}
	if ( x >= 60 && x < 80) {
		cout << "B";
	}
	if ( x < 60 && x >=40 ) {
		cout << "C";
	}
	if ( x < 40 && x >= 20) {
		cout << "D";
	}
	if ( x < 20) {
		cout << "E";
	}
}
