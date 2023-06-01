#include <stdio.h>

int main()
{
	int n, a[1000], i,max=-10000000000;

	printf("입력 개수 N을 입력하시오 : ");
	scanf_s("%d",&n);

	for (i=0; i<n; i++)
	{
		printf("정수를 입력하시오 : ");	//정수를 입력받는다.
		scanf_s("%d",&a[i]);
		
		if (a[i] > max)	//입력받은 정수가 max보다 크면 max에 입력받은 값을 넣는다.
			max = a[i];
	}

	printf("최대값 : %d\n",max);		//max출력
}