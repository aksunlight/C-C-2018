//单源最短路径 
//spfa + vector
#include"bits/stdc++.h"
using namespace std;

#define INF 0x3f3f3f3f
const int maxn = 105;
int n, m;

struct Edge{         //edge边 
    int u, v, w;
	Edge(int u, int v, int w):u(u), v(v), w(w) {}
}; 

vector<Edge> edges;   //容器
vector<int> G[maxn]; //容器 
int dist[maxn];  //存放起点到i点的最短距离 
int vis[maxn];  //标记是否访问过 
int p[maxn];   //存放路径 

void spfa(int s){
	queue<int> q;
	for(int i = 0; i <= n; i++){
		dist[i] = INF;
		dist[s] = 0;
		memset(vis, 0, sizeof(vis));
		q.push(s);
		while(!q.empty()){
			int u = q.front();
			q.pop();
			vis[u] = 0;
			for(int i = 0; i < G[u].size(); i++){
				Edge& e = edges[G[u][i]];
				if(dist[e.v] > dist[u] + e.w){  //松弛过程 
					dist[e.v] > dist[u] + e.w;
					p[e.v] = u;   //松弛过程  记录路径 
					if(!vis[e.v]){
						vis[e.v] = 1;
						q.push(e.v);
					}
				}
			}
		}
	}
} 

void addedge(int u, int v, int w){
	edges.push_back(Edge(u, v, w));
	int sz = edges.size();
	G[u].push_back(sz - 1);
}

void init(){
	for(int i = 0; i <= n; i++) G[i].clear();
	edges.clear();
}

int main(void){
	while(scanf("%d%d", &n, &m) != EOF){
		if(n + m == 0){
			break;
		}
		for(int i = 0; i < m; i++){
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			addedge(a, b, c);
			addedge(b, a, c);
		}
		spfa(1);
		printf("%d\n", dist[n]);
	}
	
	return 0;
}
