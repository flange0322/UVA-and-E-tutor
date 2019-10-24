#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
struct Schedule{
	int year = 0,month = 0,date = 0;
	char customer,mainer;
	bool eng[26] = {false};
};
int timeCount(int month, int date);
int main()
{
	vector<Schedule> box;
	Schedule sch, sch_tmp;
	int cases;
	cin >> cases;
	while (cases--){
		char word;
		cin >> sch_tmp.year >> word >> sch_tmp.month >> word >> sch_tmp.date >> sch_tmp.customer >> word >> sch_tmp.mainer;
		if (timeCount(sch.month,sch.date) != timeCount(sch_tmp.month,sch_tmp.date) && sch.year != 0){
			box.push_back(sch);
			memset(sch_tmp.eng, false, sizeof(sch_tmp.eng));
		}
		sch_tmp.eng[int(sch_tmp.customer - 65)] = sch_tmp.eng[int(sch_tmp.mainer - 65)] = true;
		sch = sch_tmp;
		if (cases == 0)
			box.push_back(sch_tmp);
	}
	for (int j = 0; j < 26; j++)
		for (int i = 0; i < box.size(); i++)
			if (i != box.size() - 1 && timeCount(box[i].month, box[i].date) + 1 == timeCount(box[i + 1].month, box[i + 1].date))
				if (box[i].eng[j] && box[i + 1].eng[j])
				{
					if (box[i].month / 10 == 0)
						cout << char(j + 65) << " 2016/0" << box[i].month << "/";
					else
						cout << char(j + 65) << " 2016/" << box[i].month << "/";
					if (box[i].date / 10 == 0)
						cout << "0" << box[i].date;
					else
						cout << box[i].date;

					if (box[i + 1].month / 10 == 0)
						cout << " 2016/0" << box[i+1].month << "/";
					else
						cout << " 2016/" << box[i+1].month << "/";
					if (box[i + 1].date / 10 == 0)
						cout << "0" << box[i + 1].date << endl;
					else
						cout << box[i + 1].date << endl;
				}
}
int timeCount(int month,int date){
	int month_Sum_day[13] = { 0,31,60,91,121,152,182,213,244,274,305,335,366 };
	return month_Sum_day[month - 1] + date;
}