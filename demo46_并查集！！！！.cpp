#include"bits/stdc++.h"
using namespace std;
//并查集算法 1319, N城市M条路，每条路连接两座城市，求还要造几条路才能全通车 

const int maxn = 1005;
int fa[maxn];

//并查集模板
int find(int x){   //找祖先 
	if(x == fa[x]){
		return x;
	}
	fa[x] = find(fa[x]); //路径压缩 
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
			fa[i] = i; //父亲结点置为本身 
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
