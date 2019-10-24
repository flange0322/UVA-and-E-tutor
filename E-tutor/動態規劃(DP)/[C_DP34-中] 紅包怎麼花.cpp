#include<iostream>  
#include<vector>  
#include<cmath>  
#include<algorithm>  
using namespace std;
struct Item{
	int price;
	int weight;
};
int main()
{
	int total;
	cin >> total;
	int num;
	cin >> num;
	vector<Item> items;
	for (int i = 0; i < num; i++){
		Item item;
		cin >> item.price >> item.weight;
		items.push_back(item);
	}

	vector<vector<int> > DPArray;
	for (int i = 0; i < num; i++){
		vector<int> tmp(total + 1, 0);
		DPArray.push_back(tmp);
	}

	for (int i = 1; i <= total; i++){
		if (i >= items[0].price)
			DPArray[0][i] = items[0].price * items[0].weight;
	}

	for (int i = 1; i < items.size(); i++){
		for (int j = 1; j <= total; j++){	
			if (j >= items[i].price){
				int before = DPArray[i - 1][j];
				int after = items[i].price * items[i].weight + DPArray[i - 1][j - items[i].price];
				DPArray[i][j] = max(before, after);
			}
			else
				DPArray[i][j] = DPArray[i - 1][j];
		}
	}
	cout << DPArray[num - 1][total] << endl;
}