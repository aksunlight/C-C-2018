#include"stdlib.h"
#include"stdio.h"
#include"string.h"
//int a=10;  ��ȫ������ȫ�ֱ����� ��ɫ�ش� 
//int a;  ��ȫ������ȫ�ֱ����� ��ɫ�ش� 
//c++�������Ż� 
/*
ָ�����������ָ����ڴ�ռ������������ͬ�ĸ���
�ڱ����ú�������malloc���ڴ棬�׵�ַ�������ú��������ַ���
1.return
2.ָ������������
��������������ڴ棨�ѣ�stack��ȫ�������������ڱ���������ʹ�ã�ָ�������������� 
��������������ڴ��У�malloc���ڴ棬static���ڴ��������������ʹ�ã�������ʱ��stack���Ե��ڴ治���� 
*/ 
char* getStr1(){
	char* p = "abcd";//�ַ����׵�ַ����p����ȫ�����������������ڴ� 
	return p;
}

char* getStr2(){
	char* p = "abcd";//�ַ����׵�ַ����p����ȫ�����������������ڴ� 
	return p;
}

char* getStr3(){
	char p[100];//��ջ�з����ڴ� 
	strcpy(p, "abcd");
	return p; 
}

char* getStr4(){
	char* p = (char*)malloc(100);//�ڶ��з����ڴ� 
	strcpy(p, "abcd");
	return p; 
}

int main(void){
    printf("getStr1():%s....\n", getStr1());
    printf("getStr2():%s....\n", getStr2());
    printf("getStr3():%s....\n", getStr3());
    printf("getStr4():%s....\n", getStr4());
    printf("getStr1():%d....\n", getStr1());
    printf("getStr2():%d....\n", getStr2());
    printf("getStr3():%d....\n", getStr3());
    printf("getStr4():%d....\n", getStr4());
 
//  system("pause");
	return 0;
} 
