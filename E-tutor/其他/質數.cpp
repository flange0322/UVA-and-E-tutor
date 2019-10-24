#include <iostream>   
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int num;
		cin >> num;

		bool judge = true;
		for (int i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				judge = false;
				break;
			}
		}
		if (judge)
			cout << num << endl;
	}
}