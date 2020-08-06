#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	int n, m, a;
	cin >> n >> m >> a;

	int square = n * m;

	int tile = a * a;

	int ans = 1;

	while (tile * ans < square)
	{
		ans++;
	}

	cout << ans;

	//system("pause");
}