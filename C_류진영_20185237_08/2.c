#include <stdio.h>

int main()
{
	int data = 100;
	int *ptrint;

	ptrint = &data;
	printf("������ �ּҰ� : %u\n", ptrint);	//�ּҰ��� ����ø��� �ٲ�
	printf("������ ������ ũ�� : %d\n",sizeof(ptrint));	//4Byte(�ּҰ��� ũ��) 

	return 0;
}