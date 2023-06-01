#include <stdio.h>

int main()
{
	int a[] = { 8,2,8,1,3 };
	int *p = a;
	int ary[][4] = { 5,7,6,2,7,8,1,3 };
	int(*ptr)[4] = ary;

	printf("%2d, %2d\n", *(p+1), *(p+4));	//p에 a배열의 주소값을 집어넣었다. a 배열의 1번과 4번 인덱스의 값이 출력됨 (2,3)
	printf("%2d, %2d\n", p[0],p[4]);	//p가 참조한 a배열의 0번과 4번 인덱스에 해당되는 값이 출력됨
	printf("sizeof(a) = %d, sizeof(p) = %d\n",sizeof(a),sizeof(p));//a와 p 변수의 크기를 출력 p는 주소값을 담는 포인터 변수이니 4, a는 정수형 데이터 5개를 담은 정수형 배열이니 20

	printf("%2d, %2d\n", **ary, **ptr++);
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));
	ptr = ary;
	printf("%2d, %2d\n", *(ary[1]+1), *(ptr[1] +1));
	printf("%2d, %2d\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3));
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(ary), sizeof(ptr));

	return 0;
}