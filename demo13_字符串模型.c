#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
    char* str1 = "Borland International", *str2 = "nation", *ptr;
	ptr = strstr(str1, str2);//str1����str2�������״γ��ֵ��ַ����׵�ַ����ptr 
	printf("The substring is:%s\n", ptr);  
    return 0;
} 


