#include <stdio.h>

int main()
{
	int n, sum = 0, t;	//sum += ���� ���Ұ��̴� 0���� �ʱ�ȭ

	printf("���� n���� �Է��Ͻÿ� : ");

	scanf_s("%d", &n, 1);

	printf("=====while���� ���� 1~n������ �� ���=====\n");
	t = 1;
	while (t <= n)	// t �� n�� �� �� ����
	{
		sum += t;	//sum = sum + t
		t++;
	}
	printf("1~n������ �� = %d\n", sum);

	printf("=====for���� ���� 1~n������ �� ���=====\n");
	sum = 0;	//for������ sum += t ������ ���� �����ϴ� 0���� �־���
	for (t = 1; t <= n; t++)	//1���� n����
	{
		sum += t;
	}
	printf("1~n������ �� = %d", sum);

	return 0;
}