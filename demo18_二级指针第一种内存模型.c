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
			tmp = pArray[i];                 //strcmp(str1,str2)����str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�������
			pArray[i] = pArray[j];          //�����ַ���������������ַ���ȣ���ASCIIֵ��С��Ƚϣ���ֱ�����ֲ�ͬ���ַ�����'\0'Ϊֹ��
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
	//����ָ��ĵ�һ���ڴ�ģ��
	//���ȿ�������һ�����飬ָ������===>ֻ����ÿ��Ԫ����ָ����� 
    char* myArray[] = {"bbbb", "aaaa", "ccccc", "111111"};
    printf("����֮ǰ\n");
    printArray(myArray, 4);
    
    sortArray(myArray, 4);
    
    printf("����֮��\n");
    printArray(myArray, 4);
    
	return 0;
}
 

