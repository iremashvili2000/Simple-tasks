#include <iostream>
#include <string>
using namespace std;
class msg {
private:
	string numb;
	string  mesige;
public:
	msg() {
		cout << "enter mobile number: " << endl;
		cin >> numb;
		cout << "enter massge: " << endl;
		cin >> mesige;
	}
	string getnumb() {
		return numb;
	}
	string getmesige() {
		return mesige;
	}
	void print() {
		cout << "phone number: " << endl;
		cout << getnumb() << endl;
		cout << "mesige is: " << endl;
		cout << getmesige() << endl;
	}
	
};
int main()
{
	msg a;
	a.print();

	system("pause");
}
