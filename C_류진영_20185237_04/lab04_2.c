#include <stdio.h>

int main()
{
	int n=0,sum=0;
	
	while (1)	//���ѹݺ�
	{
		printf("���� n�� �Է��Ͻÿ� :");
		scanf_s("%d",&n);
		if (n == -1)	//n==-1�϶� break�� �ݺ��� ����
			break;
		sum += n;	//n�� -1�Ͻ� sum�� -1�� �ȴ������� break�� ������ ���ϱ� ����
	}

	printf("SUM = %d",sum);

	return 0;
}