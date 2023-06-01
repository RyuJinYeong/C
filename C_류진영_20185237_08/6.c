#include <stdio.h>

int main()
{
	int a[4] = { 1,3,6,10 };
	int *pa = &a[0];
	int *pb = &a[1];
	int *pc = &a;

	printf("pa%-4d%-4d%-4d%-4d\n",*(pa), *(pa+1), *(pa+2), *(pa+3));
	printf("pa%-4d%-4d%-4d%-4d\n", pa[0],pa[1],pa[2],pa[3]);
	printf("pb%-4d%-4d%-4d%-4d\n", *(pb-1), *(pb), *(pb + 1), *(pb + 2));
	printf("pb%-4d%-4d%-4d%-4d\n", pb[-1], pb[0], pb[1], pb[2]);
	printf("pc%-4d%-4d%-4d%-4d\n", *(pc), *(pc + 1), *(pc + 2), *(pc + 3));
	printf("pc%-4d%-4d%-4d%-4d\n", pc[0], pc[1], pc[2], pc[3]);

	return 0;
}