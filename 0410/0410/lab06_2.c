#include <stdio.h>

int main()
{
	int n, i = 1000000000;	//int형의 최대값과 같은 자릿수의 10의 배수를 i에 넣어준다

	printf("양의 정수를 입력하시오 : ");
	scanf_s("%d",&n);	//양의 정수를 입력받는다.

	while(1)	//무한반복
	{
		if (n >= i)	//n이 i보다 커지면 반복문 종료
		{
			break;
		}

		i = i / 10;	//i의 자릿수를 하나 줄인다.
	}
	
	while(1)	//무한반복
	{
		printf("%d\n",n/i);	// n을 i로 나눈 값을 출력
		n = n - (n/i)*i;	//n을 i로 나눈값 *i를 n에서 뺀다 (가장 높은 자리 제거)

		if (i == 1)	//i가 1이 되면 반복문 종료
			break;

		i = i / 10;	//i를 한자리 낮춘다
	}
}