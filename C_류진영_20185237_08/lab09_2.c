#include <stdio.h>

int main()
{
	int a, *p;
	p = &a;

	printf("*p�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d",p);	//������ ���� p�� ���� �Է¹޴´�. (������ a�� �ּҿ� ���� �Է� ������ a���� ���� ��ȭ)
	printf("*p = %d / a = %d\n",*p,a);

	printf("a�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);	//a���� �Է¹���
	printf("*p = %d / a = %d\n", *p, a);	//a���� ������ �����ͺ��� p���� �����ϰ� ��µȴ�.

	return 0;
}