#include <iostream>
#include <cmath>
using namespace std;
double Plus(double a, double b) {
	return a + b;
}
double multiply(double a, double b) {
	return a * b;
}
double Divide(double a, double b) {
	return a / b;

}
double Subtraction(double a, double b) {
	return a - b;
}



int main() {
	double a, b, d = 0;
	char c;
	cout << " If you want to stop press the button-‘e’ after you write a sign" << endl;
	cout << " Please dont write it as a string " << endl;
	cin >> a;

	while (true) {



		cin >> c;
		if (c == 'e') {
			cout << a << endl;
			break;
		}
		else {
			if (c == '+') {
				cin >> b;
				a = Plus(a, b);
				cout << a << endl;
			}
			else if (c == '*') {
				cin >> b;
				a = multiply(a, b);
				cout << a << endl;
			}
			else if (c == '/') {
				cin >> b;
				if (b == '0') {
					cout << "error" << endl;
					break;
				}
				else {
					a = Divide(a, b);
					cout << a << endl;
				}
			}
			else if (c == '-') {
				cin >> b;
				a = Subtraction(a, b);
				cout << a << endl;

			}
			else {
				cout << "ERRor" << endl;
				cout << d << endl;
				break;
			}
		}

	}


	system("pause");

}
