#include<iostream>
using namespace std;
int Collatz(int number);
int main()
{
	int i, j;
	while (cin >> i >> j) {
		int maxlength = 0;
		bool i_j = false;
		if (i > j) {
			int temp = i;
			i = j;
			j = temp;
			i_j = true;
		}
		for (int k = i; k <= j; k++) {
			int nowlength = Collatz(k);
			if (maxlength < nowlength)
				maxlength = nowlength;
		}
		if (i_j)
			printf("%d %d %d\n", j, i, maxlength);
		else
			printf("%d %d %d\n", i, j, maxlength);
	}
}
int Collatz(int number) {
	int length = 0;
	while (number != 1) {
		if (number % 2 != 0) {
			number = number * 3 + 1;
		}
		else {
			number = number / 2;
		}
		length++;
	}
	return length + 1;
}