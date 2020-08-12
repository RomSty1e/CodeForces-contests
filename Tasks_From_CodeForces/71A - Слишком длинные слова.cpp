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
 
	int cnt = 0;
 
	vector<string> ans;
 
	while (cnt < n)
	{
		string str;
		cin >> str;
 
		if (str.length() > 10)
		{
			string str_tmp = "";
			str_tmp = str_tmp + str[0] + to_string(str.length() - 2) + str[str.length() - 1];
			ans.push_back(str_tmp);
		}
		else
		{
			ans.push_back(str);
		}
		cnt++;
	}
 
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
 
	//system("pause");
}