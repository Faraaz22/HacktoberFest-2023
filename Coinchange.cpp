// coin change problem
#include<iostream>
using namespace std;

int count(int coins[], int n, int sum)
{
	if (sum == 0)
		return 1;
	if (sum < 0)
		return 0;
	if (n <= 0)
		return 0;
	return count(coins, n, sum - coins[n - 1])
		+ count(coins, n - 1, sum);
}

main()
{
	int i, j;
	int coins[] = { 1, 2, 3 };
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum;
    cout << "Enter the sum"<< endl;
    cin >> sum;
	cout << " " << count(coins, n, sum);
    return 0;
}
