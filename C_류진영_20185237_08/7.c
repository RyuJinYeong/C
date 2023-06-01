#include <stdio.h>

int main()
{
	int a[4] = { 1,3,6,8 };
	int *pa = a;

	printf("%4d%4d%4d%4d\n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));
	printf("%4d%4d%4d%4d\n", pa[0], pa[1], pa[2], pa[3]);
	printf("%4d", ++*pa);
	printf("%4d", *++pa);
	printf("%4d", *pa++);
	printf("%4d", --*pa++);
	printf("%4d\n", (*pa)--);
	printf("%4d%4d%4d%4d\n", a[0], a[1], a[2], a[3]);

	return 0;
}