#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>			
#include <string>
using namespace std;
// tamashi gaxlavt chafiqrebuli ricxvis gamocnobaze ricxvs ifiqrebs kompi 1 100 mde da chven ramden xanshi gamovicnobt
// sheudzliat megobrebs shejibron ertmanets rigrigobit :)
// goga iremashvili
int main()
{
	int iSecret,numb;
	int counts = 0;

	srand(time(NULL));

	iSecret = rand() % 100 + 1;

	while (true) {
		cout << "shemoitanet tqveni ricxvi,tu tamashidan gasvla gindat akrife 101: ";
		cin >> numb;
		if (numb == 101) { 
			cout << "naxvamdis!" << endl;
			break; }
		if (numb > 101 & numb < 1) {
			cout << "shegeshala monakveti";
			continue;
		}
		counts++;
		if (numb > iSecret)cout << "tqveni ricxvi metia" << endl;
		else {
			if (numb < iSecret)cout << "tqveni ricxvi naklebia" << endl;
			if (numb == iSecret) {
				cout << "ipovet gilocavt! " << endl;
				cout << "saidumlo ricxvi iyo: " << iSecret << endl;
				cout << "ipove amden cdashi: " << counts << endl;
				break;

			}
			
		}


	}
	system("pause");
	return 0;
}
