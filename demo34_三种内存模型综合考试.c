#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char** getArray(char** myp1, int num1, char (*myp2)[30], int num2, int* num3){
	int i, j, tmpNum = 0;
	char** tmpp3 = NULL;
	tmpNum = num1 + num2;
	*num3 = tmpNum;
	
	if(myp1==NULL || myp2==NULL || num3==NULL){
		return NULL;
	}
	
	tmpp3 = (char**)malloc(tmpNum*sizeof(char*));
	for(i=0; i<tmpNum; i++){
		tmpp3[i] = (char*)malloc(strlen(myp1[i])+1);
	}
	for(i=0; i<num1; i++){
		strcpy(tmpp3[i], myp1[i]);
	}
	for(j=i, i=0; j<tmpNum; j++, i++){
		strcpy(tmpp3[j], myp2[i]);	
	}
	
	return tmpp3;
}

int main(void){
	int i, num3;
    char* p1[] = {"222222", "1111111", "333333"};
    char p2[4][30] = {"bbbbb", "aaaaa", "zzzzzz", "cccccc"};
    char** p3 = NULL;
    
    p3 = getArray(p1, 3, p2, 4, &num3);
    if(p3 == NULL){
    	return 0;
	}
	
	for(i=0; i<num3; i++){
		printf("%s\n", p3[i]); 
	}
    
	return 0;
} 
