#include <stdio.h>

int main()
{
	char *pc = (char *)100;
	int *pi = (int *)100;
	double *pd = (double *)100;
	//�� ������ ���� ��� �ּҰ��� 100���� �������ش�.
	printf("%-4u%-4u%-4u\n",pc-1,pc,pc+1);	//���� 1�� ���̳�
	printf("%-4u%-4u%-4u\n", pi - 1, pi, pi + 1);	//���� 4�� ���̳�
	printf("%-4u%-4u%-4u\n", pd - 1, pd, pd + 1);	//���� 8�� ���̳�
	//
	return 0;
}