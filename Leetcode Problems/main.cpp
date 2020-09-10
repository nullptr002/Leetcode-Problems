#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool operator<(const vector<int>& a, const vector<int>& b)
{
	if (a[0] == b[0])
		return a[1] < b[1];

	return a[0] < b[0];
}

class Solution {
public:

	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
		if (intervals.size() <= 1)
			return 0;

		sort(intervals.begin(), intervals.end());
		vector<int> overlaps(intervals.size(), 0);

		int removed = 0;

		overlaps[0] = abs(intervals[1][0] - intervals[0][1]);
		overlaps[intervals.size() - 1] = abs(intervals[intervals.size() - 1][0] - intervals[intervals.size() - 2][1]);

		for (int i = 1; i < intervals.size() - 1; i++)
			overlaps[i] = abs(intervals[i][0] - intervals[i - 1][1]) + abs(intervals[i][1] - intervals[i + 1][0]);

		for (int i = 1; i < intervals.size() - 1; i++)
		{
			if (overlaps[i] >= overlaps[i - 1] + overlaps[i + 1] && overlaps[i] != 0)
			{
				removed++;

				overlaps.erase(overlaps.begin() + i);
				intervals.erase(intervals.begin() + i);
				i--;

				for (int j = 1; j < intervals.size() - 1; j++)
					overlaps[j] = abs(intervals[j][0] - intervals[j - 1][1]) + abs(intervals[j][1] - intervals[j + 1][0]);
			}
		}

		if (intervals.size() == 2)
			if (abs(intervals[0][1] - intervals[1][0]) > 0)
				removed++;

		for (int i = 0; i < intervals.size(); i++)
			cout << "[" << intervals[i][0] << "," << intervals[i][1] << "] - " << overlaps[i] << endl;

		return removed;
	}
};

int main()
{

	//vector<vector<int>> intervals = {
	//	{1,100},
	//	{11,22},
	//	{1,11},
	//	{2,12}
	//};

	//Solution s;
	//cout << s.eraseOverlapIntervals(intervals);

	return 0;
}