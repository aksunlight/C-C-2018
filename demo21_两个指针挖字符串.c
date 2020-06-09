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

int spitString(const char* buf1, char c, char buf[10][30], int* num){
	const char* p = NULL;
	const char* pTmp = NULL;
	int ncount = 0;
	char myBuf[1024] = {0};
	
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
			memset(myBuf, 0, sizeof(myBuf));
			//挖字符串 
			strncpy(myBuf, pTmp, p-pTmp);
//		    myBuf[p-pTmp] = '\0';
		    
		    strcpy(buf[ncount], myBuf);
			ncount++; 
		    //步骤3：让p和pTmp重新初始化，达到检索的条件 
			pTmp = p = p + 1;	 
		}
	}while(*p != '\0');
//	printf("ncount:%d\n", ncount);
	*num = ncount;
	
	return 0;
}

int spitString02(const char* buf1, char c, char buf[10][30], int* num){
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

int main(void){
    int i, ret = 0, num = 0;
    const char* buf1 = "abcdef,acccd,eeee,aaaa,e3eeeee,sssss";
    char c = ',';
    char buf[10][30];
    
    ret = spitString02(buf1, c, buf, &num);
    if(ret != 0){
    	printf("func spitString02() err:%d\n", ret);
    	return ret;
	}
	for(i=0; i<num; i++){
		printf("%s\n", buf[i]);
	}
	
	return 0;
}
 
