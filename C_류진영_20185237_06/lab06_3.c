#include <stdio.h>

int main()
{
	int n, a[1000], i,max=-10000000000;

	printf("�Է� ���� N�� �Է��Ͻÿ� : ");
	scanf_s("%d",&n);

	for (i=0; i<n; i++)
	{
		printf("������ �Է��Ͻÿ� : ");	//������ �Է¹޴´�.
		scanf_s("%d",&a[i]);
		
		if (a[i] > max)	//�Է¹��� ������ max���� ũ�� max�� �Է¹��� ���� �ִ´�.
			max = a[i];
	}

	printf("�ִ밪 : %d\n",max);		//max���
}