#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct _Student{
	char name[64];
	int age;
}Student;
//�ṹ�屾���ǹ̶���С���ڴ��ı��� 
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
	struct _AdvTeacher* pAdvTeacher; //���� ��֪����8�ֽڣ�����ָ������ 
	struct _AdvTeacher myAdvTeacher; //���� ����֪��С 
    AdvTeacher* pAdvTeacher; //���� , AdvTeacher����֪�� 
    AdvTeacher myAdvTeacher; //���� ��AdvTeacher����֪�� �����Ҳ�֪��С 
    //�ṹ�屾���ǹ̶���С���ڴ��ı������ṹ�屾���ǹ̶���С���ڴ��ı������ṹ�屾���ǹ̶���С���ڴ��ı����� 
}AdvTeacher;

int main(void){
	Student s1;
	Teacher t1;
	AdvTeacher adv;
	
	t1.age = 30;
	t1.s1.age = 20; 
	
	return 0; 
} 

