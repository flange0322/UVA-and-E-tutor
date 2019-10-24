#include <iostream>
#include <string>
using namespace std;
int main()
{
	string MatrixNumber[5][10] = { {"*****","    *","*****","*****","*   *","*****","*****","*****","*****","*****"},
	                               {"*   *","    *","    *","    *","*   *","*    ","*    ","    *","*   *","*   *"},
	                               {"*   *","    *","*****","*****","*****","*****","*****","    *","*****","*****"},
	                               {"*   *","    *","*    ","    *","    *","    *","*   *","    *","*   *","    *"},
	                               {"*****","    *","*****","*****","    *","*****","*****","    *","*****","    *"} };
	string number;
	cin >> number;
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < number.size(); j++)
		{
			cout << MatrixNumber[i][number[j] - '0'];
			if (j != number.size() - 1)
				cout << " ";
		}
		cout << endl;
	}
}
