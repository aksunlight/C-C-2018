#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int getLen(int* p){
	*p = 30;
	return 0;
}

int main01(void){
	int a = 10;
	int* p = NULL;
	
	printf("a:%d\n", a);
	
	p = &a;
	*p = 20; 
	printf("a:%d\n", a);
 
	return 0;
} 


int main02(void){
	char* p = NULL;
	char** p2 = NULL;
	
	p = 0x1;
	p = 2;
	p = 3;
	
	p2 = &p;
	*p2 = 100;
	printf("p:%d\n", p);
    printf("p2:%d\n", p2);
 
	return 0;
} 



int getMen(char*** myp3){
	int i;
	char** tmp = (char**)malloc(10*sizeof(char*));
	if(tmp == NULL){
		return -1;
	}
	for(i=0; i<3; i++){
		tmp[i] = (char*)malloc(10*sizeof(char));
	}
	*myp3 = tmp;
    return 0;
}

int main(void){
	char** p2 = NULL;
	char*** p3 = NULL;

	
	p2 = 1;
	p2 = 3; 
	printf("p2:%d\n", p2);
	
	p3 = &p2;
	*p3 = 100;
    printf("p2:%d\n", p2);
    
    getMen(&p2);
    
	return 0;
} 
