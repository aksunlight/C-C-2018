#include"bits/stdc++.h"
using namespace std;

//迷宫问题 
//递归形式 
//DFS一般情况下效率不如BFS 
//此迷宫问题直接使用DFS会超时 

const int maxn = 100 + 5;
char mpt[maxn][maxn];  //存元素
int vis[maxn][maxn];   //是否访问过，标记
int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
int ans;

//使用深度优先搜索求解 
void dfs(int x, int y, int step){
	if(step >= ans) return; //一个小剪枝，当步数超过答案就不用继续 
	if(mpt[x][y] == 'E'){   //找到终点 
		ans = min(ans, step);
		return; 
	} 
	for(int i = 0; i < 4; i++){
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if((mpt[nx][ny] == '*' || mpt[nx][ny] == 'E') && vis[nx][ny] == 0){
			vis[nx][ny] = 1;
			dfs(nx, ny, step+1);
			vis[nx][ny] = 0;
		}
	}
}

int main(void){
	int h, w;
	while(scanf("%d%d", &h, &w) != EOF){
		if(h == 0 && w == 0){
			break;
		}
		int sx = 0, sy = 0;
		memset(mpt, 0, sizeof(mpt));
		memset(vis, 0, sizeof(vis));
		for(int i = 1; i <= h; i++){
			scanf("%s", mpt[i] + 1);
	    }
	    for(int i = 1; i <= h; i++){
	    	for(int j = 1; j <= w; j++){
	    		if(mpt[i][j] == 'S'){
	    			sx = i;
	    			sy = j;    //记录起点坐标 
				}
			}
		}
		ans = 99999999;
		dfs(sx, sy, 0);
		printf("%d\n", ans); 
	}
	
	return 0;
}
