Условие: https://codeforces.com/contest/263/problem/A

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
 
int main()
{
	vector<vector<int>> matrix(5, vector<int> (5));
 
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> matrix[i][j];
 
	int ans;
 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matrix[i][j] == 1)
			{
				ans = abs(i - 2) + abs(j - 2);
			}
		}
	}
 
	cout << ans;
 
	//system("pause");
}
