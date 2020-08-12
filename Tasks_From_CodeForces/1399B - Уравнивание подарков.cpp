#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
const int inf = 2e9;
 
int main()
{
	int t;
	cin >> t;
 
	vector<double> ans;
 
	int count = 0;
	while (count < t)
	{
		int n;
		cin >> n;
 
		vector<double> a(n);
		double min_a = inf;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			min_a = min(a[i], min_a);
		}
 
		vector<double> b(n);
		double min_b = inf;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			min_b = min(b[i], min_b);
		}
 
		double cnt = 0;
 
		for (int i = 0; i < n; i++)
		{
			if (a[i] > min_a && b[i] > min_b)
			{
				double min_diff = min(a[i] - min_a, b[i] - min_b);
				cnt += min_diff;
				a[i] -= min_diff;
				b[i] -= min_diff;
				i--;
			}
			else if (a[i] > min_a)
			{
				cnt += (a[i] - min_a);
				a[i] = min_a;
			}
			else if (b[i] > min_b)
			{
				cnt += (b[i] - min_b);
				b[i] = min_b;
			}
		}
		
		count++;
 
		ans.push_back(cnt);
		a.clear();
		b.clear();
	}
 
	for (int i = 0; i < ans.size(); i++)
		cout << setprecision(20) << ans[i] << endl;
 
	//system("pause");
}