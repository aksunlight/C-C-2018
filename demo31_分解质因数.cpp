//�ֽ�������
#include"bits/stdc++.h"
using namespace std;

//��������ɸѡ�� prime[0]����������ĸ��� 
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
	int n; 
	while(cin >> n){
		int ans = 0;
		for(int i = 1; i <= prime[0]; i++){
			while(n % prime[i] == 0){
				n /= prime[i];
				ans++;
			}
		} 
		if(n > 1){
			ans++;
	    }
	    cout << ans << endl;
	}
	
	return 0;
} 
