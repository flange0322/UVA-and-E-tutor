#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

/*節點結構*/
struct node {
	int data;
	bool left_num, right_num;
	struct node* left;
	struct node* right;
};

/*前序*/
void preorder(node* p,vector<int>& tmp) {
	if (p) {
		tmp.push_back(p->data);
		preorder(p->left,tmp);
		preorder(p->right,tmp);
	}
}

int main()
{
	node* root = new node;
	bool isRoot = 1;
	string treeStatement,token;
	vector<int> box;
	vector<node*> treeSet;
	getline(cin, treeStatement);
	stringstream ss(treeStatement);

	/*字串切割，每三個輸入為一組成一個node，並存入一維陣列*/
	while (getline(ss, token, ' '))
	{
		stringstream ss2(token);
		int v;
		ss2 >> v;
		box.push_back(v);
		if (box.size() == 3)
		{
			node* point = new node;
			point->data = box[0];
			point->left_num = box[1];
			point->right_num = box[2];
			if (isRoot)
			{
				isRoot = 0;
				root = point;
			}
			treeSet.push_back(point);
			box.clear();
		}
	}

	/*處理一維陣列暫存的各節點並組成Tree*/
	int count = 0;
	for (int i = 0; i < treeSet.size(); i++)
	{
		bool right = false, left = false;
		count = count + treeSet[i]->left_num + treeSet[i]->right_num;
 		for (int j = (treeSet[i]->left_num + treeSet[i]->right_num > 1) ? count - 1 : count; j <= count; j++)
		{
			if (treeSet[i]->left_num)
			{
				treeSet[i]->left = treeSet[j];
				treeSet[i]->left_num = 0;
				left = 1;
				if(j != count)
					continue;
			}
			else if(!treeSet[i]->left_num && !left)
			{
				treeSet[i]->left = NULL;
			}

			if (treeSet[i]->right_num)
			{
				treeSet[i]->right = treeSet[j];
				treeSet[i]->right_num = 0;
				right = 1;
			}
			else if(!treeSet[i]->right_num && !right)
			{
				treeSet[i]->right = NULL;
			}
		}
	}

	/*宣告一陣列，丟入遞迴函式進行填值*/
	vector<int> ans;
	preorder(root,ans);
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i != ans.size() - 1)
			cout << " ";
	}
	cout << endl;
}