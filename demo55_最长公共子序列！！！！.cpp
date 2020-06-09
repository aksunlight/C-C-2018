#include<bits/stdc++.h>
using namespace std;
//最长公共子序列（LCS）是一个在一个序列集合中 
//（通常为两个序列）用来查找所有序列中最长子序列的问题 
//dp[i，i]代表a字符串前i个字符组成的子串和b字符串前j个字符组成的字串的LCS 
//那么递推式为
//dp[i, j] = 0           if i = 0 or j = 0
//dp[i, j] = dp[i - 1, j - 1] + 1     if i, j > 0 and ai = bi
//dp[i, j] = max{dp[i, j - 1], dp[i - 1, j] }    if i, j > 0 and ai != bj

for(int i = 1; i <= lena; i++){
	for(int j = 1; j <= lenb; j++){
		if(a[i - 1] == b[j - 1]){
			dp[i][j] = dp[i - 1][j - 1] + 1;
		}
		else{
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		} 
	}
}
