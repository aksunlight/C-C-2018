#include"bits/stdc++.h"
using namespace std;

int main(void){
	int n;
	while(cin >> n){
		if(n <= 1){
			cout << 2 << endl;
		}
		for(int i = n;  ; i++){
		    int flag = 0;
		    for(int j = 2; j <= sqrt(i); j++){
			    if(i % j == 0){
			    	flag = 1;
			    	break;
				}
		    }
			if(flag == 0){
				cout << i << endl;
				break;
			}	
	    }
	}
	return 0;
}
