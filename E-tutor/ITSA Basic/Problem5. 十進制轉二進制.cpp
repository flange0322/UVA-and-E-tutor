#include<iostream>  
using namespace std;
int main()
{
	int number, binary[8];
	cin >> number;
	if (number < 0)
		number += 256; //將負數的有號數表示法改用無號數的方式去看，-127的八位元有號數也同等於129的八位元無號數，以此類推。
	for (int i = 0; i < 8; number >>= 1,i++) //每進行一次迴圈，將number內的數進行右移一位(除以2)。
		binary[7 - i] = (number & 1) ? 1 : 0; //判斷number的最後一個位元與1進行AND是否為True。
	for (int i = 0; i < 8; i++)
		cout << binary[i];
	cout << endl;
}