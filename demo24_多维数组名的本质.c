#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(void){
	int a[3][5];
	int i, j, tmp = 0;
	int (*pArray)[5] = a;
	printf("a:5%d, a+1:%d", a, a+1);
//a:56487520, a+1:6487540
//a的本质是：a是一个数组指针常量，a+1往后跳一维数组长度 
//	for(i=0; i<3; i++){
//		for(j=0; j<5; j++){
//			a[i][j] = tmp++;
//		}
//	}
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d\n", a[i][j]);
		}
	}
  
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d\n", pArray[i][j]);
		}
	}
	
//	char array[10][30];
//	(array+1)  //相当于第i行的整个数组的地址，是二级指针 
//	*(array+i) //代表一维数组的首地址，相当于一维数组名 ，是一级指针 
//	*(array+i)+j //相当于第i行第j列的地址， &array[i][j] 
//	*(*(array+i)+j) //相当于array[i][j] 
	
	return 0;
}
