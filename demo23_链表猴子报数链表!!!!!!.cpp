#include"bits/stdc++.h"
using namespace std;

typedef struct node{
	int num;
	struct node* pre;
	struct node* next;
}node;

int n, s, m;

node* create(){
	node* head = NULL;
	node* tmp = NULL;
	tmp = head;
	for(int i = 1; i <= n; i++){
		node* now = (node*)malloc(sizeof(node));
		now->num = i;
		now->next = head;
		now->pre = tmp;
		tmp->next = now;
		tmp = now;
	} 
	return head;
}

void printf(node* head){
	node* p = head->next;
	for(int i = 1; i <= n; i++){
		printf("%d ", p->num);
		p = p->next;
	}
}
void print(node* head){
	node* p = NULL;
	p = head;
	while(s--){
		p = p->next;
	}
	int i = 1;
	while(p != NULL){
		if(p == p->next){
			printf("%d", p->num);
			break;
		}
		if(i % m == 0){
			printf("%d", p->num);
			p->pre->next = p->next;
			i = 0;
		}
		p = p->next;
		i++;
	}
}

int main(void){
	while(scanf("%d%d%d", &n, &s, &m) != EOF){
		if(n == 0 && s == 0 && m == 0){
			break;
		}
		node* head = NULL;
		head = create();
		printf(head);
	}	
	return 0;
}






