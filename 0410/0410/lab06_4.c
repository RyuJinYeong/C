#include <stdio.h>

void change(int n,int type);

int main()
{
	int n,type;

	printf("10���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d",&n);	//10���� ���� �Է¹���

	printf("������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &type);	//������ �������� �Է¹���.

	printf("============================\n");

	printf("10���� -> %d���� = ",type);	
	if (type == 2 || type == 8 || type == 16)	//2����, 8����, 16������ ��ȯ
	{
		change(n, type);
		printf("\n");
	}
	else
		printf("�������� �ʴ� ������ȯ�� �Է��ϼ̽��ϴ�.\n");	//2, 8, 16������ �ƴҽ� ���

	return 0;
}

void change(int n, int type)	//���� ��ȯ �Լ�
{
	if (n > 0)
	{
		change(n/type, type);	//n�� ���������� ���� ������ (���� �ڸ���)�� ���� �Ű������� �������
		if(type != 16)
			printf("%d", n%type);	//16������ �ƴҶ� n�� ���������� ���� �������� ���
		else
		{
			if (n%type < 10)	//16�����϶� 10 �̻��� �� ����� ���� ���ǹ�
				printf("%d", n%type);
			else if (n%type == 10)
				printf("A");
			else if (n%type == 11)
				printf("B");
			else if (n%type == 12)
				printf("C");
			else if (n%type == 13)
				printf("D");
			else if (n%type == 14)
				printf("E");
			else if (n%type == 15)
				printf("F");
		}
	}
}