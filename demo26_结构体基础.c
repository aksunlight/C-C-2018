#include"stdio.h"
#include"stdlib.h"
#include"string.h"

struct Teacher{
	char name[62];
	int age;
}; //������һ���������ͣ�û�з����ڴ� ���ڴ����ֽڶ��� 

struct Teacher_2{
	char name[62];
	int age;
}t1,t2;

struct{
	char name[62];
	int age;
}t3;

typedef struct Teacher_3{
	char name[62];
	int age;
}teacher;

int main(void){
    struct Teacher t1;
    struct Teacher* p = (struct Teacher*)malloc(sizeof(struct Teacher));
    printf("%d", sizeof(struct Teacher)); 
    t1.age = 10;
    strcpy(t1.name, "name"); 
    p->age;     //.��->�ı���ʱѰַ��Ѱÿ����ԱX����ڴ�����ĵ�ַƫ�ƣ�û���ڴ���� 
    
	free(p); //������䣬�����ͷ� 
	return 0;
}
