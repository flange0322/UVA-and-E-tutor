#include <iostream>
#include <iomanip>
#include <vector>
#define inf 1000
using namespace std;
int main()
{
	int counts = 1;
	while (1)
	{
		vector<vector<int>> graph(21, vector<int>(21, inf));

		int count;
		for (int i = 1; i < 20; i++)
		{
			cin >> count;
			while (count--)
			{
				int node;
				cin >> node;
				graph[i][node] = graph[node][i] = 1;
			}
		}

		int cases;
		cin >> cases;
		cout << "Test Set #" << counts << endl;
		while (cases--)
		{
			vector<int> distance(21, inf);
			vector<bool> visit(21, false);
			int start_Pos, end_Pos;

			cin >> start_Pos >> end_Pos;

			distance[start_Pos] = 0;

			for (int i = 1; i < 20; i++)
			{
				int a = start_Pos, min = inf;
				for (int j = 1; j < 21; j++)
				{
					if (!visit[j] && distance[j] < min)
					{
						a = j;	
						min = distance[j];
					}
				}

				visit[a] = true;

				for (int k = 1; k < 21; k++)
				{
					if (!visit[k] && distance[a] + graph[k][a] < distance[k])
						distance[k] = distance[a] + graph[k][a];
				}
			}

			if (distance[end_Pos] == inf)
				cout << setw(2) << start_Pos << " to " << setw(2) << end_Pos << ": " << 0 << endl;
			else
				cout << setw(2) << start_Pos << " to " << setw(2) << end_Pos << ": " << distance[end_Pos] << endl;
		}
		cout << endl;
		counts++;
	}
}