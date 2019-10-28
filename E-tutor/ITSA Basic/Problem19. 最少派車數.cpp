#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int time[24] = { 0 };
	int cases, start_time, end_time;
	cin >> cases;
	while (cases-- && cin >> start_time >> end_time)
	{
		for (int i = start_time - 1; i < end_time - 1; i++)
			time[i]++;
	}
	cout << *max_element(time, time + 24) << endl;
}