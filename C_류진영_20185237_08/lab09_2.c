#include <stdio.h>

int main()
{
	int a, *p;
	p = &a;

	printf("*p의 값을 입력하시오 : ");
	scanf_s("%d",p);	//포인터 변수 p의 값을 입력받는다. (참조된 a의 주소에 값을 입력 받으니 a값도 같이 변화)
	printf("*p = %d / a = %d\n",*p,a);

	printf("a의 값을 입력하시오 : ");
	scanf_s("%d", &a);	//a값을 입력받음
	printf("*p = %d / a = %d\n", *p, a);	//a값을 참조한 포인터변수 p값도 동일하게 출력된다.

	return 0;
}