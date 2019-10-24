#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<char, int>Pair;
bool cmp(Pair a, Pair b);
int main() {
	Pair word[26];
	char c = 'A';
	for (int i = 0; i < 26; i++) {
		word[i].first = c;
		word[i].second = 0;
		c++;
	}
	int cases;
	cin >> cases;
	for (int i = 0; i <= cases; i++) {
		string sentences;
		getline(cin, sentences);
		for (size_t i = 0; i < sentences.size(); i++) {
			if (90 >= sentences[i] && sentences[i] >= 65)
				word[sentences[i] - 65].second++;
			else if (122 >= sentences[i] && sentences[i] >= 97)
				word[sentences[i] - 97].second++;
		}
	}
	sort(word, word + 26, cmp);
	for (int i = 0; i < 26; i++) {
		if (word[i].second)
			cout << word[i].first << " " << word[i].second<<endl;
	}
}
bool cmp(Pair a, Pair b) {
	if (a.second > b.second)
		return true;
	if (a.second < b.second)
		return false;
	if (a.first < b.first)
		return true;
	return false;
}