#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int Stirling(int n);
int main() {
	vector<double> value(100001);
	int cases;
	cin >> cases;
	int max_number = 0;
	while (cases--) {
		int number;
		cin >> number;
		if (number > 100000)
			cout << Stirling(number) << endl;
		else {
			if (number > max_number) {
				for (int i = max_number + 1; i <= number; i++)
					value[i] = value[i - 1] + log10(i);
			}
			max_number = number;
			cout << ((int)value[number]) + 1 << endl;
		}
	}
}
int Stirling(int n) {
	double PI = 3.141592653589793239, e = 2.7182818284590452354;
	return (int)(log10(sqrt(2 * PI*n)) + n * log10(n / e)) + 1;
}
