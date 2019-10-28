#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string str;
	map<char, int> mapping;
	getline(cin, str);
	int n = 1;
	for (int i = 0; i < str.length(); i++)
	{
		if (122 >= tolower(str[i]) && tolower(str[i]) >= 97)
			mapping[tolower(str[i])]++;
		else if(str[i] == ' ')
			n++;
	}
	cout << n << endl;
	for (map<char, int>::iterator iter = mapping.begin(); iter != mapping.end();iter++)
		cout << iter->first << " : " << iter->second << endl;
}