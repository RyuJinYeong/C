#include <stdio.h>

int main()
{
	int type = 1, size, i, j, k;	//while문 조건 때문에 type을 1로 초기화

	while (type != 0)	//type이 0이 아닐 동안 계속 반복
	{
		printf("원하는 값을 입력하시오 : 삼각형(1) , 역삼각형(2) , 사다리꼴(3) , 종료(0) : ");
		scanf_s("%d", &type);	//type값을 입력받음

		if (type == 1)	//type이 1이라면
		{
			printf("삼각형의 크기를 입력하세요 : ");
			scanf_s("%d", &size);	//size를 입력받음
			for (i = 0; i <= size; i++)	//size+1 만큼의 높이
			{
				for (j = i; j < size; j++)	//삼각형 좌측의 공백 생성(i부터 size까지로 한줄마다 공백 수 감소)
				{
					printf(" ");
				}

				for (k = 0; k <= i*2; k++)	//삼각형을 이루는 * 출력 (k=0부터 i*2까지로 한개로 시작해서 한줄마다 별 개수가 2개씩 증가)
				{
					printf("*");
				}
				printf("\n");	//넥스트라인
			}
		}
		else if (type == 2)	//type이 2이라면
		{
			printf("삼각형의 크기를 입력하세요 : ");
			scanf_s("%d", &size);	//size를 입력받음
			for (i = size; i >= 0; i--)	//size +1 만큼의 높이 (역삼각형이기 때문에 윗변이 제일 별의 수가 많다. 이때 별을 찍는 for문의 조건을 달기 위해 i=size 로 초기화후 for문 시작)
			{
				for (k = 0; k < size-i; k++) //k=0부터 size-1까지 공백 출력
				{
					printf(" ");
				}

				for (j=0; j <= i * 2; j++) //j=0부터 i*2까지 별 출력
				{
					printf("*");
				}

				printf("\n"); //넥스트라인
			}
		}
		else if (type == 3)	//type이 3이라면
		{
			printf("삼각형의 크기를 입력하세요 : ");
			scanf_s("%d", &size);	//size를 입력받음
			for (i = 0; i < 4; i++)	//높이 =4
			{
				for (j = i; j < 4; j++)	//좌측의 공백 출력 (j=i부터 4까지)
				{
					printf(" ");
				}

				for (k = 0-i*2; k < size; k++)	//0-i*2(한줄마다 출력되는 별이 두개씩 늘어나게 하기 위함)부터 size까지 별 출력 
				{
					printf("*");
				}
				printf("\n");//넥스트라인
			}
		}
		else if(type == 0)	//type이 0이라면
			printf("프로그램을 종료합니다.\n");
	}
}