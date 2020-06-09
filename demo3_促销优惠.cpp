#include"bits/stdc++.h"
using namespace std;

int main(void){
	int i, a, n;
	long long sum = 0;
	long long tmp = 0;
	
	scanf("%d%d", &a, &n);
	for(i=1; i<=n; i++){
		tmp = tmp*10 + a;
		sum += tmp;
	}
	printf("%lld\n", sum);
	
	return 0;
} 
