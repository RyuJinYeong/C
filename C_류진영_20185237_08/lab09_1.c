#include <stdio.h>

int main()
{
	int ary[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr[10] = { NULL };
	int i,j=0;

	for (i = 0; i < 10; i++)
		ptr[i] = &ary[i];	//포인터 배열의 인덱스에 정수형 배열의 인덱스를 하나하나 참조시켜준다.


	printf("포인터 배열을 포인터만 사용하여 원소를 접근하여 출력\n");
	for (i = 0; i < 10; i++)
		printf("%d ", *(*(ptr +i)));	//포인터 배열의 인덱스 1부터 9까지 참조된 데이터를 출력 (배열의 인덱스를 포인터로 접근)

	printf("\n포인터 배열을 사용하여 모든 원소의 값을 5 증가 후 출력\n");
	for (i = 0; i < 10; i++)
	{
		*ptr[i] += 5;	//참조된 데이터의 값을 5씩 증가 시킨후 출력
		printf("%d ", *ptr[i]);
	}

	printf("\n배열을 직접 사용하여 모든 원소값을 5 증가 후 출력\n");
	for (i = 0; i < 10; i++)	
	{
		ary[i] += 5;	//i번째 인덱스의 값을 5씩 증가시키고 출력 (포인터 배열을 이용해 참조된 데이터를 5씩 증가 시켰던 값을 그대로 유지되어 초기값보다 10 증가된 값이 출력된다.)
		printf("%d ", ary[i]);
	}



	return 0;
}