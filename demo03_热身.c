#include"stdlib.h"
#include"stdio.h"
#include"string.h"
//�������ֺ�����һ���� 
//��c���鳡����ʵ�λ�е�Ĵ����βΣ��β��뺯����
//�ı�����û������ģ�ֻ���βξ��ж�������Զ��� 
void printfArray01(int a[10], int num){
	for(int i = 0; i < num; i++){
		printf("%d ", a[i]);
	} 
	printf("\n");
}
void printfArray02(int a[], int num){
	for(int i = 0; i < num; i++){
		printf("%d ", a[i]);
	} 
	printf("\n");
}
void printfArray(int *a, int num){
	for(int i = 0; i < num; i++){
		printf("%d ", a[i]);
	} 
	printf("\n");
}

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
	
    int a[10] = {1,3,4,5,65,76,7,34,4,32};
	int num = 10;

	printfArray(a, num);

    sortArray(a, num); 

    printfArray(a, num);

	return 0;
}

