#include <stdio.h>
#include <limits.h>	//INT_MIN 상수를 사용하기 위해 헤더파일 삽입

int main()
{
	int a, b, c, max = INT_MIN;	//max보다 큰 값이 있을 시 그 값을 최대값으로 할 예정이니 max 변수에는 최대한 낮은 수를 넣어준다.(INT_MIN 은 int형 변수의 최솟값)

	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d",&a,&b,&c);	//정수 세개 입력받음.


	if (max < a)
		max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;	//a부터 시작에서 순서대로 max와 값을 비교하고 max보다 큰 값이 나오면 그 값을 max 변수에 넣는다.

	printf("최대값 = %d\n",max);	//조건문이 끝나서 최대값이 저장된 max변수를 출력
}