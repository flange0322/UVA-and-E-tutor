#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct point
{
	int x,y,pos;
	bool isPoint = false;
};
bool cmp1(point p1, point p2){
	if (p1.x != p2.x)
		return p1.x > p2.x;
	return p1.y > p2.y;
}
bool cmp2(point p1, point p2){
	return p1.pos < p2.pos;
}
int main()
{
	vector<point> box;
	int cases;
	cin >> cases;
	while (cases--)
	{
		point m_point;
		cin >> m_point.x >> m_point.y;
		m_point.pos = box.size();
		box.push_back(m_point);
	}

	sort(box.begin(), box.end(), cmp1);

	int x_pos = 0,max_y = -1;
	for (int i = 1; i < box.size(); i++) 
	{
		if (box[x_pos].y >= max_y)
		{
			box[x_pos].isPoint = 1;
			max_y = box[x_pos].y;
		}
		x_pos = i;
	}
	if (box[x_pos].y >= max_y)
		box[x_pos].isPoint = 1;

	sort(box.begin(), box.end(), cmp2);

	for (int i = 0; i < box.size(); i++)
	{
		char ans = (box[i].isPoint) ? 'Y' : 'N';
		cout << ans;
		if (i != box.size() - 1)
			cout << " ";
	}
	cout << endl;
}