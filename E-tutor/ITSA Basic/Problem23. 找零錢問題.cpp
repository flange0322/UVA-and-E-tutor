#include <iostream>
using namespace std;
int main()
{
	int N, a1, a2, a3;
	char common;
	cin >> N >> common >> a1 >> common >> a2 >> common >> a3;
	int remainder = N - a1 * 15 - a2 * 20 - a3 * 30;
	if (remainder < 0)
		cout << "0" << endl;
	else
	{
		int fifty_coin = remainder / 50;
		int five_coin = remainder % 50 / 5;
		int one_coin = remainder % 50 % 5;
		cout << one_coin << "," << five_coin << "," << fifty_coin << endl;
	}
}