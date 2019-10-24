#include<iostream> 
using namespace std;
int gcd(int m, int n);
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << gcd(num1, num2) << endl;
}
int gcd(int m, int n)
{
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}