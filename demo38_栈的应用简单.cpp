#include"bits/stdc++.h"
using namespace std;

int main(void){
	stack<int> s;
	s.push(1);
	s.push(10);
	s.push(7);
	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	
	return 0;
}
