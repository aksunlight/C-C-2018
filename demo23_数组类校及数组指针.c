#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(void){
//	int i = 0;
//	int a[10] = {1, 2}; //其它初始化为0
//	int b[] = {1, 2}; 
//	int c[20] = {0};
	//定义一个数组类型 
	typedef int MyArrayType[5];
	//定义一个数组指针类校 
	typedef int(*MyPArrayType)[5];
	
	int i;
	MyArrayType myArray; //等价于int myArray[5]
	//定义了一个（指向）数组类型的指针变量 
	MyArrayType* pArray = NULL;
	pArray = &myArray; 
	
	for(i=0; i<5; i++){
		(*pArray)[i] = i + 1;
	}
	for(i=0; i<5; i++){
		printf("%d\n", (*pArray)[i]);
	}
	
	
	
	
	
	MyPArrayType myPoint;
	int b[5];
	myPoint = &b;
	
	for(i=0; i<5; i++){
		(*myPoint)[i] = i + 1;
	}
	for(i=0; i<5; i++){
		printf("%d\n", (*myPoint)[i]);
	}
	
	
	
	
	
	
	//最终版，直接定义指针变量
	int(*pMyArray)[5]; //告诉编译器开辟四个字节内存 
	 
	return 0;
}
