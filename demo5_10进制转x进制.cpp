#include"bits/stdc++.h"
using namespace std;

int main(void){
	int n, x;
	scanf("%d%d", &n, &x);
	int a[100];
	int cnt = 0; 
	
	while(n > 0){
		int w = n % x;  //xÐ¡ÓÚ10 
	    a[cnt++] = w;
		n /= x;  
	}
	
	for(int i = cnt-1; i >= 0; i--){
		printf("%d", a[i]);
	}
	printf("\n");
	
	return 0;
} 
