#include"bits/stdc++.h"
using namespace std;
//01�������⣬��Ҫʹ��װ�µ�ǰ�������������ܴ� 
int dp[21][1010];
int w[21], c[21];

int main(void){
	int N, V;
	cin >> N >> V;  //������Ʒ����N���������V
	for(int i = 1; i <= N; i++){
		cin >> w[i] >> c[i];  //ÿ����Ʒ������wi�����ci 
	} 
	//����һ����̬�滮��˵������Ҫ�����ҵ�״̬ת�Ʒ���
	//��01���������У�һ����ƷҪô��װ��Ҫôװ����ô���ǿ��Եó������ʽ��
	//f[i, j]����ǰi����Ʒ�����������Ϊj�����װ����Ʒ������
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
