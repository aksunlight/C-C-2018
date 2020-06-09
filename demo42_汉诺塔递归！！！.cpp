#include"bits/stdc++.h"
using namespace std;
/*
��������������Ҫ���A�Ƶ�C
������A-->B, A-->C, B-->C 
 -|-     |     |
--|--    |     |
  A      B     C 
*/
int step;  //�ƶ�����
void Hanoi(int n, char a, char b, char c){
	if(n == 1){
		if((step + 1) % 5 == 0){  //д5���軻һ�� 
			cout << a << "-->" << c << endl;
		} 
		else{
			cout << a << "-->" << c << "  ";
		}
		step++;
		return;
	}
	Hanoi(n-1, a, b, b);
	Hanoi(1, a, b, c);
	Hanoi(n-1, b, a, c);
} 

int main(void){
	int n;
	while(cin>>n){
		if(n == 0){
			break;
		}
		step = 0;
		Hanoi(n, 'A', 'B', 'C');
		cout << endl;
	}

	return 0;
}
