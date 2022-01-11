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
	long long n;
	cin >> n;
	vector<int> v;
	long long in;
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		v.push_back(in);
	}
	for (int i = 1; i < n; i++)
	{
		if (v[i] < v[i - 1])
		{
			ans = ans + (v[i - 1] - v[i]);
			v[i] = v[i] + (v[i - 1] - v[i]);
		}
	}
	cout << ans;
	return 0;
}
