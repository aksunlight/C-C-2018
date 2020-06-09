#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int ReadFile(FILE* p, char* key, char* value) 不合理，要加fopen 
int ReadFile(const char* fname,/*in*/ char* key,/*in*/ char* value/*in*/) //合理 

int WriteFile(const char* fname,/*in*/ char* key,/*in*/ char* value/*in*/)

int ChangeFile(const char* fname,/*in*/ char* key,/*in*/ char* value/*in*/)

int main(void){
	int ret = 0, i = 0;
	usigned char plain[100];
	int plainlen = 0;
	
	usigned char plain2[100];
	int plain2len = 0;
	 
	usigned char cryptdata[100];
	int cryptlen = 0;
	 
	strcpy(plain, "abcdefghijk");
	plainlen = strlen((char*)plain); 
	
	ret = DesEns(plain, plainlen, cryptdata, &cryptlen); //加密函数
    if(ret != o){
    	printf("fuc DesEnc() err: %d\n", ret);
    	return 0;
	} 
	
	ret = DesDec(cryptdata, cryptlen, plain2, &plain2len); //解密函数 
    if(ret != o){
    	printf("fuc DesDec() err: %d\n", ret);
    	return 0;
	} 
	
	if(plainlen != plain2len){
		printf("两个明文长度不一致\n");
		return 0;
	}
	
	if(mencmp(plain, plain2, plain2len) == 0){
	    printf("两个明文内容一致\n");
	}else{
		printf("两个明文内容不一致\n");
	}
	 
	return 0;
} 
