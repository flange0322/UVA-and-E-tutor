#include <iostream>
#include <string>
using namespace std;
int main()
{
	string W, test;
	getline(cin,W);
	int cases;
	cin >> cases;
	cin.ignore(99,'\n');
	while (cases--){
		getline(cin, test);
		int pos = 0;
		if (W.length() > test.length())
			cout << "false" << endl;
		else{
			for (int i = 0; i < test.length(); i++){
				if (test.find(W[pos], i) != test.npos)
					i = test.find(W[pos], i), pos++;
				else
					break;
			}
			if (pos == W.length())
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
	}
}