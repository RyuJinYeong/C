#include <stdio.h>

int main()
{
	int data = 100;
	char ch = 'A';
	int *ptrint = &data;
	char *ptrchar = &ch;
	printf("���� ���� ��� : %d %c\n",*ptrint,*ptrchar);
	//data �� ch�� ������ ptrint �� ptrchar�� ����ϴ� ������� data�� ch�� ���� ��µȴ�.
	//100 A ���

	*ptrint = 200;
	*ptrchar = 'B';
	//������ ������ ����Ű�� ������ ��, data�� ch ������ �ּҿ� �����ؼ� ���� �����ϴ� ���̱� ������ data�� ch�� ���� 200, B�� ���Ѵ�. 
	printf("���� ���� ��� : %d %c\n",data,ch);
	//200 B ���

	return 0;
}