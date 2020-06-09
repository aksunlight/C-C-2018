//��������
//ȷ������������N֧���飬 M��������� 
#include"bits/stdc++.h" 
using namespace std;

const int maxn = 505;
bool mpt[maxn][maxn];  //��ͼ 
int lev[maxn];         //��� 
vector<int> v[maxn];
priority_queue<int, vector<int>, greater<int> > q;  //���ȶ��� 

//��������
void topo(int n){
	for(int i = 1; i <= n; i++){
		if(!lev[i]){  
			q.push(i);  //�������������Ϊ0�ĵ� 
		} 
	}
	int flag = 0;  //ͳ�Ƴ��ӵ�Ԫ�صĸ��� 
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
		printf("���ͼ�л�����û����������\n");
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
					v[i].push_back(j);   //c.push_back(elem)��β������һ�����ݡ�
					lev[j]++;
				}
			}
		}
		topo(n);
		printf("\n");
	}
	
	return 0;
}
