#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){
	int i = 0;
	char* p = NULL; 
	FILE* fp = NULL;
	char a[100] = "abcdefg";
	char buf[100];
	char* fname1 = "d:\\1.txt";
    char* fname2 = "d:/1.txt"; //����д�� 
    
	fp = fopen(fname1, "r+");
//     r �򿪣�ֻ�� 
//	   w �򿪣��ļ�ָ��ָ��ͷ��ֻд
//     a �򿪡�ָ���ļ�β�����Ѵ����ļ���׷�� 
//	   rb ��һ���������ļ���ֻ��
//	   wb ��һ���������ļ���ֻд 
//	   ab ��һ���������ļ�������׷�� 
//	   r+ �Զ�/д��ʽ��һ���Ѵ��ڵ��ļ� 
//	   w+ �Զ�/д��ʽ����һ���µ��ı��ļ� 
//	   rb+ �Զ�/д��ʽ����һ���������ļ�
//	   wb+ �Զ�/д��ʽ����һ���µĶ������ļ� 
//	   ab+ �Զ�/д��ʽ��һ���������ļ�����׷�� 

	if(NULL == fp){
		printf("func fopen() err: %s\n", fname1);
		return 0;
	}
	
	for(i=0; i<strlen(a); i++){
		fputc(a[i], fp); //һ��һ���ַ���д��д���ļ� 
	}	
	fputs(a, fp); //�����ַ�����д��д���ļ� 
	
	if(!feof(fp)){
		p = fgets(buf, 50, fp);	//�����ַ����Ķ������ļ���������buf�׵�ַ 
        printf("%s\n", buf);
        printf("%s\n", buf);
    }

    for(i=0; i<5; i++){
    	if(fwrite(&student[i], sizeof(student), 1, fp) != 1){
    		// �������ݵĴ�ŵ�ַ  Ҫд���ֽ���  Ҫ���ж�д���ٸ�������  �ļ���ָ�� 
    		printf("file write error\n")
		}
	} 

	fclose(fp);  //�ر��ļ� 
	
	return 0;
}

//�ļ��ڴ����ϴ�ŵķ�ʽ��Ϊack��ʽ�ͷ�ack��ʽ 
