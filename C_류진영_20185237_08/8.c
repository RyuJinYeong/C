#include <stdio.h>
//������ ���� ����ȯ
int main()
{
	char c[4] = { 'A', '\0', '\0' , '\0' };
	int *pi = (int *)c;

	printf("%d %c\n",(int)c[0],c[0]);
	printf("%d %c\n",*pi,(char)*pi);

	return 0;
}