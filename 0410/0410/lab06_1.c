#include <stdio.h>

int main()
{
	int array[100], cnt = 0, sum = 0, i, j, temp;
	float avg;

	while (1)	//무한반복
	{
		printf("값을 입력하시오 : (음수 입력시 종료) ");
		scanf_s("%d",&array[cnt]);	//배열에 수를 입력받는다. cnt(0)부터 반복이 1회 될때마다 cnt가 1씩 늘어남.

		if (array[cnt] < 0)	//입력받은 수가 음수라면 입력 종료를 출력하고 break;
		{
			printf("입력 종료\n");
			break;
		}

		cnt++;	//cnt +1
	}
	
	for (i = 0; i < cnt; i++)	//0부터 cnt까지 
	{
		sum += array[i];	//입력받은 수 들의 합
		printf("%d ",array[i]);	//입력받은 수를 하나씩 출력
	}
	avg = sum / cnt;	//입력받은 수의 평균을 구함
	printf("평균 = %.2f\n",avg);	//평균값 출력 (소수점 아래 둘째자리까지)

	printf("\t정렬 전\n");
	
	for (i = 0; i < cnt; i++)
	{
		printf(" %d ", array[i]);	//정렬 전의 입력받은 수 출력
	}

	printf("\n\t내림차순 정렬 후\n");

	for (i = 0; i < cnt; i++)	//내림차순 정렬 반복문
	{
		for (j = i; j < cnt; j++)
		{
			if (array[i] < array[j])	//i 번째가 j번째보다 작으면 둘을 바꿔준다
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf(" %d ", array[i]);
	}
	puts("\n");

	while (1)
	{
		printf("등수를 확인하고 싶은 점수를 입력하시오 : (음수 입력시 종료) ");
		scanf_s("%d", &temp);	//등수를 확인하고 싶은 점수를 입력받음

		if (temp < 0)	//점수가 음수일시 확인 종료 출력과 함께 프로그램 종료
		{
			printf("확인 종료\n");
			break;
		}
		else
		{
			for (i=0; i<cnt; i++)	//점수가 음수가 아닐시 내림차순으로 정렬 된 배열을 뒤져보며 일치하는 점수가 있다면 해당 점수가 저장된 인덱스 + 1 등으로 출력
			{
				if (array[i] == temp)
				{
					printf("%d의 등수 = %d등\n", temp, i + 1);
				}
			}
		}
	}

	return 0;
}