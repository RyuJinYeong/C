#include <stdio.h>

int main()
{
	int *ptr1, *ptr2;
	int data = 4;
	ptr1 = NULL;
	ptr2 = &data;	//ptr2�� data ����
	printf("%u\n", ptr1);	//�ʱⰪ�� NULL�� �������־��� ������ 0�� ���
	printf("&ptr2 = %u\n",ptr2);//data�� �����߱� ������ data�� �ּҰ� ��µȴ�.
	printf("&data = %u\n",&data);// data�� �ּ� ���.
	printf("ptr2 = %u\n",*ptr2);// ���������� data�� �����߱� ������ �� ���� 4���
	printf("data = %u\n",data);// data�� �� ���

	return 0;
}