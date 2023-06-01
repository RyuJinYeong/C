#include <stdio.h>
#define SIZE 3

int main()
{
	int i, sum = 0;
	int score[] = { 89,98,76 };

	printf("%2s %10s %6s\n", "첨자","주소","저장값");
	for (i = 0; i < SIZE; i++)
		printf("%2d %10u %6d\n",i,(score+i), *(score + i));	//순서대로 첨자, 주소(i번째 인덱스의 주소), 저장값(i번째 인덱스에 해당되는 값)을 출력한다. 
	puts("");	//개행

	printf("%15s %u\n","score :", score);	//score의 주소 출력 (0번째 인덱스의 주소와 동일)
	printf("%15s %u\n", "&score[0] :", &score[0]);		//score[0]의 주소 출력 (0번째 인덱스의 주소)

	return 0;
}