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
	string str1;
	cin >> str1;
	string str2;
	cin >> str2;
 
	int ans = 0;
 
	for (int i = 0; i < str1.length(); i++)
	{
		if (tolower(str1[i]) < tolower(str2[i]))
		{
			ans = -1;
			break;
		}
		else if (tolower(str1[i]) > tolower(str2[i]))
		{
			ans = 1;
			break;
		}
	}
 
	cout << ans;
 
	//system("pause");
}