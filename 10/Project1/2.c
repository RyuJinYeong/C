#include <stdio.h>
#define SIZE 3

int main()
{
	int i, sum = 0;
	int score[] = { 89,98,76 };

	printf("%2s %10s %6s\n", "÷��","�ּ�","���尪");
	for (i = 0; i < SIZE; i++)
		printf("%2d %10u %6d\n",i,(score+i), *(score + i));	//������� ÷��, �ּ�(i��° �ε����� �ּ�), ���尪(i��° �ε����� �ش�Ǵ� ��)�� ����Ѵ�. 
	puts("");	//����

	printf("%15s %u\n","score :", score);	//score�� �ּ� ��� (0��° �ε����� �ּҿ� ����)
	printf("%15s %u\n", "&score[0] :", &score[0]);		//score[0]�� �ּ� ��� (0��° �ε����� �ּ�)

	return 0;
}