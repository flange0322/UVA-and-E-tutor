#include<iostream>
#include<string>
using namespace std;
int main() {
	string number;
	while (cin >> number && number != "0") {
		int odd = 0, even = 0;
		for (int i = 0; i < number.size(); i++) {
			if ((i+1) % 2 == 0)
				even += (number[i] - '0');
			else
				odd += (number[i] - '0');
		}
		cout << even << " " << odd << endl;
		if (abs(odd - even) % 11 == 0)
			cout << number << " is a multiple of 11."<<endl;
		else
			cout << number << " is not a multiple of 11."<<endl;
	}
}