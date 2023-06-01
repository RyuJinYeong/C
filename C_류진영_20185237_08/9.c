#include <stdio.h>
//다중포인터
int main()
{
	int i = 20;
	int *pi = &i;	//정수형 변수인 i를 참조하는 포인터 변수
	int **dpi = &pi;	//포인터 변수인 pi를 참조하는 이중 포인터 변수

	printf("%p %p %p\n", &i, pi, *dpi);

	*pi = i + 2;	//22
	printf("%d %d %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;	//24
	printf("%d %d %d\n", i, *pi, **dpi);

	return 0;
}