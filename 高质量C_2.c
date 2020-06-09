#include"stdio.h"

void Func(char str[100]){
	sizeof(str) = 100; //错了应为4，不会正分配100个字节 
}

int main(void){
	char str[] = "hello";
	char* p = str;
	int n = 10;
	
	sizeof(str) = 6;
	sizeof(p) = 4;
	sizeof(n) = 4;
	
	void* p = malloc(100);
	sizeof(p) = 4; 
	
	return 0;
} 
