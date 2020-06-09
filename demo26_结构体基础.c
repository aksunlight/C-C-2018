#include"stdio.h"
#include"stdlib.h"
#include"string.h"

struct Teacher{
	char name[62];
	int age;
}; //定义了一个数据类型，没有分配内存 ，内存四字节对齐 

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
    p->age;     //.和->的本质时寻址，寻每个成员X相对于大变量的地址偏移，没有内存操作 
    
	free(p); //捆绑分配，捆绑释放 
	return 0;
}
