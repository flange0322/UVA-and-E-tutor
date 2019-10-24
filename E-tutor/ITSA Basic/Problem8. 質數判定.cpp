#include<iostream> 
using namespace std;
int main()
{
	int number;
	cin >> number;
	bool judge = 1;
	if (number > 1)
	{
		for (int i = 2; i * i <= number; i++)
		{
			if (number % i == 0)
			{
				judge = 0;
				cout << "No" << endl;
				break;
			}
		}
		if (judge)
			cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
}