#include"bits/stdc++.h"
using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return gcd(b, a % b);
	}
}

int m[605];

int main(void){
	int n;
	while(scanf("%d", &n) != EOF){
		for(int i = 0; i < n; i++){
			scanf("%d", &m[i]);
		}
		sort(m, m + n);
		int ans = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(gcd(m[i], m[j]) == 1){
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
