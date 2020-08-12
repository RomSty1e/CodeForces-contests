Условие: https://codeforces.com/contest/282/problem/A

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
	int n;
	cin >> n;
 
	vector<string> sen(n);
 
	for (int i = 0; i < n; i++)
		cin >> sen[i];
 
	int ans = 0;
 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (sen[i][j] == '+')
			{
				ans = ans + 1;
				j = sen[i].length();
			}
			else if (sen[i][j] == '-')
			{
				ans = ans - 1;
				j = sen[i].length();
			}
		}
	}
 
	cout << ans;
	
 
	//system("pause");
}
