#include"bits/stdc++.h"
using namespace std;

//�Թ����� 
//�ݹ���ʽ 
//DFSһ�������Ч�ʲ���BFS 
//���Թ�����ֱ��ʹ��DFS�ᳬʱ 

const int maxn = 100 + 5;
char mpt[maxn][maxn];  //��Ԫ��
int vis[maxn][maxn];   //�Ƿ���ʹ������
int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
int ans;

//ʹ���������������� 
void dfs(int x, int y, int step){
	if(step >= ans) return; //һ��С��֦�������������𰸾Ͳ��ü��� 
	if(mpt[x][y] == 'E'){   //�ҵ��յ� 
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
	    			sy = j;    //��¼������� 
				}
			}
		}
		ans = 99999999;
		dfs(sx, sy, 0);
		printf("%d\n", ans); 
	}
	
	return 0;
}
