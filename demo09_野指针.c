#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
	char buf[100] = "abcde";
	char* p = (char*)malloc(100);
	char* q = "abcde";
	printf("p用百分d:%d p用百分s:%s\n", p, p);
	printf("q用百分d:%d q用百分s:%s\n", q, q);
	printf("字符串abcde用百分d:%d 字符串abcdeq用百分s:%s\n", "abcde", "abcde");
	printf("buf用百分d:%d buf用百分s:%s\n", buf, buf);
	printf("&buf用百分d:%d &buf用百分s:%s\n", &buf, &buf);
	if(p != NULL){
		free(p);
		p = NULL;
	} 
    return 0;
} 
//p用百分d:1577952 p用百分s:郳
//q用百分d:4210736 q用百分s:abcde
//字符串abcde用百分d:4210736 字符串abcdeq用百分s:abcde
//buf用百分d:6487440 buf用百分s:abcde
//&buf用百分d:6487440 &buf用百分s:abcde
