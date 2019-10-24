#include<iostream> 
#include<string>
using namespace std;
const string table[12] = { "Winter","Winter","Spring","Spring","Spring","Summer","Summer","Summer","Autumn","Autumn","Autumn","Winter" };
int main()
{
	int month;
	cin >> month;
	cout << table[month - 1] << endl;
}