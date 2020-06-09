#include"bits/stdc++.h"
using namespace std;

int main(void){	
	int n, q;
	map<int, int> m;
	cin >> n;
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		m[tmp] = 1;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		int tmp;
		cin >> tmp;
		if(m[tmp] == 1){
			cout << "find" << endl;
		}
		else{
			cout << "no" << endl;
			m[tmp] = 1;
		}
	}
	
	return 0;
}



