#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i;
	int *ptr[16];

	for (i = 0; i < 16; i++)
		ptr[i] = &a[i];

	printf("변경 전 *ptr[16]의 값\n");

	for (i = 0; i < 16; i++)
		printf("%d ",*ptr[i]);	//변경전 ptr의 각 인덱스에 참조된 값을 출력한다.

	printf("\n");

	while (1)
	{
		printf("변경할 인덱스의 값을 입력하시오 (0~15) (-1 = 종료) : ");
		scanf_s("%d",&i);

		if (i > 15 || i < -1)
		{
			printf("확인할 수 있는 인덱스의 값을 초과 혹은 미만입니다.\n");
			continue;
		}

		if (i == -1)
			break;

		printf("ptr[%d]의 값을 입력하시오 : ",i);
		scanf_s("%d",ptr[i]);
	}

	printf("변경 후 ptr을 사용하여 출력\n");
	for (i = 0; i < 16; i++)
		printf("%d ",*ptr[i]);

	printf("\n변경 후 a를 사용하여 출력\n");
	for (i = 0; i < 16; i++)
		printf("%d ", a[i]);


	return 0;
}