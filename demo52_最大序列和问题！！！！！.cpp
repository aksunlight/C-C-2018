#include"bits/stdc++.h"
using namespace std;
//最大序数和
//一个整数序列S，其中有N个数
//定义其中一个非空连续子序列T中所有数的和为T的“序列和”
//对于S的所有非空连续子序列T，求最大的序列和 
int dp[1000010];
int a[1000010];
long long maxx; 
int main(void){
    int n;
    while(cin >> n){
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
		}
		dp[0] = a[0];
		maxx = 0; //最小的情况就是不选那么答案就是0
		for(int i = 1; i < n; i++){
			dp[i] = max(dp[i - 1] + a[i], a[i]);
			if(maxx < dp[i]){
				maxx = dp[i];
			}
		} 
		cout << maxx << endl;
	}
     	
	return 0;                                                                                                                                                                            
}
