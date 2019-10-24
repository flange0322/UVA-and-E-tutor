#include <iostream>
#include <string>
using namespace std;
struct Person
{
	string name;
	int smart_or_not,diligent_or_not;
};
int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		Person person;
		string ans;
		cin >> person.name >> person.smart_or_not >> person.diligent_or_not;
		if (person.smart_or_not == 1)
			ans = (person.diligent_or_not == 4) ? "General" : "Staff";
		else
			ans = (person.diligent_or_not == 4) ? "Soldier" : "execute by shooting";
		cout << person.name << " " << ans << endl;
	}
}