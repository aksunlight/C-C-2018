#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

int sortArray(char pArray[][30], int num){
	//int sortArray(char pArray[][], int num) == int sortArray(char** pArray, int num)���ǲ��е� 
    //int sortArray(char pArray[][30], int num){��д��}��int sortArray(char pArray[10][30], int num){д��}���ǿ��Ե� 
	int i = 0, j = 0;
	char tmpBuf[30];
	for(i=0; i<4; i++){
    	for(j=i+1; j<4; j++){
    		if(strcmp(pArray[i], pArray[j]) > 0){
    			strcpy(tmpBuf, pArray[i]);
    			strcpy(pArray[i], pArray[j]);
    			strcpy(pArray[j], tmpBuf);
			}
		}
	}
}

int printArray(char pArray[10][30], int num){
	int i;
	for(i=0; i<num; i++){
    	printf("%s\n", pArray[i]);
	}
}

int main(void){
	int i = 0, j = 0;
	char tmpBuf[30];
    char buf[10][30] = {"ccccc", "aaaa", "bbbb", "11111"};
    
    printf("����֮ǰ��ӡ\n");
    printArray(buf, 4);
    
    sortArray(buf, 4);
	
	printf("����֮ǰ��ӡ\n");
    printArray(buf, 4);
    
	return 0;
}
 
