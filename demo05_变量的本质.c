#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
	int a;        
    a = 10; //����ֱ���޸� 
    printf("a = %d\n", a);
    printf("&a:%d\n", &a);
    *((int*)6487580) = 20;//����޸��õ��ڴ��� 
    printf("a = %d\n", a);
	return 0;
} 
