/*
Code by - Harshil Dale
*/

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, n) for (i = 0; i < n; ++i)

// Useful constants
#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

// ----------------------------------------
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	vector<int> v;
	int i = 1, j = 2;
	while (j <= n)
	{
		v.push_back(j);
		j += 2;
	}
	while (i <= n)
	{
		v.push_back(i);
		i += 2;
	}

	if (n <= 3 && n != 1)
	{
		cout << "NO SOLUTION";
	}
	else if (n == 1)
		cout << 1;

	else
	{
		rep(i, v.size())
		{
			cout << v[i] << " ";
		}
	}

	return 0;
}
