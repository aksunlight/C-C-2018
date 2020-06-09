#include"bits/stdc++.h"
using namespace std;

int main(void){
	int n;
	int ans = 0;
	scanf("%d", &n);
	
	while(n > 0){
		ans = ans*10 + n%10;
		n /= 10;
	}
	printf("%d\n", ans); 

	return 0;
} 
