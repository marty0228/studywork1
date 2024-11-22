#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
    
	int n;
	cin>>n;
	vector<int> dp(n+1);

	dp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+1;
		if(!(i%3))
			dp[i]=min(dp[i],dp[i/3]+1);
		if(!(i%3))
			dp[i]=min(dp[i],dp[i/2]+1);
	}
	cout<<dp[n];
}




