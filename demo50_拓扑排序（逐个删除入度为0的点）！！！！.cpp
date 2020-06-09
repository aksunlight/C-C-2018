//拓扑排序
//确定比赛排名，N支队伍， M个比赛结果 
#include"bits/stdc++.h" 
using namespace std;

const int maxn = 505;
bool mpt[maxn][maxn];  //存图 
int lev[maxn];         //入度 
vector<int> v[maxn];
priority_queue<int, vector<int>, greater<int> > q;  //优先队列 

//拓扑排序
void topo(int n){
	for(int i = 1; i <= n; i++){
		if(!lev[i]){  
			q.push(i);  //队列里存的是入度为0的点 
		} 
	}
	int flag = 0;  //统计出队的元素的个数 
	while(!q.empty()){
		int now = q.top();
		q.pop();
		if(flag){
			printf(" %d", now);
		}
		else{
			printf("%d", now);
		}
		flag++;
		for(int i = 0; i < v[now].size(); i++){
			int next = v[now][i];
			lev[next]--;
			if(!lev[next]){
				q.push(next);
			}
		}
	}
	if(flag != n){
		printf("这个图有环，并没有拓扑排序\n");
	}
} 

int main(void){
	int n, m;
	while(scanf("%d%d", &n, &m) != EOF){
		memset(mpt, 0, sizeof(mpt));
		for(int i = 1; i <= m; i++){
			int a, b;
			scanf("%d%d", &a, &b);
			mpt[a][b] = 1;
		}
		for(int i = 1; i <= n; i++){
			v[i].clear();
			for(int j = 1; j <= n; j++){
				if(mpt[i][j]){
					v[i].push_back(j);   //c.push_back(elem)在尾部加入一个数据。
					lev[j]++;
				}
			}
		}
		topo(n);
		printf("\n");
	}
	
	return 0;
}
