#include"bits/stdc++.h"
using namespace std;
//N��¥����¥���⣺һ�ο��������׻�һ�ף����ж�������¥��ʽ 
//��ʾ��F(n) = F(n-1)+F(n-2) 
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
