#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
//	int a;
//	int c; 
//	int* p = &a; //ָ�������һ������ 
//	a = 10; //ֱ���޸�a 
//	*p = 20;//����޸�a�����ڴ渳ֵ 
//	c = *p;//��p��ָ���ڴ�ռ�����ݣ����ڴ�ȡֵ 
	char buf1[100] = {0}; 
	char buf2[100] = {0}; 
	char* p1 = buf1;
	char* p2 = buf2;
	int i;
	int* q = &i; 
	printf("sizeof(i):%d, sizeof(q):%d, sizeof(&i):%d\n", sizeof(i), sizeof(q), sizeof(&i));
	printf("&i:%d, &i+1:%d\n", &i, &i+1); 
/*	strcpy(buf1, "abcdefg");
	while(*p1 != '\0'){
		*p2++ = *p1++; //*p++��ȡָ��p��ָ���ֵ���ٽ�ָ��p����1 
	}
	printf("buf2:%s\n", buf2); 
*/
	printf("buf1:%d\n", buf1); 
	printf("buf2:%d\n", buf2); 
	printf("buf1:%d\n", &buf1); 
	printf("buf2:%d\n", &buf2); 
//  int a[5]���ڼ�������ʹ������ı��ʽ�У���������ֵ�Ǹ�ָ�볣����Ҳ���������һ��Ԫ�صĵ�ַ�� 
//  ��������ȡ��������Ԫ�ص����ͣ� ���������int���ͣ���ô�����������;��ǡ�ָ��int�ĳ���ָ�롱��int* a = 6487328��
//	&a����Ĳ���ȡa��������ĵ�ַ������ȡ����Ԫ�صĵ�ַ
//  &aΪָ�루ָ���������飩������sizeof(&a)Ϊ4
//  ָ����ǵ�ַ����ַ����ָ�룻ָ�������һ���������������˻������ͱ����ĵ�ַ��
	return 0;
} 
