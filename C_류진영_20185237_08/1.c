#include <stdio.h>

int main()
{
	int input;

	printf("정수 입력 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n",input);
	printf("주소값 : %u(십진수), %p(16진수)\n",&input,&input);
	printf("주소값 : %d(십진수), %#p(16진수)\n",&input,&input);
	printf("주소값 크기 : %d\n", sizeof(&input));	//포인터 변수는 가리키는 변수의 자료형에 관계없이 크기가 모두 4바이트(주소의 값의 크기 = 4Byte)

	return 0;
}