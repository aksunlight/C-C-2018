#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
    char* str1 = "Borland International", *str2 = "nation", *ptr;
	ptr = strstr(str1, str2);//str1中与str2相似且首次出现的字符串首地址赋给ptr 
	printf("The substring is:%s\n", ptr);  
    return 0;
} 


