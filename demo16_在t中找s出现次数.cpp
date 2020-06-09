#include<bits/stdc++.h>
using namespace std;

char s[105];
char t[105];
//s在t中出现多少次 
//t里面找s 
int main(void){
	scanf("%s%s", s, t);
	int ls = strlen(s);
	int lt = strlen(t);
	int sum = 0; 
	for(int i = 0; i < lt; i++){
		int flag = 0;
		for(int j = 0; j < ls; j++){
			if(t[i+j] != s[j]){
				flag = 1;
			}
		}
		if(flag == 0){
			sum++;
		}	
	}
	printf("%d", sum);
	
	return 0;
}
