#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

/*
有一个字符串符合以下特征("abcdef, acccd, eeee, aaaa, e3eeeee,sssss")
要求写一个函数（接口），输出以下结果
1）以逗号分割字符串，形成二维数组，并把结果传出
2）把二维数组行数结果也传出 
*/

int spitString(const char* buf1, char c, char** buf, int* num){
 //或者可以加int ret = 0;作为返回值 
	const char* p = NULL;
	const char* pTmp = NULL;
	int ncount = 0;
	if(buf1==NULL || num==NULL){
		return -1;
	}
	//步骤1：初始化条件，p和pTmp都执行检索的开头 
	p = buf1;
	pTmp = buf1;
	
	//步骤2：strstr或strchr让p后移，在p和pTmp之间有一个差值 
	do{
		p = strchr(p, c);
		if(p == NULL){
			break;
		}
		else{
			//挖字符串 
			strncpy(buf[ncount], pTmp, p-pTmp);
		    buf[ncount][p-pTmp] = '\0';
		    
			ncount++; 
		    //步骤3：让p和pTmp重新初始化，达到检索的条件 
			pTmp = p = p + 1;	 
		}
	}while(*p != '\0');
//	printf("ncount:%d\n", ncount);
	*num = ncount;
	
	return 0; //或者return ret； 
}

int printArray(char** pArray, int num){
	return 0;
} 

char** getMuf(int num){
	int i;
	char** buf = (char**)malloc(10*sizeof(char*));
	if(buf == NULL){
		return NULL;
	}
	for(i=0; i<num; i++){
		buf[i] = (char*)malloc(30*sizeof(char));
		if(buf[i] == NULL){
			return NULL;
		}
	} 
	return buf;
}

int freeBuf(char** buf, int num){
	int i;
	if(buf == 0){
		return -1;
	}
	for(i=0; i<num; i++){
		free(buf[i]);
	}
	free(buf);
	return 0;
}

int main(void){
    int i, ret = 0, num = 0;
    const char* buf1 = "abcdef,acccd,eeee,aaaa,e3eeeee,sssss";
    char c = ',';

    char** buf = (char**)malloc(10*sizeof(char*));
    buf[0] = (char*)malloc(30*sizeof(char));
    buf[1] = (char*)malloc(30*sizeof(char));
    buf[2] = (char*)malloc(30*sizeof(char));
    buf[3] = (char*)malloc(30*sizeof(char));
    buf[4] = (char*)malloc(30*sizeof(char));
    buf[5] = (char*)malloc(30*sizeof(char));
    buf[6] = (char*)malloc(30*sizeof(char));
//  或者这样
//  char** buf = (char**)malloc(10*sizeof(char*));
//	for(i=0; i<10; i++){
//		buf[i] = (char*)malloc(30*sizeof(char));
//	} 
//   或者写成函数
//	char** buf = getMuf(6);  
//  if(buf == NULL){
//       return 0;
//}这样最好 
    ret = spitString(buf1, c, buf, &num);
    if(ret != 0){
    	printf("func spitString() err:%d\n", ret);
        goto End;
	}
	for(i=0; i<num; i++){
		printf("%s\n", buf[i]);
	}
End:
    if(buf != NULL){
	    freeBuf(buf, 6);
	}	
	return 0; //或者return ret; 
}
 
