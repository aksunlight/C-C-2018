#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct Teacher{
	char name[62];
	char* tile; 
	int age;
}Teacher; //������һ���������ͣ�û�з����ڴ� ���ڴ����ֽڶ��� 

int printfTArray(Teacher* p, int num){
	int i = 0; 
	
	for(i=0; i<3; i++){
	    printf("%d %s %s\n", p[i].age, p[i].name, p[i].tile);
	}
	
	return 0;
}

Teacher* creatTArray(int num){
	Teacher* tArray = NULL;
	tArray = (Teacher*)malloc(num*sizeof(Teacher));
	
	if(tArray == NULL){
		return NULL;
	}
	for(int i=0; i<num; i++){
	    tArray[i].tile = (char*)malloc(10*sizeof(char));
        if(tArray[i].tile == NULL){
        	return NULL;
		}	
	}
	
	return tArray;
}

int sortTArray(Teacher* p, int num){
	int i, j, tmp = 0;
	
	for(i=0; i<num; i++){
		for(j=i+1; j<num; j++){
			if(p[i].age > p[j].age){
				tmp = p[i].age;
		    	p[i].age = p[j].age;
		     	p[j].age = tmp;
			}	
		}
	}
	
	return 0;
}

int main(void){
	int i;
    Teacher* tArray = NULL;
    tArray = creatTArray(3);
    
    if(tArray == NULL){
		return 0;
	}
	
    for(i=0; i<3; i++){
    	printf("�������%d����ʦ�����䣺", i+1);
    	scanf("%d", &tArray[i].age);
    	printf("�������%d����ʦ��������", i+1);
    	scanf("%s", tArray[i].name);
    	printf("�������%d����ʦ��ְ�ƣ�", i+1);
    	scanf("%s", tArray[i].tile);
	}
	
	printf("����֮ǰ\n");
	printfTArray(tArray, 3);
	
	sortTArray(tArray, 3);
	
	printf("����֮��\n");
    printfTArray(tArray, 3);
    
	return 0;
}
