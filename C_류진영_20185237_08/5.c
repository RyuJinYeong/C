#include <stdio.h>

int main()
{
	char *pc = (char *)100;
	int *pi = (int *)100;
	double *pd = (double *)100;
	//세 포인터 변수 모두 주소값을 100으로 지정해준다.
	printf("%-4u%-4u%-4u\n",pc-1,pc,pc+1);	//값이 1씩 차이남
	printf("%-4u%-4u%-4u\n", pi - 1, pi, pi + 1);	//값이 4씩 차이남
	printf("%-4u%-4u%-4u\n", pd - 1, pd, pd + 1);	//값이 8씩 차이남
	//
	return 0;
}