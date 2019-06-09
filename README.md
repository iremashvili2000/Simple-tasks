#include <iostream>
#include <string>
using namespace std;
// programa gaxlavt oop tematikis programa poulobs sam adamians shoris yvelaze didi asakis mqones da yvelaze fulians :D 
class func {
	string  name, surname, id;
	double fuli;
	int age;
public:
	func() { }
	~func(){ }
	void input();
	
	
	void printmayuta();
	void ufrosiasakis();
	int getage() {
		return age;
	}
	double getfuli() {
		return fuli;
	}
		

};
func fuliani(func&, func&, func&);
func didi(func&, func&, func&);
void func::input() {
	static int counter = 1;
	cout << "name: "<<counter<<": "; cin >> name;
	cout << "surname: "; cin >> surname;
	cout << "idi: "; cin >> id;
	cout << "money: "; cin >> fuli;
	cout << "age: "; cin >> age;
	counter++;
}
void func::printmayuta() {
	cout << "yvelaze fuliani tipi: " << name << " " << surname << endl;
	cout << " misi idi: " << id << endl << "age: " << age << endl;
	cout << "fulis raodenoba: " << fuli;
	cout << endl;
}
void func::ufrosiasakis() {
	cout << "yvelaze didi asakis adamiani: " << name << " " << surname << endl;
	cout << " misi idi: " << id << endl << "age: " << age << endl;
	cout << "fulis raodenoba: " << fuli;
	cout << endl;

}
//func::func() { }
//func::~func(){ }
func fuliani(func& a, func& b, func& c) {
	func*t;
	if (a.getfuli() > b.getfuli())t = &a;
	else t = &b;
	if (c.getfuli() > t->getfuli())t = &c;
	return * t;
}
func didi(func& a, func& b, func& c) {
	func *t;
	if (a.getage() > b.getage())t = &a;
	else t = &b;
	if (c.getage() > t->getage())t = &c;
	return *t;

}
int main() 
{
	func A, B, C;
	A.input();
	B.input();
	C.input();
	func D = fuliani(A, B, C);
	D.printmayuta();
	func G = didi(A, B, C);
	G.ufrosiasakis();
	system("pause");
}
