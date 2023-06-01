#include <stdio.h>

int main()
{
	int data = 100;
	char ch = 'A';
	int *ptrint = &data;
	char *ptrchar = &ch;
	printf("간접 참조 출력 : %d %c\n",*ptrint,*ptrchar);
	//data 와 ch를 참조한 ptrint 와 ptrchar을 출력하니 순서대로 data와 ch의 값이 출력된다.
	//100 A 출력

	*ptrint = 200;
	*ptrchar = 'B';
	//포인터 변수가 가리키는 변수들 즉, data와 ch 변수의 주소에 접근해서 값을 수정하는 것이기 때문에 data와 ch의 값이 200, B로 변한다. 
	printf("직접 참조 출력 : %d %c\n",data,ch);
	//200 B 출력

	return 0;
}