#include"bits/stdc++.h"
using namespace std;

int main(void){
	long long int n;
	while(cin >> n){
        long long s = 1;
		for(int i = 1; i <= 5; i++){
			s = s * (n % 3);
		}    
		s = s % 3;
		cout << s << endl;
	}
	return 0;
}

