#include"bits/stdc++.h"
using namespace std;


int main(void){
	int x, y;
	char s[105];
	scanf("%d%s%d", &x, s, &y);
	int len = strlen(s);
	int tmp = 0;
	for(int i = 0; i < len; i++){
		tmp = tmp * x;
		if(s[i] >= '0' && s[i] <= '9'){
			tmp += (s[i] - '0');
		}else{
			tmp += (s[i] - 'a') + 10;
		}
	}

	char out[105];
	int cnt = 0;
	while(tmp > 0){
		int w = tmp % y;
		if(w < 10){
			out[cnt++] = w + '0';
		}else{
			out[cnt++] = (w - 10) + 'a';
		}
		tmp /= y;
	}
	for(int i = cnt - 1; i >= 0; i--){
		printf("%c", out[i]);
	}
	printf("\n");
	
	return 0;
} 



//int main() {
//    char s[105];
//	int x, y;
////输入二进制字符串 和 代表的进制 x 以及要转换的进制 y
//    scanf("%s%d%d", &s, &x, &y);
//    int ans = 0;
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        ans = ans * x;
//        if (s[i] >= '0' && s[i] <= '9') ans += (s[i] - '0');
//        else ans += (s[i] - 'A') + 10;
//    }
//    char out[105];
//    int cnt = 0;
//    while (ans > 0) {
//        int w = (ans % y);
//        if (w < 10) out[cnt++] = w + '0';
//        else out[cnt++] = (w-10) + 'A';
//        ans /= y;
//    }
//    for (int i = cnt - 1; i >= 0; i--) {
//        printf("%c", out[i]);
//    }
//    printf("\n");
//    return 0;
//}
