#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	string str;
	cin>>str;
	
	int count,ans=0;
	
	for(int i=0;i<int(str.length());i++){
		count = 1;
		while(str[i]==str[i+1]){
			count++;
			i++;
		}
		
		ans=max(ans,count);
	}
	cout << ans;
	return 0;
}
