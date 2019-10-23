#include <iostream>
using namespace std;
int main() {
	//project name is this number fibonach's number??
	long long a, b = 0, c, i = 1;
	cin >> a;
	if (a == 0 || a==1) {
		cout << a << " is fibonach's number!" << endl;
	}
	else {
		while (i < a) {
			
			c = i + b;
			b = i;
			i = c;
			if (i >= a) {
				if (i == a) {
					cout << "this is fibonach number!" << endl;
				}
				else {
					cout << "this is not fibonach's number!" << endl;
					break;
				}
			}



		}
	}
	


}
