#include <stdio.h>

int main()
{
	int n, sum=1, t;	//나중에 sum *= 연산을 수행하니 sum=1로 초기화

	printf("정수 n을 입력하시오 : ");
	scanf_s("%d",&n);

	for (t = 1; t <= n; t++)	//1에서 n까지 반복 수행
	{
		sum *= t;	// sum = sum * t
	}

	printf("n! = %d",sum);

	return 0;
}