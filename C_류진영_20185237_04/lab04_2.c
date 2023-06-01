#include <stdio.h>

int main()
{
	int n=0,sum=0;
	
	while (1)	//무한반복
	{
		printf("정수 n을 입력하시오 :");
		scanf_s("%d",&n);
		if (n == -1)	//n==-1일때 break로 반복문 종료
			break;
		sum += n;	//n이 -1일시 sum에 -1이 안더해지게 break문 다음에 더하기 연산
	}

	printf("SUM = %d",sum);

	return 0;
}