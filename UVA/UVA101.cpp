#include<iostream>
#include<string>
#include<vector>
using namespace std;
void moveback(vector<int>blocks[],int pos[],int x);
void move(vector<int>blocks[], int pos[],int a, int b);
int main() {
	int cases;
	while (cin >> cases) {
		vector<int> blocks[25];
		int position[25];
		for (int i = 0; i < cases; i++) {
			blocks[i].push_back(i);
			position[i] = i;
		}
		string order_1, order_2;
		int a, b;
		while (cin >> order_1 && order_1 != "quit") {
			cin >> a >> order_2 >> b;
			if (a == b || position[a] == position[b]) {
				continue;
			}

			if (order_1 == "move") {
				moveback(blocks, position, a);
				if (order_2 == "onto") {
					moveback(blocks, position, b);
				}
			}
			else {
				if (order_2 == "onto") {
					moveback(blocks, position, b);
				}
			}
			move(blocks, position, a, b);
		}
		for (int i = 0; i < cases; i++) {
			cout << i << ":";
			for (int j = 0; j < blocks[i].size(); j++) {
				cout << " " << blocks[i][j];
			}
			cout << endl;
		}
	}
}

void moveback(vector<int>blocks[], int pos[],int x) 
{
	int newSize, pos_x = pos[x];
	for (int i = 0; i < blocks[pos_x].size(); i++) {
		if (blocks[pos_x][i] == x) {
			newSize = i + 1;
			break;
		}
	}
	for (int i = newSize; i < blocks[pos_x].size(); i++) {
		int target = blocks[pos_x][i];
		pos[target] = target;
		blocks[target].push_back(target);
	}
	blocks[pos_x].resize(newSize);
}

void move(vector<int>blocks[], int pos[], int a, int b)
{
	int newSize,pos_a = pos[a],pos_b = pos[b];
	for (int i = 0; i < blocks[pos_a].size(); i++) {
		if (blocks[pos_a][i] == a) {
			newSize = i;
			break;
		}
	}
	for (int i = newSize; i < blocks[pos_a].size(); i++) {
		pos[blocks[pos_a][i]] = pos_b;
		blocks[pos_b].push_back(blocks[pos_a][i]);
	}
	blocks[pos_a].resize(newSize);
}