#include<bits/stdc++.h>
using namespace std;
//序列长度是N，求最大上升子序列和 
//最长上升子序列LIS
//dp[i]代表以第i项为结尾的LIS的长度
//dp[i] = max(dp[i], dp[j] + a[i])记录和值    if j<i and a[j] < a[i]
int dp[1001], a[1001], n; 

int LIS_nn(){  //O(n^2)
	int ans = 0;
	for(int i = 1; i <= n; i++){
		dp[i] = a[i];
		for(int j = 1; j < i; j++){
			if(a[j] < a[i]){
				dp[i] = max(dp[i], dp[j] + a[i]);
			}
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}

int main(void){
	while(cin >> n){
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		cout << LIS_nn() << endl;
	}
	
	return 0;
}
