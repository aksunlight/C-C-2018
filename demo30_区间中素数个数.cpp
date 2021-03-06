#include"bits/stdc++.h"
using namespace std;

//线性素数筛选， prime[0]存的是素数的个数 
const int maxn = 1000000 + 5;
int prime[maxn];
void getPrime(){
	memset(prime, 0, sizeof(prime));
	for(int i = 2; i <= maxn; i++){
		if(!prime[i]){
			prime[++prime[0]] = i;
		}
		for(int j = 1; j <= prime[0] && prime[j] * i <= maxn; j++){
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0){
				break;
			} 
		}
	}
} 

int main(void){
	getPrime();
	int a, b;
	while(cin >> a >> b){
		if(a > b){
			swap(a, b);
		}
		int ans = 0;
		for(int i = 1; i <= prime[0]; i++){
			if(prime[i] >= a){
				ans++;
			}
			if(prime[i] > b){
				ans--;
				break;
			}
		}
		cout << ans << endl; 
	}
	
	return 0;
}
