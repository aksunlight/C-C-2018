#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(void){
	int a[3][5];
	int i, j, tmp = 0;
	int (*pArray)[5] = a;
	printf("a:5%d, a+1:%d", a, a+1);
//a:56487520, a+1:6487540
//a�ı����ǣ�a��һ������ָ�볣����a+1������һά���鳤�� 
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
//	(array+1)  //�൱�ڵ�i�е���������ĵ�ַ���Ƕ���ָ�� 
//	*(array+i) //����һά������׵�ַ���൱��һά������ ����һ��ָ�� 
//	*(array+i)+j //�൱�ڵ�i�е�j�еĵ�ַ�� &array[i][j] 
//	*(*(array+i)+j) //�൱��array[i][j] 
	
	return 0;
}
