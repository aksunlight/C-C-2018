#include"bits/stdc++.h"
using namespace std;

typedef struct node{
	int data;
	struct node *lchild, *rchild;
}*BitTree;

//��������ķ�ʽ����������
//void CreatBitTree(BitTree &T){
//	char c;
//	cin >> c;
//	if(c == '0'){
//		T = NULL;
//	}
//	else{
//		T = new node;
//		T->data = c;
//		CreatBitTree(T->lchild);
//		CreatBitTree(T->rchild);
//	}
//} 

//��Ԫ�ز��������������
void InsertBitTree(BitTree &T, int x){
	if(T == NULL){
		T = new node;
		T->data = x;
		T->lchild = NULL;
		T->rchild = NULL;
		return;
	}
	if(T->data == x){
		return;
	}
	else if(T->data < x){
		InsertBitTree(T->lchild, x);
	}
	else{
		InsertBitTree(T->rchild, x);
	}
} 

//��������������������
void PreOrderTraverse(BitTree T){
	if(T != NULL){
		cout << T->data << ' ';
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
} 

//�������������������
void InOrderTraverse(BitTree T){
	if(T != NULL){
		InOrderTraverse(T->lchild);
		cout << T->data << ' ';
		InOrderTraverse(T->rchild);
	}
} 

//�����������պ������
void PostOrderTraverse(BitTree T){
	if(T != NULL){
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		cout << T->data << ' ';
	}
} 


int main(void){
	int n, x;
	while(cin >> n){
		BitTree T = NULL;
		for(int i = 1; i <= n; i++){
			cin >> x;
			InsertBitTree(T, x);
		}
		PreOrderTraverse(T);
		cout << endl;
		InOrderTraverse(T);
		cout << endl;
		PostOrderTraverse(T);
		cout << endl;
	}
	
	return 0;
} 
