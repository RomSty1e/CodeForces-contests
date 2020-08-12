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
	
	int count = 1;
	bool warning = false;
 
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i - 1])
		{
			count++;
		}
		else
			count = 1;
 
		if (count == 7)
		{
			warning = true;
			break;
		}
	}
 
	if (warning)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
 
	//system("pause");
}