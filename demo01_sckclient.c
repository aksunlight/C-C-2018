#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "sckclient.h"

/*
1.�ͻ��˻�����ʼ��
2.�ͻ��˷��ͱ���
3.�ͻ��˽��ܱ���
4.�ͻ��˻����ͷ� 
*/ 

int main(void){
	FILE *fp = NULL;
	int ret = 0;
	ret = sckClient_init(NULL);
	printf("hello.....\n");
	system("pause");
	return 0;
} 
