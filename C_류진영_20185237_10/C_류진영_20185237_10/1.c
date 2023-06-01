#include <stdio.h>

int main()
{
	int a[] = { 8,2,8,1,3 };
	int *p = a;
	int ary[][4] = { 5,7,6,2,7,8,1,3 };
	int(*ptr)[4] = ary;

	printf("%2d, %2d\n", *(p+1), *(p+4));	//p�� a�迭�� �ּҰ��� ����־���. a �迭�� 1���� 4�� �ε����� ���� ��µ� (2,3)
	printf("%2d, %2d\n", p[0],p[4]);	//p�� ������ a�迭�� 0���� 4�� �ε����� �ش�Ǵ� ���� ��µ�
	printf("sizeof(a) = %d, sizeof(p) = %d\n",sizeof(a),sizeof(p));//a�� p ������ ũ�⸦ ��� p�� �ּҰ��� ��� ������ �����̴� 4, a�� ������ ������ 5���� ���� ������ �迭�̴� 20

	printf("%2d, %2d\n", **ary, **ptr++);
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));
	ptr = ary;
	printf("%2d, %2d\n", *(ary[1]+1), *(ptr[1] +1));
	printf("%2d, %2d\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3));
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(ary), sizeof(ptr));

	return 0;
}