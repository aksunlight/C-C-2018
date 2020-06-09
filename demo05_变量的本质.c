#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
	int a;        
    a = 10; //变量直接修改 
    printf("a = %d\n", a);
    printf("&a:%d\n", &a);
    *((int*)6487580) = 20;//间接修改拿到内存编号 
    printf("a = %d\n", a);
	return 0;
} 
