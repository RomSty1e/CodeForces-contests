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
	int m, n;

	cin >> m >> n;

	int max_len = max(m, n);
	int min_len = min(m, n);

	int ans = 0;

	while (min_len >= 2)
	{
		ans += max_len;
		min_len -= 2;
	}

	if (min_len == 1)
		ans += max_len / 2;

	cout << ans;

	//system("pause");
}