#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int>v;
	long long a, b, c, d;
	cout << "meramdenobitshi gvinda gadavides: ";
	cin >> d;
	cout << "sheiyvanet gadasayvani ricxvi: ";
	cin >> a;

	while (a > 0) {
		if (a < d) {
			v.push_back(a);
			break;
		}
		b = a % d;
		if (b >= 10 && b <= 35)
		{

		}
		v.push_back(b);
		a = a / d;
	}
	c = v.size() - 1;
	while (c >= 0) {
		cout << v[c];
		c--;
	}
}
