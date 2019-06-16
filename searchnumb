#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// amocana poulobs mashvshi sasurvel ricxvs sasurvel intervalshi tu ratqmaunda aseti arsebobs
int search(vector <int> a, int n, int p, int end) {
	
	for (int i = p; i < end; i++) {
		if (a[i] == n)return i;
	}
	
	return end;
}
int main() {
	int d, l;
	vector<int> v;
	cout << "ramden elementiani gsurt masivi: ";
	cin >> d;
	cout << "chayaret masivshi ricxvebi: ";
	for (int i = 0; i < d; i++) {
		cin >> l;
		v.push_back(l);
	}
	int a, b, c;
	cout << "shemoitanet mosadzebni ricxvi: ";
	cin >> a;
	cout << "shemitanet ra intervalshi moidzebnos gaitvaliswinet intervalis bolo ar unda agematebodes " << v.size() << ": " << endl;
	cin >> b >> c;
	
	int index(search(v, a, b-1, c-1));
	if (index != c-1)
		cout << a << " found at index " << index+1<< endl;
	else cout << "ar moidzebna am intervalze! :(  "<< endl;



	system("pause");

}
