#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i;
	int *ptr[16];

	for (i = 0; i < 16; i++)
		ptr[i] = &a[i];

	printf("���� �� *ptr[16]�� ��\n");

	for (i = 0; i < 16; i++)
		printf("%d ",*ptr[i]);	//������ ptr�� �� �ε����� ������ ���� ����Ѵ�.

	printf("\n");

	while (1)
	{
		printf("������ �ε����� ���� �Է��Ͻÿ� (0~15) (-1 = ����) : ");
		scanf_s("%d",&i);

		if (i > 15 || i < -1)
		{
			printf("Ȯ���� �� �ִ� �ε����� ���� �ʰ� Ȥ�� �̸��Դϴ�.\n");
			continue;
		}

		if (i == -1)
			break;

		printf("ptr[%d]�� ���� �Է��Ͻÿ� : ",i);
		scanf_s("%d",ptr[i]);
	}

	printf("���� �� ptr�� ����Ͽ� ���\n");
	for (i = 0; i < 16; i++)
		printf("%d ",*ptr[i]);

	printf("\n���� �� a�� ����Ͽ� ���\n");
	for (i = 0; i < 16; i++)
		printf("%d ", a[i]);


	return 0;
}