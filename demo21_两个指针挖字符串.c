#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"

/*
��һ���ַ���������������("abcdef, acccd, eeee, aaaa, e3eeeee,sssss")
Ҫ��дһ���������ӿڣ���������½��
1���Զ��ŷָ��ַ������γɶ�ά���飬���ѽ������
2���Ѷ�ά�����������Ҳ���� 
*/

int spitString(const char* buf1, char c, char buf[10][30], int* num){
	const char* p = NULL;
	const char* pTmp = NULL;
	int ncount = 0;
	char myBuf[1024] = {0};
	
	//����1����ʼ��������p��pTmp��ִ�м����Ŀ�ͷ 
	p = buf1;
	pTmp = buf1;
	
	//����2��strstr��strchr��p���ƣ���p��pTmp֮����һ����ֵ 
	do{
		p = strchr(p, c);
		if(p == NULL){
			break;
		}
		else{
			memset(myBuf, 0, sizeof(myBuf));
			//���ַ��� 
			strncpy(myBuf, pTmp, p-pTmp);
//		    myBuf[p-pTmp] = '\0';
		    
		    strcpy(buf[ncount], myBuf);
			ncount++; 
		    //����3����p��pTmp���³�ʼ�����ﵽ���������� 
			pTmp = p = p + 1;	 
		}
	}while(*p != '\0');
//	printf("ncount:%d\n", ncount);
	*num = ncount;
	
	return 0;
}

int spitString02(const char* buf1, char c, char buf[10][30], int* num){
 //���߿��Լ�int ret = 0;��Ϊ����ֵ 
	const char* p = NULL;
	const char* pTmp = NULL;
	int ncount = 0;
	if(buf1==NULL || num==NULL){
		return -1;
	}
	//����1����ʼ��������p��pTmp��ִ�м����Ŀ�ͷ 
	p = buf1;
	pTmp = buf1;
	
	//����2��strstr��strchr��p���ƣ���p��pTmp֮����һ����ֵ 
	do{
		p = strchr(p, c);
		if(p == NULL){
			break;
		}
		else{
			//���ַ��� 
			strncpy(buf[ncount], pTmp, p-pTmp);
		    buf[ncount][p-pTmp] = '\0';
		    
			ncount++; 
		    //����3����p��pTmp���³�ʼ�����ﵽ���������� 
			pTmp = p = p + 1;	 
		}
	}while(*p != '\0');
//	printf("ncount:%d\n", ncount);
	*num = ncount;
	
	return 0; //����return ret�� 
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
 
