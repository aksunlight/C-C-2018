#include"bits/stdc++.h"
using namespace std;

int a[1005];

int main(void){
	int n, x;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	scanf("%d", &x);
	int l = 1, r = n;   //
	while(l < r){       //
		int mid = (1 + r) / 2;
		if(a[mid] == x){
			printf("find\n");
			return 0;
		}
		if(a[mid] > x){  //
			r = mid - 1;
		}
		if(a[mid] < x){  //
			l = mid + 1;
		}
	}
	printf("no find\n");
	return 0;
}



