#include"bits/stdc++.h"
using namespace std;

long long int fib(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}

int main(void){
	int n;
	long long ans;
	while(cin >> n){
		if(n == 0){
			break;
		}
		ans = fib(n);
		cout << ans << endl;
	}
	return 0;
} 
