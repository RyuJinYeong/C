#include <stdio.h>
//����������
int main()
{
	int i = 20;
	int *pi = &i;	//������ ������ i�� �����ϴ� ������ ����
	int **dpi = &pi;	//������ ������ pi�� �����ϴ� ���� ������ ����

	printf("%p %p %p\n", &i, pi, *dpi);

	*pi = i + 2;	//22
	printf("%d %d %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;	//24
	printf("%d %d %d\n", i, *pi, **dpi);

	return 0;
}