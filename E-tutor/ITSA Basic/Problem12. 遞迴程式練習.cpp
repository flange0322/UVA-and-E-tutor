﻿#include <iostream> 
#include <vector>
using namespace std;
int f(int n);
int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
}
int f(int n)
{
	if (n == 0)
		return 1;
	else
		return f(n - 1) + f(n / 2);
}