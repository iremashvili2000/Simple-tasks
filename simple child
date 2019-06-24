#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Bank {
protected:
	string name;
	int year;
public:
	Bank(string a ="TBS", int b = 2000) {
		name = a;
		year = b;
	}
	~Bank(){ }
	void print() {
		cout << "saxeli: " << name << " daarsebis weli - "<< year << endl;
	}

};
class Account : public Bank {
protected:
	double amount;
	long long number;
public:
	Account(double c = 999, long long d = 1000000) : Bank() {
		amount = c;
		number = d;
	}
	
	~Account(){ }
	
	void print() {
		Bank::print();
		cout << "tanxis raodenoba: " << amount << " angarishis nomeria: " << number << endl;
	} 
	double glob() {
		if (amount < 1000) {
			amount = 3 * amount;
			return amount;
		}
	}
	

};
class Client :public Account {
protected:
	string lastname;
	string job;
public:
	Client(string g="iremashvili", string h="programer") : Account() {
		lastname = g;
		job = h;
	}
	~Client(){ }
	void print() {
		Account::print();
		cout << "gvari: " << lastname << " samushao adgili: " << job << endl;
	}
	double glob() {
		if (amount < 1000) {
			amount = 3 * amount;
			return amount;
		}
	}
	void sam(string d) {
		cin >> d;
		job = d;
	}
	
	
};

int main() {
	int n = 1;
	Bank* C = new Bank[n];
	Account* D = new Account[n];
	Client* E = new Client[n];
	C->print();
	D->print();
	E->print();
	D->glob();
	E->glob();
	string d;
	E->sam(d);
	D->print();
	E->print();
	delete[] C;
	delete[] D;
	delete[] E;
	nullptr;
	return 0;
}
