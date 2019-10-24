#include<iostream> 
using namespace std;
int main()
{
	int cases,a,b,a1,b1;
	cin >> cases;
	while (cases--)
	{
		char c;
		cin >> c >> a >> b >> a1 >> b1;
		switch (c)
		{
			case '+':	
				cout << a + a1 << " " << b + b1 << endl;
				break;
			case '-':
				cout << a - a1 << " " << b - b1 << endl;
				break;
			default:
				cout << a*a1 - b*b1 << " " << b*a1 + a*b1 << endl;
				break;
		}
	}
}