#include <stdio.h>

int main()
{
	int n, sum = 0, t;	//sum += 으로 더할것이니 0으로 초기화

	printf("정수 n값을 입력하시오 : ");

	scanf_s("%d", &n, 1);

	printf("=====while문을 통한 1~n까지의 합 출력=====\n");
	t = 1;
	while (t <= n)	// t 가 n이 될 때 까지
	{
		sum += t;	//sum = sum + t
		t++;
	}
	printf("1~n까지의 합 = %d\n", sum);

	printf("=====for문을 통한 1~n까지의 합 출력=====\n");
	sum = 0;	//for문에서 sum += t 연산을 새로 수행하니 0값을 넣어줌
	for (t = 1; t <= n; t++)	//1부터 n까지
	{
		sum += t;
	}
	printf("1~n까지의 합 = %d", sum);

	return 0;
}