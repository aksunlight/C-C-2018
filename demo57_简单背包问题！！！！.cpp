#include"bits/stdc++.h"
using namespace std;
//01�������⣬��Ҫʹ��װ�µ�ǰ�������������ܴ� 
int dp[21][1010];
int w[21], c[21];

int main(void){
	int dp[1005][1005] = {0};
	int w[1005];
	int s, n;
	while(scanf("%d%d", &s, &n) != EOF){ //sΪ�����ܳ��أ�nΪ�������
	    for(int i = 1; i <= n; i++){
	    	scanf("%d", &w[i]);
		} 
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1; //ǰ0����Ʒ����ƴ�ճ�0�����ķ���������Ϊ1 
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
