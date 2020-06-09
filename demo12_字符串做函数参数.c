#include"stdlib.h"
#include"stdio.h"
#include"string.h"
void copy_strl(char* from, char* to){
	while(*from != '\0'){
		*to++ = *from++;
	}
	*to = '\0';
}
void copy_strl2(char* from, char* to){
	while((*to++ = *from++) != '\0'){
		;
	}
}//效果同上 
void copy_str1(char* from, char* to){
	
}
int main(void){
    char* p = "abcdef";
    char* p1 = NULL;
    char p2[100]; 
    copy_strl(p, p2);
    printf("p2:%s\n", p2);
    return 0;
} 

