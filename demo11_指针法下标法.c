#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
	//下标法和指针法
	int i;
	char buf[] = "abcd";
	char* p = buf;
	for(i = 0; i < strlen(buf); i++){
		printf("%c ", buf[i]);
	}  
	printf("\n");
	for(i = 0; i < strlen(buf); i++){
		printf("%c ", *(p+i));
	} 
	//[]与*的本质
	//*p是程序员手工的去利用间接赋值
	//[]只不过是编译器帮我们做了一个*p的操作
	//buf[i] == buf[0+i] == *(buf+i) 
    return 0;
} 
 
