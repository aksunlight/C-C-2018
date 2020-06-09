#include"bits/stdc++.h"
using namespace std;
//合并果子， 1 2 3 4 -- 1+2 = 3, 3+3 = 6, 6+4 = 10, 3+6+10 = 19
int main(void){
	int n, tmp, ans;
	priority_queue<int, vector<int>, greater<int> > q;
	
	while(cin >> n){
		ans = 0;
		for(int i = 0; i < n; i++){
			cin >> tmp;
			q.push(tmp);
		}
		while(q.size() > 1){
			int a = q.top();
			q.pop();
			int b = q.top();
			q.pop();
			q.push(a + b);
			ans += a + b;
		}
		q.pop();
		cout << ans << endl;
	} 
	
	return 0;
} 
