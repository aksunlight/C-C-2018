//��³˹�����㷨,�ӱ߷� 
#include"bits/stdc++.h"
using namespace std;
//���ͨ���⣬N��·��M����ׯ 

const int maxn = 105;
int fa[maxn];  //�������� 
struct node{
	int u, v, w;
}edge[maxn * maxn]; 

int cmp(node A, node B){
	return A.w < B.w; 
}

int find(int x){  //������ 
	if(x == fa[x]){
		return x;
	}
	fa[x] = find(fa[x]);
	return fa[x];
}

int main(void){
	int N, M;   //N��·��M����ׯ 
	while(scanf("%d%d", &N, &M) != EOF){
		if(N == 0){
			break;
		}
		for(int i = 0; i < N; i++){
			scanf("%d%d%d", &edge[i].u, &edge[i].v, &edge[i].w);
		}
		for(int i = 1; i <= M; i++){
			fa[i] = i;
		}
		sort(edge, edge + N, cmp); //ÿ��·ȨֵС����ǰ 
        int sum = 0;
		int total = 0;
		for(int i = 0; i < N; i++){
			int fx = find(edge[i].u);
			int fy = find(edge[i].v);
			if(fx != fy){
				fa[fx] = fy;
				sum += edge[i].w;
				total++;
			}
		}
		if(total < M - 1){
			printf("?\n");
		}	
		else{
			printf("%d\n", sum); //�ܵĻ��� 
		}
	} 
	
	return 0;
} 
