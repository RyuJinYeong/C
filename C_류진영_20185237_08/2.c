#include <stdio.h>

int main()
{
	int data = 100;
	int *ptrint;

	ptrint = &data;
	printf("십진수 주소값 : %u\n", ptrint);	//주소값은 실행시마다 바뀜
	printf("포인터 변수의 크기 : %d\n",sizeof(ptrint));	//4Byte(주소값의 크기) 

	return 0;
}