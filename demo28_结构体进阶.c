#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct Teacher{
	char name[60];
	char* tile; 
	int age;
}Teacher; //������һ���������ͣ�û�з����ڴ� ���ڴ����ֽڶ��� 

int main(void){
	int i = 0;

	i = (int)(&(((Teacher*)0)->age)); //i=64

	return 0;
}
