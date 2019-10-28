#include <iostream>
#include <string>
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	cin.ignore(1,'\n');
	while (cases--)
	{
		string str;
		getline(cin, str);
		int sum = 0;
		for (int i = 0; i < str.length(); i++)
		{
			if (127 > str[i] && str[i] > 31)
				sum += (int)str[i];
		}
		cout << sum << endl;
	}
}