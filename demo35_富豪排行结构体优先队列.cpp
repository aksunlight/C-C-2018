#include"bits/stdc++.h"
using namespace std;
// ³¬Ê± 
//struct node{
//	string name;
//	double val;
//    friend bool operator < (node a,node b){
//    	return a.val < b.val;
//	}
//};
//
//int main(void){
//	int n, k;
//	node tmp;
//
//	while(cin >> n >> k){
//	    priority_queue<node> q;
//		for(int i = 0; i < n; i++){	
//			cin >> tmp.name >> tmp.val;
//			q.push(tmp);
//		}
//		for(int i = 0; i < k; i++){
//			tmp = q.top();
//			q.pop();
//			cout << tmp.name << ' ' << tmp.val << endl;
//		}
//		cout << endl; 
//	}
//	
//	return 0;
//}
//³¬Ê± 
bool cmp(double a, double b){
	return a > b;
}

int main(void){
	int n, k;
	string s;
	double val[1000];
	
	while(cin >> n >> k){
	    map<double, string> m;
	    for(int i = 0; i < n; i++){
		    cin >> s >> val[i];
		    m[val[i]] = s;
	    }
	    sort(val, val + n, cmp);
	    for(int i = 0; i < k; i++){
	    	cout << m[val[i]] << ' ' << val[i] << endl;
		}
		cout << endl;
	}
	
	return 0;
} 
