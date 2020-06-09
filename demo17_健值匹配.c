#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

int funcStr(char* p1, char* p2){
	int ncount = 0;
    int i = 0, j, k;
    j = strlen(p1)-1;
    if(p1==NULL || p2==NULL){
    	printf("func funcStr() err:%d 传入地址为空\n", -1);
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

int getKeybyValue(char* pKeyValude, char* pKey, char* pValude){
    //1 在pKeyValude中查找是否有关键字pKey
	//2 有没有
	//3 按要求提取valude
	int rv = 0;
	char buf[1024];
	char* p = NULL;
	if(pKeyValude==NULL || pKey==NULL || pValude==NULL){
    	rv = -1;
    	printf("func getKeybyValue() err:%d 传入地址为空\n", rv);
		return rv;
	}
	p = strstr(pKeyValude, pKey);
	if(p == NULL){
		rv = -2;
		printf("func getKeybyValue() err:%d 查找没有关键字%s\n", rv, pKey);
		return rv;
	} 
	p = p+strlen(pKey);
	p = strstr(p, "=");
	if(p == NULL){
		rv = -3;
		printf("func getKeybyValue() err:%d 查找没有关键字'='\n", rv);
		return rv;
	}
	p = p+1;  
	rv = funcStr(p, buf);
	if(rv != 0){
//		printf("func funcStr err:%d", rv);
		return rv;
	}
	strcpy(pValude, buf);
	return rv;
}

int main(void){
	int ret = 0;
	char KeyValude[] = "key1=valude1";
	char Key[] = "key1";
	char Valude[1024] = {0};
	ret = getKeybyValue(KeyValude, Key, Valude);
	if(ret != 0){
//		printf("func getKeybyValue() err:%d\n", ret);
		return 0;
	}
	printf("Valude:%s\n", Valude);
	return 0;
}
 
