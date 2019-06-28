#include <iostream>
#include <string>
using namespace std;
class person{
protected:
	string pin, name, lastname, gmail, bla;
public:

	
	 person(){
		cout << "name: ";
		cin >> name;
		cout << "lastname: " << lastname;
		cin >> lastname;
		cout << "gmail: ";cin>> gmail;
		cout << "pin"; cin >> pin;
		if (pin.size() != 4)cout << "error! pin code is wrong!" << endl, pin = "0000";
		else cout << "accepted" <<endl;
	
		welcome();
		
	}
	 ~person(){ }
	 void welcome(){
		 if (pin != "0000"){
			
			 cout << "we need more time bacause we help you plase wait 5 minut!:D" << endl;
			 cout << "loading..." << endl;
			
			 cout << "welcome to my website:) " << endl;
		 }
		 else{
			 cout << "pls enter number, if you are not robot 1234 " << endl;
			 cin >> bla;
			 if (bla == "1234"){
				 cout << "accepted pls enter new pin: ";
				 cin >> pin;
				 if (pin.size() != 4)cout << "error! pls go back!:)"<<endl
			 }
			 else{
				 cout << "pin is wrong!!!" << endl;
			 }

		 }
		
	 }
	 



};
class momxmarebeli : public person{


};
int main(){
	person a;
	system("pause");

}
