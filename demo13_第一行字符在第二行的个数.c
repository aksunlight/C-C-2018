#include"stdio.h"
#include"string.h"

char s[10];
char t[100];

int main(void){
	while(1){
		gets(s);
		if(s[0] == '#'){
			break;
		}
		gets(t);
		int ls = strlen(s);
		int lt = strlen(t);
		for(int i = 0; i < ls; i++){
			int cnt = 0; 
			for(int j = 0; j < lt; j++){
				if(s[i] == t[j]){
					cnt++;
				}
			}
			printf("%c %d\n", s[i], cnt);
		}
	}
	
	return 0;
}
