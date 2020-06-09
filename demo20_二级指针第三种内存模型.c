#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

int sortArray(char** pArray, int num){
	int i, j;
	char* tmp = NULL;
	if(pArray == NULL){
		return -1;
	}
	for(i=0; i<4; i++){
		for(j=i+1; j<4; j++){
			if(strcmp(pArray[i], pArray[j]) > 0){
			tmp = pArray[i];                 
			pArray[i] = pArray[j];          
			pArray[j] = tmp;              
		    }
	    }
    }
    return 0;
}

int printArray(char** pArray, int num){
	int i = 0;
	if(pArray == NULL){
		return -1;
	}
	for(i=0; i<num; i++){
	    printf("%s\n", pArray[i]);
	}
	return 0;
} 

int main(void){
    int i, j;
    char* tmp = NULL;
    char** pArray = NULL;
    
    pArray = (char**)malloc(100*sizeof(char*));
    pArray[0] = (char*)malloc(12*sizeof(char));
    pArray[1] = (char*)malloc(20*sizeof(char));
    pArray[2] = (char*)malloc(20*sizeof(char));
    pArray[3] = (char*)malloc(20*sizeof(char));
    strcpy(pArray[0], "cccccc");
    strcpy(pArray[1], "aaaa");
    strcpy(pArray[2], "bbbbb");
    strcpy(pArray[3], "111111");
    
    printf("ÅÅÐòÇ°×Ö·û´®´óÐ¡\n");
	printArray(pArray, 4); 
	
    sortArray(pArray, 4);
	
	printf("ÅÅÐòºó×Ö·û´®´óÐ¡\n"); 
	printArray(pArray, 4);
	
	for(i=0; i<4; i++){
		 if(pArray[i] != NULL){
		 	free(pArray[i]);
		 }
	}
	if(pArray != NULL){
		free(pArray);
	}
	
	return 0;
}
 
