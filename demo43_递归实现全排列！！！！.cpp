#include"bits/stdc++.h"
using namespace std;

int n;
int vis[100];    //±ê¼Ç
int a[100];      //´æÊı 

void fun(int step){
	if(step == n){
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	for(int i = 1; i <= n; i++){
		if(vis[i] == 0){
			vis[i] = 1;
			a[step] = i;
			fun(step + 1);
			vis[i] = 0;
		} 
	}
}

int main(void){
	scanf("%d", &n);
	fun(0);

	return 0;
}
