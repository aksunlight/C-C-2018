#include"stdlib.h"
#include"stdio.h"
#include"string.h"

void printfArray(int a[], int num){
	for(int i = 0; i < num; i++){
		printf("%d ", a[i]);
	} 
	printf("\n");
}
//��������Ϊ��������ʱ���˻�Ϊָ�� ������Ӧ�ô�������Ԫ�ظ��� 
//int a[10]---->int a[]--->int* a
//�ܽ᣺�������õ�ʱ�򣬰������׵�ַ��������Ч���ݳ��ȴ����������� 
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
	//�������� ��ӡ���� �������� ѡ������ 
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
//	} //˫��ѭ����˼�룬��ס�����ĸ����������ĸ� 
    printfArray(a, num);
//	for(int i = 0; i < 10; i++){
//		printf("%d ", a[i]);
//	} 
//	printf("\n");
//	system("pause");
	return 0;
}

