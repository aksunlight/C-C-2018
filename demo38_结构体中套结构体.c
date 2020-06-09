#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct _Student{
	char name[64];
	int age;
}Student;
//结构体本质是固定大小的内存块的别名 
typedef struct _Teacher{
	char name[64];
	int age;
	char* p1;
	char** p2;
	Student s1;
}Teacher;

typedef struct _AdvTeacher{
	char name[64];
	int age;
	struct _AdvTeacher* pAdvTeacher; //可以 ，知道是8字节，不管指针类型 
	struct _AdvTeacher myAdvTeacher; //不行 ，不知大小 
    AdvTeacher* pAdvTeacher; //不行 , AdvTeacher还不知道 
    AdvTeacher myAdvTeacher; //不行 ，AdvTeacher还不知道 ，而且不知大小 
    //结构体本质是固定大小的内存块的别名！结构体本质是固定大小的内存块的别名！结构体本质是固定大小的内存块的别名！ 
}AdvTeacher;

int main(void){
	Student s1;
	Teacher t1;
	AdvTeacher adv;
	
	t1.age = 30;
	t1.s1.age = 20; 
	
	return 0; 
} 

