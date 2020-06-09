#include"bits/stdc++.h"
using namespace std;

char s[1005];

int main(void){
	int n;
	while(cin >> s >> n){
		int m = 0;
		int sl = strlen(s);
		for(int i = 0; i < sl; i++){
			m = ((m * 10) % n + (s[i] - '0') % n) % n;
		}
		cout << m << endl;
	}
	return 0;
} 
