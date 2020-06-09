#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"ctype.h"

int funcStr(char* p1, char* p2){
	int ncount = 0;
    int i = 0, j, k;
    j = strlen(p1)-1;
    if(p1==NULL || p2==NULL){
    	return -1;
	}
    while(isspace(p1[i]) && p1[i] != '\0'){
    	i++;
	}
    while(isspace(p1[j]) && j > 0){
    	j--;
	}
	ncount = j-i+1;
	strncpy(p2, p1+i, ncount); 
	p2[ncount] = '\0';
	return 0;
}
int main(void){
	int ret;
    char p1[] = "     ababcdsbcd   ";
    char p2[1024] = {0};
   
    printf("修改前字符串是:%s\n", p1);
    
    ret = funcStr(p1, p2);
    if(ret != 0){
    	printf("func funcStr() err:%d\n", ret);
	}else{  
	    printf("修改后字符串是:%s\n", p2);
    } 
    
    return 0;
}
 
