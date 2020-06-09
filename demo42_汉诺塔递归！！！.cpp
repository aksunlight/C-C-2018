#include"bits/stdc++.h"
using namespace std;
/*
假如是两个盘子要求从A移到C
则步骤是A-->B, A-->C, B-->C 
 -|-     |     |
--|--    |     |
  A      B     C 
*/
int step;  //移动步数
void Hanoi(int n, char a, char b, char c){
	if(n == 1){
		if((step + 1) % 5 == 0){  //写5步骤换一行 
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
