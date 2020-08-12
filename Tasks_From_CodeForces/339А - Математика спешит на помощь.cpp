Условие: https://codeforces.com/contest/339/problem/A

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
	string s;
	cin >> s;
 
	sort(s.begin(), s.end());
 
	for (int i = 0; i < s.length(); i++)
		if (s[i] == '+')
		{
			s.erase(i, 1);
			i--;
		}
 
	for (int i = 0; i < s.length(); i++)
	{
		if (i != s.length() - 1) 
		{
			s.insert(i + 1, "+");
			i++;
		}
	}
 
	cout << s;
 
	//system("pause");
}
