#include <stdio.h>
#include <limits.h>	//INT_MIN ����� ����ϱ� ���� ������� ����

int main()
{
	int a, b, c, max = INT_MIN;	//max���� ū ���� ���� �� �� ���� �ִ밪���� �� �����̴� max �������� �ִ��� ���� ���� �־��ش�.(INT_MIN �� int�� ������ �ּڰ�)

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d",&a,&b,&c);	//���� ���� �Է¹���.


	if (max < a)
		max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;	//a���� ���ۿ��� ������� max�� ���� ���ϰ� max���� ū ���� ������ �� ���� max ������ �ִ´�.

	printf("�ִ밪 = %d\n",max);	//���ǹ��� ������ �ִ밪�� ����� max������ ���
}