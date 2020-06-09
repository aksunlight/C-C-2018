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
    char* fname2 = "d:/1.txt"; //两种写法 
    
	fp = fopen(fname1, "r+");
//     r 打开，只读 
//	   w 打开，文件指针指到头，只写
//     a 打开。指向文件尾，在已存在文件中追加 
//	   rb 打开一个二进制文件，只读
//	   wb 打开一个二进制文件，只写 
//	   ab 打开一个二进制文件，进行追加 
//	   r+ 以读/写方式打开一个已存在的文件 
//	   w+ 以读/写方式建立一个新的文本文件 
//	   rb+ 以读/写方式建立一个二进制文件
//	   wb+ 以读/写方式建立一个新的二进制文件 
//	   ab+ 以读/写方式打开一个二进制文件进行追加 

	if(NULL == fp){
		printf("func fopen() err: %s\n", fname1);
		return 0;
	}
	
	for(i=0; i<strlen(a); i++){
		fputc(a[i], fp); //一个一个字符的写，写入文件 
	}	
	fputs(a, fp); //整个字符串的写，写入文件 
	
	if(!feof(fp)){
		p = fgets(buf, 50, fp);	//整个字符串的读，从文件读出返回buf首地址 
        printf("%s\n", buf);
        printf("%s\n", buf);
    }

    for(i=0; i<5; i++){
    	if(fwrite(&student[i], sizeof(student), 1, fp) != 1){
    		// 读入数据的存放地址  要写的字节数  要进行读写多少个数据项  文件型指针 
    		printf("file write error\n")
		}
	} 

	fclose(fp);  //关闭文件 
	
	return 0;
}

//文件在磁盘上存放的方式分为ack方式和非ack方式 
