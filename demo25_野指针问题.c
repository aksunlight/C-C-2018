#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(void){
	//����Ұָ��ķ���
	//1.����ָ��ʱ����ָ�������ֵ��NULL��
	//2.�ͷ��ڴ�ʱ�����ж�ָ������Ƿ�ΪNULL��
	//3.�ͷ���Ϻ󣬰�ָ��������¸�ֵ��NULL�� 
    char* p = NULL; //1 
    
	p = (char*)malloc(100);
	strcpy(p, "abcdefg");
	
	
	
	if(p != NULL){  //2 
		free(p);
		p = NULL;   //3
	} 
	
	if(p != NULL){  //2
		free(p);
		p = NULL;   //3
	} 
	//free���λ����� 
	return 0;
}
