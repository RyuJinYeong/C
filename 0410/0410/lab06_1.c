#include <stdio.h>

int main()
{
	int array[100], cnt = 0, sum = 0, i, j, temp;
	float avg;

	while (1)	//���ѹݺ�
	{
		printf("���� �Է��Ͻÿ� : (���� �Է½� ����) ");
		scanf_s("%d",&array[cnt]);	//�迭�� ���� �Է¹޴´�. cnt(0)���� �ݺ��� 1ȸ �ɶ����� cnt�� 1�� �þ.

		if (array[cnt] < 0)	//�Է¹��� ���� ������� �Է� ���Ḧ ����ϰ� break;
		{
			printf("�Է� ����\n");
			break;
		}

		cnt++;	//cnt +1
	}
	
	for (i = 0; i < cnt; i++)	//0���� cnt���� 
	{
		sum += array[i];	//�Է¹��� �� ���� ��
		printf("%d ",array[i]);	//�Է¹��� ���� �ϳ��� ���
	}
	avg = sum / cnt;	//�Է¹��� ���� ����� ����
	printf("��� = %.2f\n",avg);	//��հ� ��� (�Ҽ��� �Ʒ� ��°�ڸ�����)

	printf("\t���� ��\n");
	
	for (i = 0; i < cnt; i++)
	{
		printf(" %d ", array[i]);	//���� ���� �Է¹��� �� ���
	}

	printf("\n\t�������� ���� ��\n");

	for (i = 0; i < cnt; i++)	//�������� ���� �ݺ���
	{
		for (j = i; j < cnt; j++)
		{
			if (array[i] < array[j])	//i ��°�� j��°���� ������ ���� �ٲ��ش�
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf(" %d ", array[i]);
	}
	puts("\n");

	while (1)
	{
		printf("����� Ȯ���ϰ� ���� ������ �Է��Ͻÿ� : (���� �Է½� ����) ");
		scanf_s("%d", &temp);	//����� Ȯ���ϰ� ���� ������ �Է¹���

		if (temp < 0)	//������ �����Ͻ� Ȯ�� ���� ��°� �Բ� ���α׷� ����
		{
			printf("Ȯ�� ����\n");
			break;
		}
		else
		{
			for (i=0; i<cnt; i++)	//������ ������ �ƴҽ� ������������ ���� �� �迭�� �������� ��ġ�ϴ� ������ �ִٸ� �ش� ������ ����� �ε��� + 1 ������ ���
			{
				if (array[i] == temp)
				{
					printf("%d�� ��� = %d��\n", temp, i + 1);
				}
			}
		}
	}

	return 0;
}