/*
	�ζ� ��÷ �Ǻ���
		- �Լ����� 1���ȣ �迭�� ���Ź�ȣ �迭�� ���� �ް�,
		  ��ġ�ϴ� ������ ������ ��ȯ�ϱ�
*/

#include <stdio.h>

int CheckLotto( int* iArrLotto, int* iArrMy );

void main()
{
	int iDreamNumber[6] = {5, 8, 10, 23, 30, 42};	// 1�� ��ȣ �迭
	int iMyNumber[6]	= {1, 5, 7, 21, 23, 30};	// ���� ��ȣ �迭
	int iCount			= 0;						// ��ġ�ϴ� ���� ���� 
	
	iCount = CheckLotto( iDreamNumber, iMyNumber );

	printf("��ġ�ϴ� ������ %d�� �Դϴ�.\n", iCount);
}


int CheckLotto( int* iArrLotto, int* iArrMy )
{
	int Count = 0;
	for (int i = 0; i < sizeof(iArrLotto); i++)
	{
		for (int j = 0; j < sizeof(iArrMy); j++)
		{

		}
	}
	return Count;
}