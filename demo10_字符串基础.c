#include"stdlib.h"
#include"stdio.h"
#include"string.h"
//c��������û���ַ�����������
//ͨ���ַ�������ģ���ַ���
//c����ַ����������β���ַ���
 
int main(void){
	//�ַ������ʼ�� 
	//ָ�����ȣ��������ĳ��ȴ���ʣ�ಿ�ֲ�0 
	char buf1[100] = {'a', 'b', 'c'};
	//���Ȳ����������㣨���������� 
	char buf2[] = {'a', 'b', 'c'};  
	char buf3[] = {'a', 'b', 'c', '\0'};  
	//ͨ���ַ�����ʼ���ַ����飬����׷��\o 
    char buf4[] = "abcdefg";
    
	printf("%s\n", buf1);
    printf("%s\n", buf2);
	printf("%s\n", buf3);
	printf("%s\n", buf4);
	printf("sizeof(buf1)%d\n", sizeof(buf1));
	printf("strlen(buf1)%d\n", strlen(buf1));
	printf("sizeof(buf2)%d\n", sizeof(buf2));
	printf("strlen(buf2)%d\n", strlen(buf2));
	//ע��sizeof�Ƕ��������ʹ�С����������\0 
	printf("sizeof(buf4)%d\n", sizeof(buf4));
	//strlen�����ַ����ĳ��Ȳ�����\0 
	printf("strlen(buf4)%d\n", strlen(buf4));
    return 0;
} 
 
