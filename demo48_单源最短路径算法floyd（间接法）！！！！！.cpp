//��Դ���·���㷨��floyd 
#include"bits/stdc++.h"
using namespace std;

#define INF 0x3f3f3f3f; //ģ�������
const int maxn = 105;
int mpt[maxn][maxn];    //��ͼ����ʾi��j��Ȩֵ 
int n, m;   //n��ʾ������� m��ʾ���� 

void floyd(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				mpt[i][j] = min(mpt[i][k] + mpt[k][j], mpt[i][j]); //ֱ�����ӵıȽ� 
			}
		}
	}
} 

int main(void){
	while(scanf("%d%d", &n, &m) != EOF){
		if(n + m == 0){
			break; 
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i == j){
					mpt[i][j] = 0;
				} 
				else{
					mpt[i][j] = INF;
				}	
			}
		}
		for(int i = 1; i <= m; i++){
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			if(c < mpt[a][b]){
				mpt[a][b] = c;
				mpt[b][a] = c;
			}
		}
		floyd();
		printf("%d\n", mpt[1][n]); //1��n�Ļ��� 
	}
	return 0;
} 
