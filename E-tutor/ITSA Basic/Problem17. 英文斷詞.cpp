#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<string> box;
	string sentence, token;
	getline(cin, sentence);
	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
	stringstream ss(sentence);
	while (ss >> token)
	{
		vector<string>::iterator it = find(box.begin(), box.end(), token);
		if (it == box.end())
			box.push_back(token);
	}
	for (int i = 0; i < box.size(); i++)
	{
		cout << box[i];
		if (i != box.size() - 1)
			cout << " ";
	}
	cout << endl;
}