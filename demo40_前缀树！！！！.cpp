#include"bits/stdc++.h"
using namespace std;

const int maxn = 26; //26个字母，如果包含大小写的话就改成52 

typedef struct TrieNode{
	int nCount; //结点出现次数 
	struct TrieNode *next[maxn];
}Trie;
Trie root;

//初始化 
void InitTrie(){
    for(int i = 0; i < maxn; i++){
    	root.next[i] = NULL;
	}	
}

//建立Tire树
void CreateTrie(char *str){
	int len = strlen(str);
	Trie *p = &root, *q;
	for(int i = 0; i < len; i++){
		int k = str[i] - 'a';
		if(p->next[k] == NULL){
			q = (Trie *)malloc(sizeof(root));
			q->nCount = 1;
			for(int j = 0; j < maxn; j++){
				q->next[j] = NULL;
			}
			p->next[k] = q;
			p = p->next[k];
		} 
		else{
			p->next[k]->nCount++;
			p = p->next[k];
		}
	}
} 
 
//统计Tire树中叶子节点的个数
int sum;
void CountTrie(){
	queue<Trie*> q;
	q.push(&root);
	while(!q.empty()){
		Trie *p = q.front();
		q.pop();
		int son = 0;
		for(int i = 0; i < maxn; i++){
			int k = i;
			if(p->next[k] == NULL){
				son++;
			}
			else{
				q.push(p->next[k]);
			}
		}
		if(son == maxn){
			sum += 1;
		}
	}
} 

//统计具有相同前缀的单词个数
int FindTrie(char *str){
	int len = strlen(str);
	Trie *p = &root;
	for(int i = 0; i < len; i++){
		int k = str[i] - 'a';
		if(p->next[k] = NULL){
			return 0;
		}
		p = p->next[k];
	}
	return p->nCount;
} 

int main(void){
	int n;
	while(cin >> n){
		if(n == 0){
			break;
		}
		char str[20];
		sum = 0;
		InitTrie();
		for(int i = 0; i < n; i++){
			scanf("%s", str);
			CreateTrie(str);
		}
		CountTrie();
		printf("%d\n", sum);
	}

	return 0;
} 
