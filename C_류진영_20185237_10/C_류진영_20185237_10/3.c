#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
	int td[][COL] = { {8,5,4},{2,7,6} };	//2차원 배열 선언
	int i = 0, j = 0, cnt = 0;

	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));	//순서대로 td 배열 전체 크기, td 배열의 첫번째 행, td 배열의 두번째 행 크기 출력
	printf("%u, %u, %u\n",td, td[0], td[1]);	//순서대로 td 배열의 주소, td 배열의 첫번째 행, td 배열의 두번째 행 주소 출력 td와 td[0]의 주소값은 동일하다
	printf("%u, %u, %u\n",td, td[0][0], td[1][0]);	//td의 주소, td[0][0]의 값, td[1][0]의 값 출력

	**td = 10;	//td[0][0] = 10
	*td[1] = 20;	//td[1][0] = 10

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d, ", *(*td + cnt), *(td[i] + j));	//td[0][cnt]와 td[i][j] 출력, 이때 td[0][cnt]를 의미하는 *(*td + cnt) 같은 경우 td[0][0]에서 td[1][2]까지 주소값이 1씩 증가하게 되기 때문에 cnt가 3 이상이 될 경우 td[1][cnt-3]을 의미한다 
		}
		puts("");
	}

	system("pause");

	return 0;
}