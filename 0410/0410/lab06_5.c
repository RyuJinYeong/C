#include <stdio.h>

void avg(int a, int b, int c);

int main()
{
	int p[6], max = -1000000000, min = 1000000000,i,temp;

	printf("점수입력\n");
	printf("==========================================\n");
	printf("java1 / java2 / c1 / c2 / python1 / python2\n==> ");
	scanf_s("%d %d %d %d %d %d",&p[0], &p[1], &p[2], &p[3], &p[4], &p[5]);	//점수를 입력받음.
	printf("==========================================\n");
	printf("JAVA1, C_PROGRAMMING1, PYTHON1의 평균");
	avg(p[0], p[2], p[4]);	//avg 함수에 매개변수를 넣어줌 (평균을 출력해주는 함수)
	printf("JAVA2, C_PROGRAMMING2, PYTHON2의 평균");
	avg(p[1], p[3], p[5]);	//avg 함수에 매개변수를 넣어줌 (평균을 출력해주는 함수)
	printf("==========================================\n");	//각 과목별 점수 출력
	printf("\tJAVA1 = %d\n",p[0]);
	printf("\tJAVA2 = %d\n", p[1]);
	printf("\tC_PROGRAMMING1 = %d\n", p[2]);
	printf("\tC_PROGRAMMING2 = %d\n", p[3]);
	printf("\tPYTHON1 = %d\n", p[4]);
	printf("\tPYTHON2 = %d\n", p[5]);
	printf("==========================================\n");
	printf("가장 높은 점수 받은 과목 \t");
	for (i = 0; i <= 5; i++)	//최대값을 구해서 max에 넣고 최대값이 들어있는 인덱스를 temp에 저장
	{
		if (p[i] > max)
		{
			temp = i;
			max = p[i];
		}
	}
	if(temp == 0)	//최대값이 어느 과목이냐에 따라 다른 출력문 제시
		printf("\tJAVA1의 점수 = %d",p[0]);
	else if(temp == 1)
		printf("\tJAVA2의 점수 = %d", p[1]);
	else if (temp == 2)
		printf("\tC_PROGRAMMING1의 점수 = %d", p[2]);
	else if (temp == 3)
		printf("\tC_PROGRAMMING2의 점수 = %d", p[3]);
	else if (temp == 4)
		printf("\tPYTHON1의 점수 = %d", p[4]);
	else if (temp == 5)
		printf("\tPYTHON2의 점수 = %d", p[5]);

	printf("\n가장 낮은 점수 받은 과목 \t");
	for (i = 0; i <= 5; i++)	//최소값을 구해서 max에 넣고 최소값이 들어있는 인덱스를 temp에 저장
	{
		if (p[i] < min)
		{
			temp = i;
			min = p[i];
		}
	}
	if (temp == 0)	//최소값이 어느 과목이냐에 따라 다른 출력문 제시
		printf("\tJAVA1의 점수 = %d", p[0]);
	else if (temp == 1)
		printf("\tJAVA2의 점수 = %d", p[1]);
	else if (temp == 2)
		printf("\tC_PROGRAMMING1의 점수 = %d", p[2]);
	else if (temp == 3)
		printf("\tC_PROGRAMMING2의 점수 = %d", p[3]);
	else if (temp == 4)
		printf("\tPYTHON1의 점수 = %d", p[4]);
	else if (temp == 5)
		printf("\tPYTHON2의 점수 = %d", p[5]);
	printf("\n==========================================\n");

	return 0;
}

void avg(int a, int b, int c)	//평균을 구해서 출력하는 함수
{
	printf("평균 = %f\n",(a+b+c)/3.0);
}