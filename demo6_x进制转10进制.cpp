#include"bits/stdc++.h"
using namespace std;

int main(void){
	int x;
	char s[105];
    scanf("%d", &x);
	scanf("%s", &s);
	int len = strlen(s);
	int ans = 0;
	for(int i = 0; i < len; i++){
		ans = ans * x + (s[i] - '0');
	}
	printf("%d\n", ans);
	
	return 0;
} 
