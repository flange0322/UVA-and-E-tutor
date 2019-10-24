#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int relatives;
		cin >> relatives;
		vector<int> street;
		for (int i = 0; i < relatives; i++) {
			int street_num;
			cin >> street_num;
			street.push_back(street_num);
		}
		sort(street.begin(), street.end());
		int mid = street[relatives / 2];
		int sum = 0;
		for (int i = 0; i < street.size(); i++) {
			sum += abs(street[i] - mid);
		}
		cout << sum << endl;
	}
}