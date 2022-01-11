#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for (i = 0; i < n; ++i)

int main(){
	long long n;
	cin >> n;
	vector<int> v;
	int i=1,j=2;
	while(j<=n){
		v.push_back(j);
		j+=2;
	}
	while(i<=n){
		v.push_back(i);
		i+=2;
	}
	
	if(n<=3 && n!=1){
		cout<<"NO SOLUTION";
	}
	else if(n==1)
	cout<<1;
	
	else{
		rep(i,v.size()){
			cout<<v[i]<<" ";
		}
	}

return 0;
}
