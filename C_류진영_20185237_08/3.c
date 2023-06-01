#include <stdio.h>

int main()
{
	int *ptr1, *ptr2;
	int data = 4;
	ptr1 = NULL;
	ptr2 = &data;	//ptr2에 data 참조
	printf("%u\n", ptr1);	//초기값을 NULL로 지정해주었기 때문에 0이 출력
	printf("&ptr2 = %u\n",ptr2);//data를 참조했기 때문에 data의 주소가 출력된다.
	printf("&data = %u\n",&data);// data의 주소 출력.
	printf("ptr2 = %u\n",*ptr2);// 마찬가지로 data를 참조했기 때문에 그 값인 4출력
	printf("data = %u\n",data);// data의 값 출력

	return 0;
}