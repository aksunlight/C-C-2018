#include"bits/stdc++.h"
using namespace std;

typedef struct node{
	char data;
	struct node *lchild, *rchild;
}*BitTree;

//��������ķ�ʽ����������
void CreatBitTree(BitTree &T){
	char c;
	cin >> c;
	if(c == '0'){
		T = NULL;
	}
	else{
		T = new node;
		T->data = c;
		CreatBitTree(T->lchild);
		CreatBitTree(T->rchild);
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

//��������Ҷ�ӽ�����
int Leaf(BitTree T){
	if(T == NULL){
		return 0;
	}
	else if(T->lchild == NULL && T->rchild == NULL){
		return 1;
	}
	else{
		return Leaf(T->lchild) + Leaf(T->rchild);
	}
} 

//����������� 
int Deepth(BitTree T){
	if(T == NULL){
		return 0;
	}
	int x = Deepth(T->lchild);
	int y = Deepth(T->rchild);
	return max(x, y) + 1;
} 

int main(void){
	BitTree T;
	CreatBitTree(T);
	PreOrderTraverse(T);
	cout << endl;
	InOrderTraverse(T);
	cout << endl;
	PostOrderTraverse(T);
	cout << endl;
	cout << Leaf(T) << endl;
	return 0;
} 
