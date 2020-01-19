#include <iostream>
#include <string>
// gaketebulia goga iremashvilis mier yvela saavtoro ufleba daculia :Ddddd

using namespace std;
class GPA {
protected:
	int sagnebisod;
	int qula;
	int krediti;
	double    kreditsod;
	double bla;
	double winGpa;

public:
	GPA() {
		bla = 0;
		kreditsod = 0;
		cout << "inglisuri modelis mixedvit" << endl;

		cout << "shemoitanet gavlili sagnebis odenoba: ";
		cin >> sagnebisod;
		for (int i = 0; i < sagnebisod; i++) {
			cout << "shemoitanet saganshi migebuli qula: ";
			cin >> qula;
			if (qula >= 51 && qula <= 100) {
				if (qula >= 91 && qula <= 100) {
					winGpa = 4.0;
					cout << "A zea daxuruli " << endl;
				}
				else {
					if (qula >= 81 && qula <= 90)winGpa = 3.0, cout << "B zea daxuruli " << endl;
					else if (qula >= 71 && qula <= 80)winGpa = 2.0, cout << "C zea daxuruli " << endl;
					else if (qula >= 61 && qula <= 70)winGpa = 1.0, cout << "D zea daxuruli" << endl;
					else if (qula >= 51 && qula <= 60)winGpa = 0.5, cout << "E zea daxuruli" << endl;;
				}
				cout << "am sagnis kreditis odenoba:  ";
				cin >> krediti;
			}
			else {
				cout << "chachrilxar dzmao amitom amas gpa gamosatvlelad ar sheitanen" << endl;
				krediti = 0;
			}
			bla = bla + krediti * winGpa;
			kreditsod += krediti;
		}

	}
	void gpagamotvla(){
		cout<<"sheni gpa aris: " << double (bla / kreditsod) << endl;
	}
	~GPA(){ }

};
int main(){
	GPA a;
	a.gpagamotvla();


	system("pause");
}
