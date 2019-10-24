#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int cases;
	while (cin >> cases) {
		string country[2000];
		string name;
		for (int i = 0; i < cases; i++) {
			cin >> country[i];
			getline(cin, name);
		}
		sort(country, country + cases);
		for (int i = 0; i < cases; i++) {
			cout << country[i];
			int count = 0;
			int j;
			for (j = i; j < cases; j++) {
				if (country[j] != country[i])
					break;
				count++;
			}
			cout << " " << count << endl;
			i = j - 1;
		}

	}
}