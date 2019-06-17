#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
	Employee(string, string, float);
	Employee() {}
	void show_Employee();
private:
	string name;
	string position;
	float salary;
};
class Manager : public Employee {
public:
	Manager(string, string, float, string, float);
	Manager() {}
	void show_Manager();
private:
	float annual_bonus;
	string company_car;
};

Employee::Employee(string name, string position, float salary)
{
	this->name = name;
	this->position = position;
	this->salary = salary;
}
void Employee::show_Employee()
{
	cout << "Name: " << name << endl;
	cout << "Position: " << position << endl;
	cout << "Salary: $" << salary << endl;
}
Manager::Manager(string name, string position, float salary, string car,
	float bonus) : Employee(name, position, salary)
{
	company_car = car;
	annual_bonus = bonus;
}
void Manager::show_Manager()
{
	show_Employee();
	cout << "Company's car: " << company_car << endl;
	cout << "Bonus: $" << annual_bonus << endl;
}
int main()
{
	Employee ggg("John Doe", "Programmer", 35000.0);
	Manager ans("Jane Doe", "president", 50000.0, "BMW", 1000);
	ggg.show_Employee();
	ans.show_Manager();
	system("pause");
}
