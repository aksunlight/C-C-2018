#include"stdlib.h"
#include"stdio.h"
#include"string.h"
//int a=10;  在全局区（全局变量） 灰色地带 
//int a;  在全局区（全局变量） 灰色地带 
//c++编译器优化 
/*
指针变量和它所指向的内存空间变量是两个不同的概念
在被调用函数里面malloc的内存，首地址传给调用函数有两种方法
1.return
2.指针做函数参数
主调函数分配的内存（堆，stack，全局区），可以在被调函数中使用（指针做函数变量） 
被调函数分配的内存中，malloc的内存，static的内存可以让主调函数使用，但是临时区stack属性的内存不可以 
*/ 
char* getStr1(){
	char* p = "abcd";//字符串首地址赋给p，在全局区（常量）分配内存 
	return p;
}

char* getStr2(){
	char* p = "abcd";//字符串首地址赋给p，在全局区（常量）分配内存 
	return p;
}

char* getStr3(){
	char p[100];//在栈中分配内存 
	strcpy(p, "abcd");
	return p; 
}

char* getStr4(){
	char* p = (char*)malloc(100);//在堆中分配内存 
	strcpy(p, "abcd");
	return p; 
}

int main(void){
    printf("getStr1():%s....\n", getStr1());
    printf("getStr2():%s....\n", getStr2());
    printf("getStr3():%s....\n", getStr3());
    printf("getStr4():%s....\n", getStr4());
    printf("getStr1():%d....\n", getStr1());
    printf("getStr2():%d....\n", getStr2());
    printf("getStr3():%d....\n", getStr3());
    printf("getStr4():%d....\n", getStr4());
 
//  system("pause");
	return 0;
} 
