#include"stdio.h"

//顺时针旋转一个矩阵(n*m)90度求输出 
int a[105][105];
int b[105][105]; 
int main(void){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			b[j][n-i+1] = a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
} 

