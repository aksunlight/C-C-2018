//排序类问题一个 sort 走天下
//sort 函数本质上是封装了快速排序，
//但是它做了一些优化，所以你只管用它就行了 
//复杂度为： nlogn
//所以 sort 可以对最大 30W 个左右的元素进行排序，可以应对考研机试中的 99.9%的情况。
//sort()函数:依次传入三个参数，要排序区间的起点，要排序区间的终点+1，比较函数。比较
//函数可以不填，则默认为从小到大排序。
//*****注意sort不稳定 
#include<bits/stdc++.h>
using namespace std;

bool cmp(int x, int y){
	return x > y;
} 

int main(void){
	int a[7] = {4, 2, 5, 9, 0, 1, 6};
	sort(a, a+7); //默认从小到大
	sort(a, a+7, cmp); //改为从大到小 
	for(int i = 0; i < 7; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
