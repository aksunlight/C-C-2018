#include"bits/stdc++.h"
using namespace std;

struct Student{
	string name;
	int grade;
}stu[1005];

bool cmpUp(Student a, Student b){
	return a.grade > b.grade;
} 
bool cmpLow(Student a, Student b){
	return a.grade < b.grade;
}

int main(void){
	int n, order;
	while(cin >> n){
		cin >> order;
		for(int i = 0; i < n; i++){
			cin >> stu[i].name >> stu[i].grade;
		}
		if(order == 0){
			stable_sort(stu, stu + n, cmpUp);
		}
		else{
			stable_sort(stu, stu + n, cmpLow);
		}
		for(int i = 0; i < n; i++){
			cout << stu[i].name << " " << stu[i].grade << endl;
		}
	}
	
	return 0;
}
