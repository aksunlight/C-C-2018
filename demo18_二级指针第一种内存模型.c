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
			tmp = pArray[i];                 //strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数。
			pArray[i] = pArray[j];          //两个字符串自左向右逐个字符相比（按ASCII值大小相比较），直到出现不同的字符或遇'\0'为止。
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
	//二级指针的第一种内存模型
	//首先考虑它是一个数组，指针数组===>只不过每个元素是指针而已 
    char* myArray[] = {"bbbb", "aaaa", "ccccc", "111111"};
    printf("排序之前\n");
    printArray(myArray, 4);
    
    sortArray(myArray, 4);
    
    printf("排序之后\n");
    printArray(myArray, 4);
    
	return 0;
}
 

