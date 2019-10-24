#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int kilo;
	cin >> kilo;
	cout << fixed << setprecision(1) << kilo * 1.6 << endl;
}
