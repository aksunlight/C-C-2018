#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

int funcStr(char* p1, char* p2){
	return 0;
}
int main(void){
    char p[] = "abcde";
    char c;
    char* p1 = p;
    char* p2 = p+strlen(p)-1;
    while(p1  < p2){
    	c = *p1;
    	*p1 = *p2;
    	*p2 = c;
    	p1++;
    	p2--;
	}
	printf("p[]=%s", p); 
    return 0;
}
 
