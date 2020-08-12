Условие: https://codeforces.com/contest/158/problem/A

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
 
using namespace std;
 
 
int main()
{
	int n, k;
	cin >> n >> k;
 
	vector<int> values(n);
 
	for (int i = 0; i < n; i++)
		cin >> values[i];
 
	int target = values[k - 1];
	int ans = 0;
 
	for (int i = 0; i < n; i++)
	{
		if (values[i] >= target && values[i] > 0)
			ans++;
		else
			break;
	}
 
	cout << ans;
 
	//system("pause");
}
