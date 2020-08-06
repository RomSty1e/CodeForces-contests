#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;


int main()
{
	int n, m, a;
	cin >> n >> m >> a;

	int h_num = 1;
	int w_num = 1;

	if (n % a == 0)
		h_num = n / a;
	else if (n > a)
	{
		h_num = h_num + n / a;
	}


	if (m % a == 0)
		w_num = m / a;
	else if (m > a)
	{
		w_num = w_num + m / a;
	}

	double result = (double)h_num * (double)w_num;

	cout << setprecision(25) << result;

	//system("pause");
}