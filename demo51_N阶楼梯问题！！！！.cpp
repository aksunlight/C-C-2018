#include"bits/stdc++.h"
using namespace std;
//N阶楼梯上楼问题：一次可以走两阶或一阶，问有多少种上楼方式 
//提示：F(n) = F(n-1)+F(n-2) 
int main(void){	
	int i, n;
	long long a[90];
	while(scanf("%d", &n) != EOF){
		a[1] = 1;
		a[2] = 2;
		for(i = 3; i <= n; i++){
			a[i] = a[i - 1] + a[i - 2];
		}
		printf("%lld\n", a[n]); 
	}
	
	return 0;                                                                                                                                                                            
}
