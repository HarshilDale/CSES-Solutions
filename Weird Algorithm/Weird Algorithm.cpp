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
	while (true)
	{
		cout << n << " ";
		if (n == 1)
			break;
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
	}
	cout << "\n";
}