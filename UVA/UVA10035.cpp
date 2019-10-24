#include<iostream>
using namespace std;
int main() {
	int num_1, num_2;
	while (cin >> num_1 >> num_2 && (num_1 != 0 && num_2 != 0)) {
		int carry = 0;
		int count = 0;
		while (num_1 != 0 || num_2 != 0) {
			carry = num_1 % 10 + num_2 % 10 + carry;
			carry /= 10;
			num_1 /= 10;
			num_2 /= 10;
			if (carry > 0)
				count++;
		}
		if (count == 1)
			cout << count << " carry operation." << endl;
		else if (count > 1)
			cout << count << " carry operations." << endl;
		else 
			cout << "No carry operation." << endl;
	}
}