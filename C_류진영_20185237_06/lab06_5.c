#include <stdio.h>

void avg(int a, int b, int c);

int main()
{
	int p[6], max = -1000000000, min = 1000000000,i,temp;

	printf("�����Է�\n");
	printf("==========================================\n");
	printf("java1 / java2 / c1 / c2 / python1 / python2\n==> ");
	scanf_s("%d %d %d %d %d %d",&p[0], &p[1], &p[2], &p[3], &p[4], &p[5]);	//������ �Է¹���.
	printf("==========================================\n");
	printf("JAVA1, C_PROGRAMMING1, PYTHON1�� ���");
	avg(p[0], p[2], p[4]);	//avg �Լ��� �Ű������� �־��� (����� ������ִ� �Լ�)
	printf("JAVA2, C_PROGRAMMING2, PYTHON2�� ���");
	avg(p[1], p[3], p[5]);	//avg �Լ��� �Ű������� �־��� (����� ������ִ� �Լ�)
	printf("==========================================\n");	//�� ���� ���� ���
	printf("\tJAVA1 = %d\n",p[0]);
	printf("\tJAVA2 = %d\n", p[1]);
	printf("\tC_PROGRAMMING1 = %d\n", p[2]);
	printf("\tC_PROGRAMMING2 = %d\n", p[3]);
	printf("\tPYTHON1 = %d\n", p[4]);
	printf("\tPYTHON2 = %d\n", p[5]);
	printf("==========================================\n");
	printf("���� ���� ���� ���� ���� \t");
	for (i = 0; i <= 5; i++)	//�ִ밪�� ���ؼ� max�� �ְ� �ִ밪�� ����ִ� �ε����� temp�� ����
	{
		if (p[i] > max)
		{
			temp = i;
			max = p[i];
		}
	}
	if(temp == 0)	//�ִ밪�� ��� �����̳Ŀ� ���� �ٸ� ��¹� ����
		printf("\tJAVA1�� ���� = %d",p[0]);
	else if(temp == 1)
		printf("\tJAVA2�� ���� = %d", p[1]);
	else if (temp == 2)
		printf("\tC_PROGRAMMING1�� ���� = %d", p[2]);
	else if (temp == 3)
		printf("\tC_PROGRAMMING2�� ���� = %d", p[3]);
	else if (temp == 4)
		printf("\tPYTHON1�� ���� = %d", p[4]);
	else if (temp == 5)
		printf("\tPYTHON2�� ���� = %d", p[5]);

	printf("\n���� ���� ���� ���� ���� \t");
	for (i = 0; i <= 5; i++)	//�ּҰ��� ���ؼ� max�� �ְ� �ּҰ��� ����ִ� �ε����� temp�� ����
	{
		if (p[i] < min)
		{
			temp = i;
			min = p[i];
		}
	}
	if (temp == 0)	//�ּҰ��� ��� �����̳Ŀ� ���� �ٸ� ��¹� ����
		printf("\tJAVA1�� ���� = %d", p[0]);
	else if (temp == 1)
		printf("\tJAVA2�� ���� = %d", p[1]);
	else if (temp == 2)
		printf("\tC_PROGRAMMING1�� ���� = %d", p[2]);
	else if (temp == 3)
		printf("\tC_PROGRAMMING2�� ���� = %d", p[3]);
	else if (temp == 4)
		printf("\tPYTHON1�� ���� = %d", p[4]);
	else if (temp == 5)
		printf("\tPYTHON2�� ���� = %d", p[5]);
	printf("\n==========================================\n");

	return 0;
}

void avg(int a, int b, int c)	//����� ���ؼ� ����ϴ� �Լ�
{
	printf("��� = %f\n",(a+b+c)/3.0);
}