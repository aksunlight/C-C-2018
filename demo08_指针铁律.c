#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
//	int a;
//	int c; 
//	int* p = &a; //指针变量是一个变量 
//	a = 10; //直接修改a 
//	*p = 20;//间接修改a，给内存赋值 
//	c = *p;//从p所指的内存空间读数据，从内存取值 
	char buf1[100] = {0}; 
	char buf2[100] = {0}; 
	char* p1 = buf1;
	char* p2 = buf2;
	int i;
	int* q = &i; 
	printf("sizeof(i):%d, sizeof(q):%d, sizeof(&i):%d\n", sizeof(i), sizeof(q), sizeof(&i));
	printf("&i:%d, &i+1:%d\n", &i, &i+1); 
/*	strcpy(buf1, "abcdefg");
	while(*p1 != '\0'){
		*p2++ = *p1++; //*p++先取指针p所指向的值，再将指针p自增1 
	}
	printf("buf2:%s\n", buf2); 
*/
	printf("buf1:%d\n", buf1); 
	printf("buf2:%d\n", buf2); 
	printf("buf1:%d\n", &buf1); 
	printf("buf2:%d\n", &buf2); 
//  int a[5]，在几乎所有使用数组的表达式中，数组名的值是个指针常量，也就是数组第一个元素的地址。 
//  它的类型取决于数组元素的类型： 如果它们是int类型，那么数组名的类型就是“指向int的常量指针”，int* a = 6487328。
//	&a代表的不是取a这个变量的地址，而是取数组元素的地址
//  &a为指针（指向整个数组），所以sizeof(&a)为4
//  指针就是地址，地址就是指针；指针变量是一个变量，它保存了基本类型变量的地址。
	return 0;
} 
