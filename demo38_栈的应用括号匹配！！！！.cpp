#include"bits/stdc++.h"
using namespace std;

//��Ŀ������
//������ʽ�����������������:Բ���źͷ����š���дһ���㷨�жϱ��ʽ�е������Ƿ���
//ȷ��ԡ�
//����������
//�����Ź��ɵ��ַ���������������������������[���͡�]����
//���������
//���ƥ����� YES��������� NO��
//�������� #:
//[([][]())]
//������� #:
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
