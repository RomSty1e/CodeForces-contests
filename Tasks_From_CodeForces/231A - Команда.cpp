Условие: https://codeforces.com/contest/231/problem/A

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
 
using namespace std;
 
 
int main()
{
	int n;
	cin >> n;
 
	int ans = 0;
 
	vector<vector<int>> val(n, vector<int>(3));
 
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> val[i][j];
			sum += val[i][j];
		}
 
		if (sum >= 2)
			ans++;
	}
 
	cout << ans;
 
	//system("pause");
}
