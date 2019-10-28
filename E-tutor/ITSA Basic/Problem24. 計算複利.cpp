#include <iostream>
using namespace std;
int main()
{
	long double sum = 0.0, r;
	int n, p;
	cin >> r >> n >> p;
	for (int i = 0; i < n; i++)
	{
		sum += p;
		sum *= (1 + r);
	}
	cout << (long long)sum << endl;
}