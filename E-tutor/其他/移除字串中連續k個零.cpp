#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct zero_Context{
	int pos;
	int end_pos;
};
int main()
{
	int k_Num;
	string str;
	zero_Context zC;
	vector<zero_Context> matrix;

	cin >> k_Num;
	cin >> str;

	bool push = false;

	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '0' && !push) {
			zC.pos = i;
			push = true;
		}
		else if (str[i] != '0'){
			zC.end_pos = i;
			matrix.push_back(zC);
			push = false;
		}
	}

	for (int i = matrix.size() - 1; i >= 0; i--) {
		if (matrix[i].end_pos - matrix[i].pos == k_Num)
			str.erase(matrix[i].pos, k_Num);
	}
				
	cout << str << endl;
}