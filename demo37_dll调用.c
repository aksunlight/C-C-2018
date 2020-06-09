#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"sckclient.h"  //要不要这句都不要紧，只是加了函数声明而已 
#include"Windows.h"

int main(void){
	int a = 10, b = 5, ret = 0;
	void* handle = NULL;
    unsigned char buf[1024] = "adddddddd231212jkkkk";
	int buflen = 10;
//	strcpy(buf, (unsigned char*)"adddddddd231212jkkkk");
	unsigned char out[1024] = {0};
	int outlen = 0;
	
	typedef int (*FUNT1)(int, int);
	typedef int (*FUNT2)(int, int); //可以只定义一个函数指针 
	typedef int (*FUNT3)(void**);
	typedef int (*FUNT4)(void*, unsigned char*, int);
	typedef int (*FUNT5)(void*, unsigned char*, int*);
	typedef int (*FUNT6)(void*);
	HINSTANCE Hint = LoadLibrary("test_dll.dll");
	FUNT1 add = (FUNT1)GetProcAddress(Hint, "add");
	FUNT2 sub = (FUNT2)GetProcAddress(Hint, "sub");
	FUNT3 sckClient_init = (FUNT3)GetProcAddress(Hint, "sckClient_init");
	FUNT4 sckClient_send = (FUNT4)GetProcAddress(Hint, "sckClient_send");
	FUNT5 sckClient_rev = (FUNT5)GetProcAddress(Hint, "sckClient_rev");
	FUNT6 sckClient_destory = (FUNT6)GetProcAddress(Hint, "sckClient_destory");
	printf("%d + %d is %d\n", a, b, add(a, b));
	printf("%d - %d is %d\n", a, b, sub(a, b));
	
	ret = sckClient_init(&handle);
	if(ret != NULL){
		printf("func sckClient_init erro:%d", ret);
		return 0;
	}
     
    ret = sckClient_send(handle, buf, buflen);
	if(ret != NULL){
		printf("func sckClient_send erro:%d", ret);
		return 0;
	}
	
    ret = sckClient_rev(handle, out, &buflen);
	if(ret != NULL){
		printf("func sckClient_rev erro:%d", ret);
		return 0;
	}
		
	printf("out: %s\n", out);
	
	ret = sckClient_destory(handle);
	if(ret != NULL){
		printf("func sckClient_rev erro:%d", ret);
		return 0;
	}
//  int sckClient_send(void *handle, unsigned char *dada, int datalen)
//  int sckClient_rev(void *handle, unsigned char *out, int *outlen)
//  int sckClient_destory(void *hanle)

	return 0;
} 
