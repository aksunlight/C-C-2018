/*
#include"bits/stdc++.h"
using namespace std;

struct node{
	string num;
	string name;
	string sex;
	int age;
};

int main(void){
	int n, m;
	map<string, node> p;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			node tmp; 
			cin >> tmp.num >> tmp.name >> tmp.sex >>tmp.age;
			p[tmp.num] = tmp;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			string num;
			cin >> num;
			if(p.find(num) != p.end()){
				cout << p[num].num << ' ' << p[num].name << ' ' << p[num].sex << p[num].age << endl;
			}
			else{
				cout << "No Answer" << endl;
			}
		}
	}
	return 0
}


#include"bits/stdc++.h"
using namespace std;

struct node{
	string mun;
	string name;
	string sex;
	int age;
};
*/
#include"bits/stdc++.h"
using namespace std;

struct node{
	string mun;
	string name;
	string sex;
	int age;
};

int main(void){
	int n, m;
	map<string, node> p;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			node tmp;
			cin >> tmp.mun >> tmp.name >> tmp.sex >> tmp.age;
			p[tmp.mun] = tmp;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			string s;
			cin >> s;
			if(p.find(s) != p.end()){
				cout << p[s].mun << ' ' << p[s].name << ' ' << p[s].sex << ' ' << p[s].age << endl;
			}
			else{
				cout << "No Answer!";
			}
		}
	}
	
	return 0;
}


