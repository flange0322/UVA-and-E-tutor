#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<vector<int>> table;
	for (int i = 0; i < 3; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < 3; j++)
		{
			int num;
			cin >> num;
			tmp.push_back(num);
		}
		table.push_back(tmp);
	}

	vector<int> count(8,0);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			count[i] += table[i][j];
			count[i + 3] += table[j][i];
		}
	}
	count[6] = table[0][0] + table[1][1] + table[2][2];
	count[7] = table[0][2] + table[1][1] + table[2][0];

	if (*max_element(count.begin(), count.end()) == 3 || *min_element(count.begin(), count.end()) == 0)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}