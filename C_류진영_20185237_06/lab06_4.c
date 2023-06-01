#include <stdio.h>

void change(int n,int type);

int main()
{
	int n,type;

	printf("10진수 값을 입력하시오 : ");
	scanf_s("%d",&n);	//10진수 값을 입력받음

	printf("변경할 진수를 입력하시오 : ");
	scanf_s("%d", &type);	//변경할 진수값을 입력받음.

	printf("============================\n");

	printf("10진수 -> %d진수 = ",type);	
	if (type == 2 || type == 8 || type == 16)	//2진수, 8진수, 16진수만 변환
	{
		change(n, type);
		printf("\n");
	}
	else
		printf("지원하지 않는 진수변환을 입력하셨습니다.\n");	//2, 8, 16진수가 아닐시 출력

	return 0;
}

void change(int n, int type)	//진수 변환 함수
{
	if (n > 0)
	{
		change(n/type, type);	//n을 진수값으로 나눈 나머지 (다음 자릿수)를 새로 매개변수로 집어넣음
		if(type != 16)
			printf("%d", n%type);	//16진수가 아닐때 n을 진수값으로 나눈 나머지를 출력
		else
		{
			if (n%type < 10)	//16진수일때 10 이상의 값 출력을 위한 조건문
				printf("%d", n%type);
			else if (n%type == 10)
				printf("A");
			else if (n%type == 11)
				printf("B");
			else if (n%type == 12)
				printf("C");
			else if (n%type == 13)
				printf("D");
			else if (n%type == 14)
				printf("E");
			else if (n%type == 15)
				printf("F");
		}
	}
}