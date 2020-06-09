#include"bits/stdc++.h"
using namespace std;
//01背包问题，即要使能装下的前提下重量尽可能大 
int dp[21][1010];
int w[21], c[21];

int main(void){
	int dp[1005][1005] = {0};
	int w[1005];
	int s, n;
	while(scanf("%d%d", &s, &n) != EOF){ //s为背包总承重，n为货物个数
	    for(int i = 1; i <= n; i++){
	    	scanf("%d", &w[i]);
		} 
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1; //前0件物品中能拼凑出0重量的方案，所以为1 
	    for(int i = 1; i <= n; i++){
	    	for(int j = s; j >= 0; j--){
	    		if(dp[i - 1][j] == 1){
	    			dp[i][j] = 1;
				}
				if(j - w[i] >= 0 && dp[i - 1][j - w[i]] == 1){
					dp[i][j] = 1;
				}
			}
		} 
		if(dp[n][s] == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	} 
	
	return 0;
} 
