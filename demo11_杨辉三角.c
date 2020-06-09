#include"stdio.h"
int main(void){
	int n;
	int a[21][21] = {0};
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			break;
		}
		a[1][1] = 1;
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= i; j++){
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
