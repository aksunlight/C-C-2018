#include"stdio.h"

int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void){
	int n;
	while(scanf("%d", &n) != EOF){
		int month = 1, day = 1, s = 0, f = 0, m = 0;
		while(n >= 24*60*60){
			day++;
			n -= 24*60*60;
		}
		while(n >= 60*60){
			s++;
			n -= 60*60;
		}
		while(n >= 60){
			f++;
			n -= 60;
		}
		while(n > 0){
			m++;
			n -= 1;
		}
		for(int i = 1; i <= 12; i++){
			if(day > a[i]){
				month++;
				day -= a[i];
			}
		}
		printf("2009-%02d-%02d %02d:%02d:%02d\n", month, day, s, f, m);
	}
	return 0;
}
