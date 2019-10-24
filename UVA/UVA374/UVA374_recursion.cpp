#include<iostream>
using namespace std;
unsigned long long big_Mod(int b, int p, int m);
int main() {
	int B, P, M;
	while (cin >> B >> P >> M) {
		unsigned long long cal = big_Mod(B,P,M);
		cout << cal << endl;
	}
}
unsigned long long big_Mod(int b, int p, int m) {
	if (p == 0)
		return 1 % m;
	else if (p == 1)
		return b % m;
	else {
		if (p % 2 != 0)
			return big_Mod(b, p / 2, m) * big_Mod(b, p / 2, m) * b % m;
		else
			return big_Mod(b, p / 2, m) * big_Mod(b, p / 2, m) % m;
	}
}
