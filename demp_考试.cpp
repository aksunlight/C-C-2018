#include"bits/stdc++.h"
using namespace std;

int a[10005];

int main(void){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans = ans + a[i];
		}
		cout << ans << endl;
	}
	return 0;
} 
