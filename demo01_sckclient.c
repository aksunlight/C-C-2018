#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "sckclient.h"

/*
1.客户端环境初始化
2.客户端发送报文
3.客户端接受报文
4.客户端环境释放 
*/ 

int main(void){
	FILE *fp = NULL;
	int ret = 0;
	ret = sckClient_init(NULL);
	printf("hello.....\n");
	system("pause");
	return 0;
} 
