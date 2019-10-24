#include <iostream>
using namespace std;
int main()
{
	int hour_in, min_in, hour_out, min_out;
	cin >> hour_in >> min_in >> hour_out >> min_out;

	int weight_in = hour_in * 60 + min_in;
	int weight_out = hour_out * 60 + min_out;
	int weight = weight_out - weight_in;

	if (weight < 120)
		cout << weight / 30 * 30 << endl;
	else if (weight >= 120 && weight < 240)
		cout << 120 + (weight - 120) / 30 * 40 << endl;
	else
		cout << 280 + (weight - 240) / 30 * 60 << endl;
}
