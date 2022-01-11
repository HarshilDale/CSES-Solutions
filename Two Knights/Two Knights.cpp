/*
Code by - Harshil Dale
*/

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

// Useful constants
#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

// ----------------------------------------
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

#include<bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE

// For getting input from input.txt file
    freopen("input.txt", "r", stdin);

// Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
//-----------------------------------solution comes here---------------------------------

long long t,i,total_combinations,attacking_knights;
cin>>t;

for(i=1;i<=t;i++){
	total_combinations = ((i*i)*((i*i)-1))/2;
	attacking_knights = 4 * (i-1) * (i-2);
	cout<<total_combinations -attacking_knights <<endl;
}
		
return 0;		
}