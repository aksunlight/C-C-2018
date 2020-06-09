#include"stdlib.h"
#include"stdio.h"
#include"string.h"

void printfArray(int a[], int num){
	for(int i = 0; i < num; i++){
		printf("%d ", a[i]);
	} 
	printf("\n");
}
//当数组作为函数参数时会退化为指针 ，所以应该传送数组元素个数 
//int a[10]---->int a[]--->int* a
//总结：函数调用的时候，把数组首地址和数组有效数据长度传给被调函数 
void sortArray(int a[], int num){
	int tmp;
	for(int i = 0; i < num; i++){
		for(int j=i+1; j < num; j++){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}	
}

int main(void){
	//定义数组 打印数组 数组排序 选择排序 
	int a[10] = {1,3,4,5,65,76,7,34,4,32};
	int num = 10;
//	int tmp;
	printfArray(a, num);
//	for(int i = 0; i < 10; i++){
//		printf("%d ", a[i]);
//	} 
//	printf("\n");
    sortArray(a, num); 
//	for(int i = 0; i < 10; i++){
//		for(int j=i+1; j < 10; j++){
//			if(a[i]>a[j]){
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//			}
//		}
//	} //双层循环的思想，按住外面哪个，走里面哪个 
    printfArray(a, num);
//	for(int i = 0; i < 10; i++){
//		printf("%d ", a[i]);
//	} 
//	printf("\n");
//	system("pause");
	return 0;
}

