#include"stdio.h"
#include"stdlib.h"
#include"string.h"

char** getMem(int n){
	char** pArray = NULL;
	pArray = (char**)malloc(n*sizeof(char*));
	if(pArray == NULL){
		return NULL;
	}
	for(int i=0; i<n; i++){
		pArray[i] = (char*)malloc(10*sizeof(char));
	}
    return pArray; 
}

int printfArray(char** pArray, int n){
	if(pArray == NULL){
		return -1;
	}
	for(int i=0; i<n; i++){
		printf("%s\n", pArray[i]);
	}
	return 0;
}
 
int sortArray(char** pArray, int n){
	if(pArray == NULL){
		return -1;
	}
	char* tmp = NULL;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(pArray[i], pArray[j]) > 0){
				tmp = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = tmp;
			}
		}
	}
	return 0;
}

int main(void){
	char** pArray = NULL;
	pArray = getMem(3);
	
	strcpy(pArray[0], "bbbbb");
	strcpy(pArray[1], "aaaa");
	strcpy(pArray[2], "cccc");
	
	printf("排序之前\n");
	printfArray(pArray, 3);
	
	sortArray(pArray, 3);
	
	printf("排序之后\n");
	printfArray(pArray, 3); 
	
	return 0;
}
