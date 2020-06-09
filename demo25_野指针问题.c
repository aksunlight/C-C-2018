#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(void){
	//避免野指针的方法
	//1.定义指针时，把指针变量赋值成NULL；
	//2.释放内存时，先判断指针变量是否为NULL；
	//3.释放完毕后，把指针变量重新赋值成NULL； 
    char* p = NULL; //1 
    
	p = (char*)malloc(100);
	strcpy(p, "abcdefg");
	
	
	
	if(p != NULL){  //2 
		free(p);
		p = NULL;   //3
	} 
	
	if(p != NULL){  //2
		free(p);
		p = NULL;   //3
	} 
	//free两次会出错的 
	return 0;
}
