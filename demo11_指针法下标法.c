#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main(void){
	//�±귨��ָ�뷨
	int i;
	char buf[] = "abcd";
	char* p = buf;
	for(i = 0; i < strlen(buf); i++){
		printf("%c ", buf[i]);
	}  
	printf("\n");
	for(i = 0; i < strlen(buf); i++){
		printf("%c ", *(p+i));
	} 
	//[]��*�ı���
	//*p�ǳ���Ա�ֹ���ȥ���ü�Ӹ�ֵ
	//[]ֻ�����Ǳ���������������һ��*p�Ĳ���
	//buf[i] == buf[0+i] == *(buf+i) 
    return 0;
} 
 
