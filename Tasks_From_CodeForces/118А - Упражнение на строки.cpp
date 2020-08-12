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
	string str;
	cin >> str;
 
	vector<char> vowel_letters = {'A', 'O', 'Y', 'E', 'U', 'I'};
 
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
 
		for (int j = 0; j < vowel_letters.size(); j++)
		{
			if (str[i] == tolower(vowel_letters[j]))
			{
				str.erase(i, 1);
				i--;
			}
		}
	}
 
 
	
 
	for (int i = 0; i < str.length(); i++)
	{
		str.insert(i, ".");
		i++;
	}
 
	cout << str << endl;
 
	//system("pause");
}