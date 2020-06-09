#include"bits/stdc++.h"
using namespace std;
//�����������LIS
//dp[i]�����Ե�i��Ϊ��β��LIS�ĳ���
//dp[i] = max(dp[i], dp[j] + 1)��¼����   if j<i and a[j]<z[i]
int LIS_nn(){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		dp[i] = 1;  //��¼���� 
		for(int j = 1; j < i; j++){
			if(a[j] < a[i]){ //�������������� 
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}

//�Ż� 
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
