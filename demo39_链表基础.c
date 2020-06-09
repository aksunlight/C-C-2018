#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct _Teacher{
	char name[64];
	int age;
	struct _Teacher* next;
}Teacher;

int main(void){
	Teacher t1, t2, t3;
	Teacher* p = NULL;
	
	memset(&t1, 0, sizeof(Teacher));
	memset(&t2, 0, sizeof(Teacher));
	memset(&t3, 0, sizeof(Teacher));
	
    t1.age = 11;
    t2.age = 21;
    t3.age = 31;
    
    t1.next = &t2;
    t2.next = &t3;
    t3.next = NULL;
    
    p = &t1;
    while(p != NULL){
    	printf("%d ", p->age);
    	p = p->next;
	}
    
	return 0; 
} 

