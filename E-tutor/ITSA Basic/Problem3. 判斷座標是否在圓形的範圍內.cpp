#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	
	int r = 100;

	int r_test = sqrt(pow(x, 2.0) + pow(y, 2.0));

	if (r < r_test)
		cout << "outside" << endl;
	else
		cout << "inside" << endl;
}
