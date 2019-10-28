#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Substr, CompleteStr;
	int counter = 0,i = 0;
	cin >> Substr >> CompleteStr;
	while (CompleteStr.find(Substr, i) != CompleteStr.npos)
	{
		counter++;
		i = CompleteStr.find(Substr, i) + 1;
	}
	cout << counter << endl;
}