#include<bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	while(cin >> s){
		if(s[0] >= 'a' && s[0] <= 'z')
		    s[0] = s[0] - 32;
		cout << s << ' ';
		char c = getchar();
		if(c == '\n')
		    cout << endl;
		    
	}
	return 0;
}
