#include"bits/stdc++.h"
using namespace std;

int main(void){
	
	int i, x, y;

	for(i = 1000; i <= 9999; i++){
		x = 9 * i;
	    y = 0;
		while(x > 0){
			y = y * 10 + (x % 10);
			x /= 10;
		}
		if(i == y){
			printf("%d\n", i);
		}
	}

	return 0;
} 
