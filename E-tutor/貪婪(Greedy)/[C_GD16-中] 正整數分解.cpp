#include <iostream>
using namespace std;
int recursive_one(int n, int m);
int main()
{
	int	number;
	while(cin >> number)
		cout << recursive_one(number, number) << endl;
}
int recursive_one(int n, int m)
{
	if (m == 1)
		return 1;
	if (n < m)
		return recursive_one(n, n);
	else if (n == m)
		return recursive_one(n, n - 1) + 1;
	else
		return recursive_one(n, m - 1) + recursive_one(n - m, m);
}