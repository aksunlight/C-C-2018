#include"bits/stdc++.h"
using namespace std;
//01背包问题，即要使能装下的前提下重量尽可能大 
int dp[21][1010];
int w[21], c[21];

int main(void){
	int N, V;
	cin >> N >> V;  //输入物品数量N，背包体积V
	for(int i = 1; i <= N; i++){
		cin >> w[i] >> c[i];  //每个物品的重量wi和体积ci 
	} 
	//对于一个动态规划来说，最重要的是找到状态转移方程
	//在01背包问题中，一个物品要么不装，要么装，那么我们可以得出下面的式子
	//f[i, j]代表前i个物品背包容量最大为j最多能装的物品总重量
	//f[i, j] = max(f[i-1][j-Ci]+Wi, f[i-1][j]) 
	for(int i = 1; i <= N; i++){
		for(int j = 0; j <= V; j++){
			if(j >= c[i]){
				dp[i][j] = max(dp[i - 1][j - c[i]] + w[i], dp[i - 1][j]);
			}
			else{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	
	return 0;
} 
