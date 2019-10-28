#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	vector<double> matrix;
	for (int i = 0; i < 10; i++)
	{
		double num;
		cin >> num;
		matrix.push_back(num);
	}
	cout << "maximum:" << fixed << setprecision(2) << *max_element(matrix.begin(), matrix.end()) << endl;
	cout << "minimum:" << fixed << setprecision(2) << *min_element(matrix.begin(), matrix.end()) << endl;
}