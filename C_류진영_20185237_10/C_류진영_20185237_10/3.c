#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
	int td[][COL] = { {8,5,4},{2,7,6} };	//2���� �迭 ����
	int i = 0, j = 0, cnt = 0;

	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));	//������� td �迭 ��ü ũ��, td �迭�� ù��° ��, td �迭�� �ι�° �� ũ�� ���
	printf("%u, %u, %u\n",td, td[0], td[1]);	//������� td �迭�� �ּ�, td �迭�� ù��° ��, td �迭�� �ι�° �� �ּ� ��� td�� td[0]�� �ּҰ��� �����ϴ�
	printf("%u, %u, %u\n",td, td[0][0], td[1][0]);	//td�� �ּ�, td[0][0]�� ��, td[1][0]�� �� ���

	**td = 10;	//td[0][0] = 10
	*td[1] = 20;	//td[1][0] = 10

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d, ", *(*td + cnt), *(td[i] + j));	//td[0][cnt]�� td[i][j] ���, �̶� td[0][cnt]�� �ǹ��ϴ� *(*td + cnt) ���� ��� td[0][0]���� td[1][2]���� �ּҰ��� 1�� �����ϰ� �Ǳ� ������ cnt�� 3 �̻��� �� ��� td[1][cnt-3]�� �ǹ��Ѵ� 
		}
		puts("");
	}

	system("pause");

	return 0;
}