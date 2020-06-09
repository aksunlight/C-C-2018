#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"demo2_ÏßÐÔ±íapi.h"

typedef struct _Teacher{
    LinkListNode node;
	char name[64];
	int age;
	
}Teacher;

int main(void){
    int length, i = 0;
	LinkList* list = NULL;
	
	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;
	
	list =  LinkList_Create();
	length = LinkList_Length(list);
	LinkList_Insert(list, (LinkListNode*)&t1, length);
	LinkList_Insert(list, (LinkListNode*)&t1, length);
	LinkList_Insert(list, (LinkListNode*)&t1, length);
	
	for(i=0; i<length; i++){
		Teacher* tmp = (Teacher*)LinkList_Get(list, i);
		if(tmp != NULL){
			printf("age:%d", tmp->age);
		}
	}
	
	while(length > 0){
		Teacher* tmp = (Teacher*)LinkList_Delete(list, 0);
		if(tmp != NULL){
			printf("age:%d", tmp->age);
		}
	}
	
	LinkList_Destroy(list);
/*	
    SeqList_Destory(list);
    SeqList_Clear(list);
    SeqList_Length(list);
	SeqList_Capacity(list);
    SeqList_Insert(list);
    SeqList_Get(list, pos);
    SeqList_Delete(list, pos);
*/	
	return 0;
}


