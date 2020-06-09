#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char** SortArray1AndArray2(char** myArray1, int num1, char* myArray2, int* num){
	int i, j;
	int tmpNum = num1 + 1;
	*num = tmpNum;
	char* tmp = NULL;
	
	char** myArray = (char**)malloc(tmpNum*(sizeof(char*)));
	for(i=0; i<tmpNum; i++){
		myArray[i] = (char*)malloc(100*sizeof(char));
	}

	for(i=0; i<num1; i++){
		strcpy(myArray[i], myArray1[i]);
	}
	
	strcpy(myArray[i], myArray2);
	
	for(i=0; i<tmpNum; i++){
		for(j=i+1; j<tmpNum; j++){
			if(strcmp(myArray[i], myArray[j]) > 0){
				tmp = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = tmp;
			}		
		}
	}
	return myArray;
}

int main(void){
    int i = 0, num = 0;
    char** Array = NULL;
    char* Array1[] = {"bbbbb", "aaaaa", "ccccc"}; 
    char* Array2 = "1111111";
    
    Array = SortArray1AndArray2(Array1, 3, Array2, &num);
    
    for(i=0; i<num; i++){
    	printf("%s\n", Array[i]);
	}
    
	return 0;
}
