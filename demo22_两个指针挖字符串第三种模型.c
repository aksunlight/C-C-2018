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

int spitString(const char* buf1, char c, char** buf, int* num){
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
//  ��������
//  char** buf = (char**)malloc(10*sizeof(char*));
//	for(i=0; i<10; i++){
//		buf[i] = (char*)malloc(30*sizeof(char));
//	} 
//   ����д�ɺ���
//	char** buf = getMuf(6);  
//  if(buf == NULL){
//       return 0;
//}������� 
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
	return 0; //����return ret; 
}
 
