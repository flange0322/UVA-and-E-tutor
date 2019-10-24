#include<iostream> 
using namespace std;
int main()
{
	int number,sum = 0;
	cin >> number;
	for (int i = 3; i <= number; i = i + 3)
		sum += i;
	cout << sum << endl;
}