#include <stdio.h>

int main()
{
	int input;

	printf("���� �Է� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n",input);
	printf("�ּҰ� : %u(������), %p(16����)\n",&input,&input);
	printf("�ּҰ� : %d(������), %#p(16����)\n",&input,&input);
	printf("�ּҰ� ũ�� : %d\n", sizeof(&input));	//������ ������ ����Ű�� ������ �ڷ����� ������� ũ�Ⱑ ��� 4����Ʈ(�ּ��� ���� ũ�� = 4Byte)

	return 0;
}