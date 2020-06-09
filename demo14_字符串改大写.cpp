#include"stdio.h"
#include"string.h"

char s[105];
//flag表示新的单词开始 
int main(void){
	while(gets(s)){
		int ls = strlen(s);
	    int flag = 0;
	    for(int i = 0; i < ls; i++){
		    if(flag == 0 && s[i] != ' '){
		        if(s[i] >= 'a' && s[i] <= 'z'){
			    	s[i] = s[i] - 32;
			    	flag = 1;
		    	}
	    	}
	    	else if(s[i] == ' '){
		    	flag = 0;
	    	}
        }
	    printf("%s", s);
	}

	return 0;
}
