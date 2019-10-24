#include <iostream>
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int score;
		cin >> score;
		if (score >= 95)
			cout << "Excellent" << endl;
		else if (score >= 85)
			cout << "Very Good" << endl;
		else if (score >= 61)
			cout << "Good" << endl;
		else
			cout << "Careless" << endl;
	}
}