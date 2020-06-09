#include"bits/stdc++.h"
using namespace std;

struct node{
	double w, m;
}p[1005];

bool cmp(node a, node b) {
 //按照每毫升的价格从低到高排序
    return a.w/a.m < b.w/b.m;
}

int main(void){
	int x, n;
	double sum = 0;
	while(scanf("%d%d", &x, &n) != EOF){
		if(x == -1 && n == -1){
			break;
		}
		for(int i = 0; i < n; i++){
			scanf("%lf%lf", &p[i].m, &p[i].w);
		}
		sort(p, p + n, cmp);
		for(int i = 0; i < n; i++){
			if(x >= p[i].w){
				sum += p[i].m;
				x -= p[i].w;
			}
			else{
				sum += p[i].m * x / p[i].w;
				break;
			}
		}
		printf("%.3lf\n", sum);
	}
	
	return 0;
}
