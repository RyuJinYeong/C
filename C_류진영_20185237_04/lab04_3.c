#include <stdio.h>

int main()
{
	int n, sum=1, t;	//���߿� sum *= ������ �����ϴ� sum=1�� �ʱ�ȭ

	printf("���� n�� �Է��Ͻÿ� : ");
	scanf_s("%d",&n);

	for (t = 1; t <= n; t++)	//1���� n���� �ݺ� ����
	{
		sum *= t;	// sum = sum * t
	}

	printf("n! = %d",sum);

	return 0;
}