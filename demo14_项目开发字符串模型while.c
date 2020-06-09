#include"stdlib.h"
#include"stdio.h"
#include"string.h"
int getCout(char* p, char* subp, int* ncout){
	if(p == NULL || subp == NULL || ncout == NULL){
		return -1;
	}
	while(p = strstr(p, subp)){
    	p = p + strlen(subp);
    	(*ncout)++;
    	if(*p == '\0')
    	break;
	}
	return 0;
}
int main(void){
    char* p = "abcd1111abcd222abcd333";
    char* subp = "abcd";
    int ncout = 0;
    int ret = 0;
//    while(p = strstr(p, subp)){
//    	p = p + strlen("abcd");
//    	ncout++;
//    	if(*p == '\0')
//    	break;
//	}
	ret = getCout(p, subp, &ncout);
	if(ret != 0){
		printf("func getCout() err:%d", ret);
	}else{
     	printf("ncout:%d\n", ncout);
    }
    return 0;
}
 
