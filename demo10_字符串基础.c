#include"stdlib.h"
#include"stdio.h"
#include"string.h"
//c语言里面没有字符串这种类型
//通过字符数组来模拟字符串
//c风格字符串是以零结尾的字符串
 
int main(void){
	//字符数组初始化 
	//指定长度，如果定义的长度大，则剩余部分补0 
	char buf1[100] = {'a', 'b', 'c'};
	//长度不定，不补零（看编译器） 
	char buf2[] = {'a', 'b', 'c'};  
	char buf3[] = {'a', 'b', 'c', '\0'};  
	//通过字符串初始化字符数组，并且追加\o 
    char buf4[] = "abcdefg";
    
	printf("%s\n", buf1);
    printf("%s\n", buf2);
	printf("%s\n", buf3);
	printf("%s\n", buf4);
	printf("sizeof(buf1)%d\n", sizeof(buf1));
	printf("strlen(buf1)%d\n", strlen(buf1));
	printf("sizeof(buf2)%d\n", sizeof(buf2));
	printf("strlen(buf2)%d\n", strlen(buf2));
	//注意sizeof是对数组类型大小测量包括了\0 
	printf("sizeof(buf4)%d\n", sizeof(buf4));
	//strlen是求字符串的长度不包括\0 
	printf("strlen(buf4)%d\n", strlen(buf4));
    return 0;
} 
 
