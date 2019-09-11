#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// goga iremashvili
int main() {
	int number, bla;
	cin >> number;

	bla = number;
	for (int i = 0; i < number; i++) {
		for (int c = 0; c < bla; c++) {
			cout << "*";
		}
		cout << endl;
		bla--;
	}
	cout << endl;
	cout << endl;
	bla =1;
	for (int i = 0; i <= number; i++) {
		for (int c = bla; c > 0; c--) {
			cout << "*";
		}
		cout << endl;
		bla++;
		if (bla > number)break;
		
	}
	cout << endl;
	cout << endl;
	bla = 1;
	for (int i = 0; i <= number; i++) {
		for (int c = bla; c > 0; c--) {
			cout << "*";
		}
		cout << endl;
		bla+=2;
		if (bla > number)break;

	}
	cout << endl;
	cout << endl;





	system("pause");




}
