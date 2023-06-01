#include <stdio.h>

int main()
{
	int n,sum=0,t=1;	//sum = 0으로 초기화, t부터 sum에 더할테니 t도 1로 초기화(sum=sum+t 연산을 해야하니 두 수 모두 초기화 필요)

	printf("정수 n을 입력하시오 : ");
	scanf_s("%d",&n);	//정수 n을 입력받음.

	while (t<=n)	//t가 n이 될때까지 반복
	{
		if(t%3 != 0)	//3의 배수가 아닐시
			sum += t;	//sum에 t를 더한다.
		t++;	//t= t+1
	}

	printf("1~n까지 3의 배수를 제외한 합 = %d",sum);	//sum 출력
}