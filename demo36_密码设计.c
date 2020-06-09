#include"stdio.h"
#include"string.h"

char s[55];

int main(void){
	int m; 
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		memset(s, 0, sizeof(s)); 
		int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
		scanf("%s", s);
		int sl = strlen(s);
		if(sl >= 8 && sl <= 16){
			flag1 = 1;
		}
		for(int i = 0; i < sl; i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				flag2 = 1;
				break;
			}
		}
		for(int i = 0; i < sl; i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				flag3 = 1;
				break;
			}
		}
		for(int i = 0; i < sl; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				flag4 = 1;
				break;
			}
		}
		for(int i = 0; i < sl; i++){
			if(s[i] == '~' || s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^'){
				flag5= 1;
				break;
			}
		}
		if(flag1 == 1 &&(flag2 + flag3 + flag4 + flag5 >= 3)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
} 
