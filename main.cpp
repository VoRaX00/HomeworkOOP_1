#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{
	int cntShot = 5;
	int sum = 0;
	srand(time(0));
	while (cntShot > 0)
	{
		int x, y;
		cin >> x >> y;
		pair<int, int> i = {x + rand() % 11 - 5, y + rand() % 11 - 5};
		int r = pow(i.first, 2) + pow(i.second, 2);
		sum += (((int)(5 - sqrt(r)) >> 31) & 1) == 0 ? 5 - (int)sqrt(r) : 0;
		cntShot--;
	}
	if (sum < 10)
	{
		cout << "loser\n";
		return 0;
	}
	cout << "Good\n";
}
