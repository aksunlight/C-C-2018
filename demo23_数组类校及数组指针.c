#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(void){
//	int i = 0;
//	int a[10] = {1, 2}; //������ʼ��Ϊ0
//	int b[] = {1, 2}; 
//	int c[20] = {0};
	//����һ���������� 
	typedef int MyArrayType[5];
	//����һ������ָ����У 
	typedef int(*MyPArrayType)[5];
	
	int i;
	MyArrayType myArray; //�ȼ���int myArray[5]
	//������һ����ָ���������͵�ָ����� 
	MyArrayType* pArray = NULL;
	pArray = &myArray; 
	
	for(i=0; i<5; i++){
		(*pArray)[i] = i + 1;
	}
	for(i=0; i<5; i++){
		printf("%d\n", (*pArray)[i]);
	}
	
	
	
	
	
	MyPArrayType myPoint;
	int b[5];
	myPoint = &b;
	
	for(i=0; i<5; i++){
		(*myPoint)[i] = i + 1;
	}
	for(i=0; i<5; i++){
		printf("%d\n", (*myPoint)[i]);
	}
	
	
	
	
	
	
	//���հ棬ֱ�Ӷ���ָ�����
	int(*pMyArray)[5]; //���߱����������ĸ��ֽ��ڴ� 
	 
	return 0;
}
