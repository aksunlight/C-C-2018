#include"bits/stdc++.h"
using namespace std;
//���鼯�㷨 1319, N����M��·��ÿ��·�����������У���Ҫ�켸��·����ȫͨ�� 

const int maxn = 1005;
int fa[maxn];

//���鼯ģ��
int find(int x){   //������ 
	if(x == fa[x]){
		return x;
	}
	fa[x] = find(fa[x]); //·��ѹ�� 
	return fa[x];
} 

int main(void){
	int N, M;
	while(scanf("%d", &N) != EOF){
		if(N == 0){
			break;
		}
		scanf("%d", &M);
		for(int i = 1; i <= N; i++){
			fa[i] = i; //���׽����Ϊ���� 
		} 
		int sum = 0;
		for(int i = 0; i < M; i++){
			int x, y;
			scanf("%d%d", &x, &y);
			int fx = find(x);
			int fy = find(y);
			if(fx != fy){
				fa[fx] = fa[y];
				sum++;
			}
		}
		printf("%d\n", N - sum -1);
	}

	return 0;
}
