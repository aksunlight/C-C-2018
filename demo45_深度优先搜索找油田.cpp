#include"bits/stdc++.h"
using namespace std;
//开采石油，输出每种情况下石油块的个数 
int maxn = 100 + 5;
char mpt[105][105];
int vis[105][105];
int dir[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1}; 

void dfs(int x, int y){
	vis[x][y] = 1;
	for(int i = 0; i < 8; i++){
	    int nx = x + dir[i][0];
	 	int ny = y + dir[i][1];
	 	if(mpt[nx][ny] == '@' && vis[nx][ny] == 0){
	 		dfs(nx, ny);
		 }
	 }
}

int main(void){
	int h, w;
	while(scanf("%d%d", &h, &w) != EOF){
		memset(mpt, 0, sizeof(mpt));
		memset(vis, 0, sizeof(vis));
		if(h == 0 && w == 0){
			break;
		}
		for(int i = 1; i <= h; i++){
			scanf("%s", mpt[i] + 1);
		}
		int ans = 0;
		for(int i = 1; i <= h; i++){
			for(int j = 1; j <= w; j++){
				if(mpt[i][j] == '@' && vis[i][j] == 0){
					ans++;
					dfs(i, j);
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
