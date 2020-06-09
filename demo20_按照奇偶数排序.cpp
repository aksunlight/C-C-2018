#include"bits/stdc++.h"
using namespace std;

int x[105];

bool cmp(int a, int b){
	if(a % 2 == b % 2){
		return a < b;   //同奇偶前面的数小于后面的数 
	}
	else{
		return (a % 2) > (b % 2); //前面的数余2大于后面的数 
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
