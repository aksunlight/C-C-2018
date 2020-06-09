#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct Teacher{
	char name[60];
	char* tile; 
	int age;
}Teacher; //定义了一个数据类型，没有分配内存 ，内存四字节对齐 

int main(void){
	int i = 0;

	i = (int)(&(((Teacher*)0)->age)); //i=64

	return 0;
}
