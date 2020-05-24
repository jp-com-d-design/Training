#include <cstdio>
#include <unordered_map>

namespace Pudding {
	using namespace std;
	static const unordered_map<int, int> Month_days = {{1,31}, {2,29}, {3,31}, {4,30}, {5,31}, {6,30},{7,31}, {8,31},
	{9,30}, {10,31}, {11,30}, {12,31}
	};
	
	class Calendar {
	public:
		static void print(int year, int month) {
			printf("\n%4d年%2d月", year, month);
			printf("\n日 月 火 水 木 金 土\n");
			printf("--------------------\n");
			int index = get_day_week(year, month, 0);
			
			int position = index % 7;
			//fill_with_blank_to(position);
			for (int i = 0; i < get_days(year, month); i++) {
				//line_break_if_sunday(position);
				printf("%3d", i + 1);
				position++;
			}
			printf("\n");
		}

/*
閏年の計算--leapyear
*/
		static bool leapyear(int year) {
			return (year % 400 == 0) ? true
				: (year % 100 == 0) ? false
				: (year % 4 == 0) ? true
				: false;
		}

/*
月別の日数の計算--get_day
*/
		static int get_days(int year, int month) {
			int days = Month_days.find(month)->second;
		
			if (leapyear(year) && month == 2) {
				days = 29;
			}
			return days;
		}

/*
ツェラーの公式から曜日を求める --get_day_of_wee
*/
		static int get_day_week(int year, int month, int day) {
			if (month < 3) {
				year--;
				month += 12;
			}
			return (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7 + 1;
		}
	};

}
auto main() -> int {
	for (int i = 1; i <= 12; i++) {
		Pudding::Calendar::print(2020, i);
	}
}