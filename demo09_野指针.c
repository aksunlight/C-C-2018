#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
	char buf[100] = "abcde";
	char* p = (char*)malloc(100);
	char* q = "abcde";
	printf("p�ðٷ�d:%d p�ðٷ�s:%s\n", p, p);
	printf("q�ðٷ�d:%d q�ðٷ�s:%s\n", q, q);
	printf("�ַ���abcde�ðٷ�d:%d �ַ���abcdeq�ðٷ�s:%s\n", "abcde", "abcde");
	printf("buf�ðٷ�d:%d buf�ðٷ�s:%s\n", buf, buf);
	printf("&buf�ðٷ�d:%d &buf�ðٷ�s:%s\n", &buf, &buf);
	if(p != NULL){
		free(p);
		p = NULL;
	} 
    return 0;
} 
//p�ðٷ�d:1577952 p�ðٷ�s:�\
//q�ðٷ�d:4210736 q�ðٷ�s:abcde
//�ַ���abcde�ðٷ�d:4210736 �ַ���abcdeq�ðٷ�s:abcde
//buf�ðٷ�d:6487440 buf�ðٷ�s:abcde
//&buf�ðٷ�d:6487440 &buf�ðٷ�s:abcde
