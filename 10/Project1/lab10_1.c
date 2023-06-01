#include <stdio.h>

int main()
{
	int ary[][5] = { 1,2,3,4,5,6,7,8,9,10 }, i,j;	//{{1,2,3,4,5}, {6,7,8,9,10}}
	int(*ptr)[5]=ary;
	
	printf("arr배열 출력\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-5d",ary[i][j]);	//ary 배열 출력
		}
		puts("");	//개행
	}
	printf("배열 포인터를 사용하여 모든 원소의 값을 5 증가\n");

	for(i=0; i<10; i++)
		(*ptr)[i] += 5;

	printf("포인터만을 사용하여 출력\n");
	for (i = 0; i < 10; i++)
	{
		printf("%-5d", **ptr+i);	//ptr이 참조한 배열 출력 (ary[0][0]을 참조한 **ptr부터 시작해서 주소값을 i씩 증가시키며 하나씩 출력한다. 이때 i는 ary배열의 열을 의미하는데 ary배열의 열 이상으로 i값이 증가하면 그 다음 행의 첫번째 열의 주소값을 의미한다.)
		if(i==4)
			puts("");	//개행
	}

	puts("");	//개행
	printf("인덱스만을 사용하여 출력 \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-5d", ary[i][j]);	//ary 배열 출력
		}
		puts("");	//개행
	}

	printf("포인터와 인덱스를 같이 사용하여 출력\n");
	for (i = 0; i < 10; i++)
	{
		printf("%-5d", (*ptr)[i]);	//**ptr+i과 같은 의미
		if (i == 4)
			puts("");	//개행
	}

	return 0;
}