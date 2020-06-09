#include"stdio.h"
#include"malloc.h"
struct node{
	int num;
	struct node* pre;
	struct node* next;
}; 

struct node* create(int n){
	struct node* head = NULL;
	struct node* tmp = NULL;
	tmp = head;
	for(int i = 1; i <= n; i++){
		struct node* now = (struct node*)malloc(sizeof(struct node));
		now->num = i;
		now->next = head;
		now->pre = tmp;
		tmp->next = now;
		tmp = now;
	} 
	return head;
}

void print(struct node* head){
	struct node* p = NULL;
	p = head->next;
	for(int i = 1; i <= 10; i++){
		printf("%d ", p->num);
		p = p->next;
	}
}

int main(void){
	struct node* head = NULL;
	head = create(10);
	print(head);
	return 0;
}
