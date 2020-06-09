#include"bits/stdc++.h"
using namespace std;

//题目描述：
//假设表达式中允许包含两种括号:圆括号和方括号。编写一个算法判断表达式中的括号是否正
//确配对。
//输入描述：
//由括号构成的字符串，包含”（“、”）“、”[“和”]“。
//输出描述：
//如果匹配输出 YES，否则输出 NO。
//输入样例 #:
//[([][]())]
//输出样例 #:
//YES

int main(void){
	char s[300];
	scanf("%s", s);
	int len = strlen(s);
	stack<int> st;
	for(int i = 0; i < len; i++){
		if(!st.empty()){
			char now = st.top();
			if((s[i] == ')' && (now == '(' || s[i] == ']') && now == '[')){
				st.pop();
			}
			else{
				st.push(s[i]);
			}
		}
		else{
			st.push(s[i]);
		}
		if(!st.empty()){
			printf("NO\n");
		}
		else{
			printf("YES\n"); 
		}
	}
	
	return 0;
}
