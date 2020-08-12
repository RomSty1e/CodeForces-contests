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
	int t;
	cin >> t;
 
	vector<string> ans;
 
	int cnt = 0;
	while (cnt < t)
	{
		int n;
		cin >> n;
 
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
 
		sort(a.begin(), a.end());
		unique(a.begin(), a.end());
 
		int it = a.size();
		for (int i = 1; i < a.size(); i++)
			if (a[i] <= a[i - 1])
			{
				it = i;
				break;
			}
		a.erase(a.begin() + it, a.end());
 
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (abs(a[i] - a[i + 1]) <= 1)
			{
				a.erase(a.begin() + i, a.begin() + i + 1);
				i--;
			}
		}
 
		if (a.size() == 1)
			ans.push_back("YES");
		else
			ans.push_back("NO");
		
		cnt++;
 
		a.clear();
	}
 
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
 
 
 
	//system("pause");
}