#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// sheqmnilia goga iremashvilis mier
int matrix[3][3] = { 1,2,3,4,5,6,7,8,9 };
int player = 1;
int d = 0;
void Draw()
{
	cout << "Tic Tac Toe v1.0" << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
}
void Input() {
	int a;
	cout << "Press the number of the feild: ";
	cin >> a;

	if (a == 1)
		matrix[0][0] = player;
	else if (a == 2)
		matrix[0][1] = player;
	else if (a == 3)
		matrix[0][2] = player;
	else if (a == 4)
		matrix[1][0] = player;
	else if (a == 5)
		matrix[1][1] = player;
	else if (a == 6)
		matrix[1][2] = player;
	else if (a == 7)
		matrix[2][0] = player;
	else if (a == 8)
		matrix[2][1] = player;
	else if (a == 9)
		matrix[2][2] = player;
}
void TogglePlayer() {
	if (player == 1) {
		player = 0;
	}
	else
		player = 1;

}
void Win() {
	if (matrix[0][0] + matrix[0][1] + matrix[0][2] == 3) {
		cout << "first pleier win!" << endl;
		d = 1;
		
	}
	else if (matrix[0][0] + matrix[0][1] + matrix[0][2] == 0) {
		cout << "second player win!" << endl;
		d = 1;
	}
	else if (matrix[1][0] + matrix[1][1] + matrix[1][2] == 3) {
		cout << "first pleier win!" << endl;
		d = 1;

	}
	else if (matrix[1][0] + matrix[1][1] + matrix[1][2] == 0) {
		cout << "second player win!" << endl;
		d = 1;
	}
	else if (matrix[2][0] + matrix[2][1] + matrix[0][2] == 3) {
		cout << "first pleier win!" << endl;
		d = 1;

	}
	else if (matrix[2][0] + matrix[2][1] + matrix[2][2] == 0) {
		cout << "second player win!" << endl;
		d = 1;
	}
	if (matrix[0][0] + matrix[1][0] + matrix[2][0] == 3) {
		cout << "first pleier win!" << endl;
		d = 1;

	}
	else if (matrix[0][1] + matrix[1][1] + matrix[2][1] == 0) {
		cout << "second player win!" << endl;
		d = 1;
	}
	else if (matrix[0][2] + matrix[1][2] + matrix[2][2] == 3) {
		cout << "first pleier win!" << endl;
		d = 1;

	}
	else if (matrix[0][2] + matrix[1][2] + matrix[2][2] == 0) {
		cout << "second player win!" << endl;
		d = 1;
	}
	else if (matrix[0][0] + matrix[1][1] + matrix[2][2] == 3) {
		cout << "first player win! " << endl;
		d = 1;
	}
	else if (matrix[0][0] + matrix[1][1] + matrix[2][2] == 0) {
		cout << "second player win! " << endl;
		d = 1;
	}
	else if (matrix[0][2] + matrix[1][1] + matrix[2][0] == 3) {
		cout << "first player win! " << endl;
		d = 1;
	}
	else if (matrix[0][2] + matrix[1][1] + matrix[2][0] == 0) {
		cout << "second player win! " << endl;
		d = 1;
	}

}
int main() {
	cout << "x ik 0 ikis magivrad chven aq vwert 1 da 0 ians" << endl;
	Draw();
	while (true) {

		Input();
		Draw();
		Win();
		if (d == 1)break;
		TogglePlayer();
	}



	system("pause");



}
