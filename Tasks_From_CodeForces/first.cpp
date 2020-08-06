#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int nok(int a, int b)
{
    int max = b;
    for (int i = max; ; i++) 
	{

        if ((i % a == 0) && (i % b == 0)) 
		{
            return i;
        }
    }
}


int main()
{
	cout << nok(2, 4) << endl;

	/*
	int t;
	cin >> t;

	vector<pair<int, int>> lr(t);

	vector<pair<int, int>> ans(t);

	for (int i = 0; i < t; i++)
		cin >> lr[i].first >> lr[i].second;

	for (int i = 0; i < t; i++)
	{
		bool srch = false;
		
		vector<int> values(lr[i].second - lr[i].first + 1);

		int pv = lr[i].first;

		for (int o = 0; o < values.size(); o++)
		{
			values[o] = pv;
			pv++;
		}

		for (int j = 0; j < values.size(); j++)
		{
			for (int k = j + 1; k < values.size(); k++)
			{
				if (lr[i].first <= nok(values[j], values[k]) && nok(values[j], values[k]) <= lr[i].second)
				{
					ans[i].first = values[j];
					ans[i].second = values[k];
					k = values.size();
					j = values.size();
					srch = true;
				}		
			}
		}

		if (!srch)
		{
			ans[i].first = -1;
			ans[i].second = -1;
		}

	}

	for (int i = 0; i < t; i++)
		cout << ans[i].first << " " << ans[i].second << endl;
		

		*/
	//system("pause");
}