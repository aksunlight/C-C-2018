#include"bits/stdc++.h"
using namespace std;

int x[105];

bool cmp(int a, int b){
	if(a % 2 == b % 2){
		return a < b;   //ͬ��żǰ�����С�ں������ 
	}
	else{
		return (a % 2) > (b % 2); //ǰ�������2���ں������ 
	}
}

int main(void){
	int n; 
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> x[i];
		}
		sort(x, x + n, cmp);
		for(int i = 0; i < n; i++){
			cout << x[i] << ' ';
		}
		cout << endl;
	} 
	
	return 0;
}
