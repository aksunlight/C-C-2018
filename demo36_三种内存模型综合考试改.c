#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int getArray_Free2(char*** p3, int num3){
	int i;
	char** tmp = NULL; 
	
	if(p3 == NULL){
		return -1;
	}
	
	tmp = *p3;
	for(i=0; i<num3; i++){
		if(tmp[i] != NULL){
			free(tmp[i]);
			tmp[i] = NULL; //垃圾代码，可不写 
		}
	}
	
	free(tmp);
	*p3 = NULL;
	return 0;
}

int getArray_Free(char** p3, int num3){
	int i;
	if(p3 == NULL){
		return -1;
	}
	for(i=0; i<num3; i++){
		if(p3[i] != NULL){
			free(p3[i]);
			p3[i] = NULL; //垃圾代码，可不写 
		}
	}
	free(p3);
	return 0;
}

int getArray2(char** myp1, int num1, char (*myp2)[30], int num2, char*** myp3, int* num3){
	int i, j, tmpNum = 0;
	char** tmpp3 = NULL;
	tmpNum = num1 + num2;
	
	if(myp1==NULL || myp2==NULL || myp3==NULL || num3==NULL){
		return -1;
	}
	
	tmpp3 = (char**)malloc(tmpNum*sizeof(char*));
	for(i=0; i<num1; i++){
		tmpp3[i] = (char*)malloc(strlen(myp1[i])+1);
	    if(tmpp3[i] == NULL){
	    	puts("out of space");
	    	return -2;
		}
	}
	for(j=0; j<num2; i++, j++){
		tmpp3[i] = (char*)malloc(strlen(myp2[j])+1);
	    if(tmpp3[i] == NULL){
	    	puts("out of space");
	    	return -3;
		}
	}
	
	for(i=0; i<num1; i++){
		strcpy(tmpp3[i], myp1[i]);
	}
	for(j=0; j<num2; i++, j++){
		strcpy(tmpp3[i], myp2[j]);	
	}
	
	*myp3 = tmpp3;
	*num3 = tmpNum;
	return 0;
}

char** getArray(char** myp1, int num1, char (*myp2)[30], int num2, int* num3){
	int i, j, tmpNum = 0;
	char** tmpp3 = NULL;
	tmpNum = num1 + num2;
	
	if(myp1==NULL || myp2==NULL || num3==NULL){
		return NULL;
	}
	
	tmpp3 = (char**)malloc(tmpNum*sizeof(char*));
	for(i=0; i<num1; i++){
		tmpp3[i] = (char*)malloc(strlen(myp1[i])+1);
	    if(tmpp3[i] == NULL){
	    	puts("out of space");
	    	return NULL;
		}
	}
	for(j=0; j<num2; i++, j++){
	 	tmpp3[i] = (char*)malloc(strlen(myp2[j])+1);
	    if(tmpp3[i] == NULL){
	    	puts("out of space");
	    	return NULL;
		}
	}
	
	for(i=0; i<num1; i++){
		strcpy(tmpp3[i], myp1[i]);
	}
	for(j=0; j<num2; i++, j++){
		strcpy(tmpp3[i], myp2[j]);	
	}
	
	*num3 = tmpNum;
	return tmpp3;
}

int main(void){
	int i, ret, num3;
    char* p1[] = {"222222", "1111", "333333"};
    char p2[4][30] = {"bbbbb", "aaaaa", "zzzzzz", "cccccc"};
    char** p3 = NULL;
    
    /*写法1*/ 
    p3 = getArray(p1, 3, p2, 4, &num3);
	if(p3 == NULL){
    	return 0;
	}
    /*写法2*/	
    ret = getArray2(p1, 3, p2, 4, &p3, &num3);
	if(ret != 0){
		return 0;
	}

	for(i=0; i<num3; i++){
		printf("%s\n", p3[i]); 
	}
	
    /*写法1*/ 
    getArray_Free(p3, num3);
    /*写法2*/ 
    getArray_Free2(*p3, num3);
    
	return 0;
} 
