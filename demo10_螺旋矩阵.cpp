//ÂÝÐý¾ØÕó
// 1 8 7 
// 2 9 6 
// 3 4 5 
#include"stdio.h"
int main(void){
	int i, n;
	scanf("%d", &n);
	int a[n+1][n+1] = {0};
	if(n == 1){
		printf("%d", 1);
		return 0;
    } 
    while(n >= 1){
	    for(k = 1; k <= n; k =i++){
			a[k][1] = i;
		}
		for(int j = 2; j <= n; j++){
			a[n][j] = i;
			i++;
		}
		for(int w = n-1; w >= 1; w--){
			a[w][n] = i;
			i++;
		}
		for(int y = n-1; w >= 1; w--){
			a[1][n] = i;
			i++;
		}
	}
} 
