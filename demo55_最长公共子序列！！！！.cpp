#include<bits/stdc++.h>
using namespace std;
//����������У�LCS����һ����һ�����м����� 
//��ͨ��Ϊ�������У�������������������������е����� 
//dp[i��i]����a�ַ���ǰi���ַ���ɵ��Ӵ���b�ַ���ǰj���ַ���ɵ��ִ���LCS 
//��ô����ʽΪ
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
