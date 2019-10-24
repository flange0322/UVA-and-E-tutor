#include <iostream>
using namespace std;
int main(){
	int cases,number;
	cin >> cases;
	while (cases-- && cin >> number){
		int one = 1,count = 1;
		while ((one %= number) != 0) {
			count++;
			one = one * 10 + 1;
		}
		cout << count << endl;
	}
}