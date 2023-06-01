#include <stdio.h>
//포인터 배열 이용 1
int main()
{
	int *pary[3] = { NULL };
	int i, a = 10, b = 20, c = 30;

	pary[0] = &a;
	pary[1] = &b;
	pary[2] = &c;

	for (i = 0; i < 3; i++)
		printf("pAry[%d] = %d\n",i, *pary[i]);

	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", pary[i]);
		printf("%d, %d, %d\n", a, b, c);
	}

	return 0;
}