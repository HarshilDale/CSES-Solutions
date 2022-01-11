/*
Code by - Harshil Dale
*/

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)

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
	string str;
	cin >> str;

	int count, ans = 0;

	for (int i = 0; i < int(str.length()); i++)
	{
		count = 1;
		while (str[i] == str[i + 1])
		{
			count++;
			i++;
		}

		ans = max(ans, count);
	}
	cout << ans;
	return 0;
}
