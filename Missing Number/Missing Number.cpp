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
	long long int n, input, sum = 0;
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> input;
		sum += input;
	}
	cout << (n * (n + 1)) / 2 - sum << endl;
	return 0;
}
