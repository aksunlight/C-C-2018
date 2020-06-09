#include"stdlib.h"
#include"stdio.h"
#include"string.h"
//数据类型分为简单类型和复杂类型 
int main(void){
	int q;       //告诉编译器给我分配4个字节内容 
	int a[10];   //告诉编译器给我分配40个字节内容
	printf("&a:%d a:%d\n", &a, a); 
    printf("&a+1:%d a+1:%d\n", &a+1, a+1); 
//  &a:6487536 a:6487536
//  &a+1:6487576 a+1:6487540
//  结果不同的原因是数据类型不同 
/*  
1.数组类型
2.数组指针
3.二者关系 
*/ 
	return 0;
} 
