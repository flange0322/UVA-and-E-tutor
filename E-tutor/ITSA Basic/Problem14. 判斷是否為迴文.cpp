#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	int mid,count = 0;
	bool isPalindrome = 1;
	cin >> word;
	if (word.length() & 1)
	{
		mid = word.length() / 2 + 1;
		for (int i = mid; i < word.length(); i++)
		{
			if (word[i] != word[mid - 2 - count])
			{
				isPalindrome = 0;
				break;
			}
			count++;
		}
	}
	else
	{
		mid = word.length() / 2;
		for (int i = mid; i < word.length(); i++)
		{
			if (word[i] != word[mid - 1 - count])
			{
				isPalindrome = 0;
				break;
			}
			count++;
		}
	}
	if (isPalindrome)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}