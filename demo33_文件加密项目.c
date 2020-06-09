#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int FilesymEnc(char* filename1, char*filename2){
	int ret = 0;
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	unsigned char plain[4096];
	int plainlen = 0;
    int	writtenlen = 0;
	
	fp1 = fopen(filename1, "rb");
	if(fp1 == NULL){
		ret = -1; 
		goto End;
	}
	fp1 = fopen(filename2, "wb");
	if(fp2 == NULL){
		ret = -2; 
		goto End;
	}
	
	while(!feof(fp1)){
		plainlen = fread(plain, 1, 4096, fp1); //fread�����ķ���ֵ�Ƿ��ص�ʵ�ʳ��� 
        if(feof(fp1)){
        	break;
		} 
		writtenlen = fwrite(plain, 1, plainlen, fp2);
	    if(writtenlen != plainlen){ //������Ȳ���ȣ�˵��д�ļ�������io���� 
            ret = -3;
            printf("д���ļ�ʧ��\n");
            goto End;
        }
    }
   	writtenlen = fwrite(plain, 1, plainlen, fp2);
	if(writtenlen != plainlen){ //������Ȳ���ȣ�˵��д�ļ�������io���� 
        ret = -3;
        printf("д���ļ�ʧ��\n");
        goto End;
    }
    
End:
    if(fp1 != NULL){
    	fclose(fp1);
	}
	if(fp2 != NULL){
    	fclose(fp2);
	}	
	return 0;
}

int main(void){
    int ret = 0;
    char* file1 = "c:/1.txt";
    char* file2 = "c:/2.txt";
    
//ret = FileSymEnc(file1, file2);
    if(ret != 0){
    	printf("func FileSymEnc() erro: %d\n", ret);
    	return 0;
	}
    
	return 0;
} 
