#include <iostream> 
#include <vector>
using namespace std;
int main()
{
	int row, column;
	while (cin >> row >> column)
	{
		vector<vector<int>> array;
		for (int i = 0; i < row; i++)
		{
			vector<int> tmp;
			for (int j = 0; j < column; j++)
			{
				int element;
				cin >> element;
				tmp.push_back(element);
			}
			array.push_back(tmp);
		}

		for (int i = 0; i < column; i++)
		{
			for (int j = 0; j < row; j++)
			{
				cout << array[j][i];
				if (j != row - 1)
					cout << " ";
			}
			cout << endl;
		}
	}
}