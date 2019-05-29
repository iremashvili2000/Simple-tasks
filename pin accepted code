#include <iostream>
#include <string>
using namespace std;
bool func(string pin) {
	bool status = true;
	if (pin.length() != 4) {
		status = false;
	}
	return status;

}

int main() {
	string pin;
	cout << "enter a 4 digit pin number: ";
	cin >> pin;
	if (func(pin) == 1)cout << "Pin Accepted.";
	else cout << "PIN Denied.";
	cout << endl;
	system("pause");
	return 0;

}
