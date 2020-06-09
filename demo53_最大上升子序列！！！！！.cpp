#include"bits/stdc++.h"
using namespace std;
//最长上升子序列LIS
//dp[i]代表以第i项为结尾的LIS的长度
//dp[i] = max(dp[i], dp[j] + 1)记录个数   if j<i and a[j]<z[i]
int LIS_nn(){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		dp[i] = 1;  //纪录个数 
		for(int j = 1; j < i; j++){
			if(a[j] < a[i]){ //满足上升的条件 
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}

//优化 
int LIS nlgn(){
	int len = 1;
	dp[1] = a[1];
	for(int i = 2; i <= n; i++){
		if(a[i] > dp[len]){
			dp[++len] = a[i];
		}
		else{
			int pos = lower_bound(dp, dp + len, a[i]) - dp;
			dp[pos] = a[i];
		}
	}
	return len;
}
