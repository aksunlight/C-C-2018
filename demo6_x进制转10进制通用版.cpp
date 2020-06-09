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
		ans = ans * x; 
		if(s[i] > '0' && s[i] <= '9'){
			ans += (s[i] - '0');
		}
		else{
			ans += (s[i] - 'a') + 10;                                                                                                                                                                                                                                                                                                                                                                   
		}
	}
	printf("%d\n", ans);
	
	return 0;
} 
