#include"stdio.h"
#include"stdlib.h"
#include"string.h"

typedef struct Node{
	int data;
	struct Node* next;
}SLIST;  //单向链表 

//编写 Slist_Creat，建立带有头结点的单向链表
//循环创建结点，节点数据域中的数值从键盘输入，以-1作为输入结束标志 
SLIST* Slist_Creat();
//打印函数 
int Slist_Print(SLIST* pHead);
//结点插入函数。在值为x的结点前插入结点值为y的结点，如无插入末尾 
int Slist_NodeInsert(SLIST* pHead, int x, int y);
//节点删除函数 
int Slist_NodeDel(SLIST* pHead, int x);
//链表销毁函数 
int Slist_Destory(SLIST* pHead);
//链表逆置
int Slist_Reser(SLIST* pHead); 

SLIST* Slist_Creat(){
	int data;
	SLIST* tmp = NULL;
	SLIST* pCur = NULL;
	SLIST* pHead = NULL;
	
	pHead = (SLIST*)malloc(sizeof(SLIST));
	if(pHead == NULL){
		return NULL;
	}
	pCur = pHead;
	
	printf("please enter the data of node(-1:quit)\n");
	scanf("%d", &data);
	while(data != -1){
		tmp = (SLIST*)malloc(sizeof(SLIST));
		if(tmp == NULL){
			Slist_Destory(pHead);
	       	return NULL;
	    }
		tmp->data = data;
		tmp->next = NULL;
		pCur->next = tmp;
		pCur = tmp;
		printf("please enter the data of node(-1:quit)\n");
	    scanf("%d", &data); 	
	}

    return pHead;
} 

int Slist_Creat2(SLIST** mypHead){
	int ret, data;
	SLIST* tmp = NULL;
	SLIST* pCur = NULL;
	SLIST* pHead = NULL;
	
	pHead = (SLIST*)malloc(sizeof(SLIST));
	if(pHead == NULL){
		ret = -1;
		printf("func Slist_Creat2() erro:%d\n", ret);
		return ret;
	}
	pCur = pHead;
	
	printf("please enter the data of node(-1:quit)\n");
	scanf("%d", &data);
	while(data != -1){
		tmp = (SLIST*)malloc(sizeof(SLIST));
		if(tmp == NULL){
			Slist_Destory(pHead);
			ret = -2;
		    printf("func Slist_Creat2() erro:%d\n", ret);
		    return ret;
	    }
		tmp->data = data;
		tmp->next = NULL;
		pCur->next = tmp;
		pCur = tmp;
		printf("please enter the data of node(-1:quit)\n");
	    scanf("%d", &data); 	
	}
	
    *mypHead = pHead;
    
    return ret;
} 

int Slist_Print(SLIST* pHead){
	SLIST* p = NULL;
	if(pHead == NULL){
		return -1;
	}
	
	p = pHead->next;
	printf("printf begin\n");
	while(p){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\nprintf end\n");
	
	return 0;
}

int Slist_NodeInsert(SLIST* pHead, int x, int y){ //在值为x的结点前插入结点值为y的结点，如无插入末尾 
	SLIST* p = NULL;	
	SLIST* tmp = NULL;	
	if(pHead == NULL){
		return -1;
	}
	
	p = pHead;
	while(p->next){
		if(p->next->data == x){
			break;
		}
		p = p->next;
	} 
	tmp = (SLIST*)malloc(sizeof(SLIST));
	tmp->next = p->next;
	tmp->data = y;
	p->next = tmp;
	
	return 0;
}

int Slist_NodeDel(SLIST* pHead, int x){
	SLIST *pCur = NULL, *pPre = NULL;
	pPre = pHead;
	pCur = pHead->next;
	
	while(pCur){
		if(pCur->data == x){
			pPre->next = pCur->next;
			free(pCur);
			break;
		}
		pPre = pCur;
		pCur = pCur->next;
	} 
	if(pCur == NULL){
		printf("没有找到要删除的结点\n");
	}
	return 0;
}

//链表逆置需要一个一个结点的逆置，分析逆置结点，从第二个结点逆置 
int Slist_Reser(SLIST* pHead){
	SLIST *t = NULL, *p = NULL, *q=NULL;
	if(pHead == NULL){
		return -1;
	}
	if(pHead->next==NULL || pHead->next->next==NULL){
		return -2;
	}
	
	//初始化逆置环境
	p = pHead->next;
	q = pHead->next->next; 
	
	while(q != NULL){
		//你只之前把q的后继节点保存
	    t = q->next;
	    //逆置操作
	    q->next = p;
	    //让前驱节点后移 
        p = q;
	    //让逆置结点后移
      	q = t; 
	}
	//逆置完成后p指向最后一个结点，1指向NULL 
	pHead->next->next = NULL;
	pHead->next = p;
	
	return 0;
}

int Slist_Destory(SLIST* pHead){
	SLIST* p = NULL;
	SLIST* tmp = NULL;
	if(pHead == NULL){
		return -1;
	}
	p = pHead;
	while(p){
		tmp = p->next;
		free(p);
		p = tmp;
	}
	return 0;
}

int main(void){
	int ret = 0;
	SLIST* pHead = NULL;
	
	ret = Slist_Creat2(&pHead);	
	if(ret != 0){
		printf("func Slist_Creat2() err:%d\n", ret);
		return 0;
	}
	Slist_Print(pHead);
	 
	Slist_NodeInsert(pHead, 100, 11); 
	if(ret != 0){
		printf("func Slist_NodeInsert err:%d\n", ret);
		return 0;
	}
	Slist_Print(pHead);
	
	Slist_NodeDel(pHead, 10);
	if(ret != 0){
		printf("func Slist_NodeDel() err:%d\n", ret);
		return 0;
	}
	Slist_Print(pHead);
	
	Slist_Reser(pHead);
	if(ret != 0){
		printf("func Slist_Reser() err:%d\n", ret);
		return 0;
	}
	Slist_Print(pHead);	 
	
    Slist_Destory(pHead);
    if(ret != 0){
		printf("func Slist_Destory() err:%d\n", ret);
		return 0;
	}

	return 0; 
} 

