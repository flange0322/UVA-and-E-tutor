#include<iostream>
using namespace std;
int main() {
	int B, P, M;
	unsigned long long cal;
	while (cin>>B>>P>>M)
	{
		cal = 1;
		B %= M;
		for (; P; P>>=1)
		{
			if (P & 1) {
				cal *= B;
				cal %= M;
			}
			B *= B;
			B %= M;
		}
		cout << cal << endl;
	}
}