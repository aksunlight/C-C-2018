#include<bits/stdc++.h>
using namespace std;

char s[105];
char t[105];
char t_lower[105];
int f[105] = {0}; //��������� 
//t������s����ɾ��s�������ִ�Сд�� 
int main(void){
	scanf("%s%s", s, t);
	int ls = strlen(s);
	int lt = strlen(t);
	//t�д�дתСд 
	for(int i = 0; i < lt; i++){
		if(t[i] >= 'A' && t[i] <= 'Z'){
			t_lower[i] = t[i] + 32;
		}
		else{
			t_lower[i] = t[i];
		}
	} 
	//��t����s 
	for(int i = 0; i < lt; i++){
		int flag = 0;
		for(int j = 0; j < ls; j++){
			if(t_lower[i+j] != s[j]){
				flag = 1;
			}
		}
		if(flag == 0){
			for(int j = i; j < i + ls; j++){
				f[j] = 1;
			}
		}	
	}
	//��ӡ�ޱ�� 
	for(int i = 0; i < lt; i++){
		if(f[i] == 0){
			printf("%c", t[i]);
		}
	}
	printf("\n");
	
	return 0;
}
