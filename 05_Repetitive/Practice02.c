/*
	1부터 200까지 3과4의 공배수를 더하다가,
	더한 수가 1000을 초과한 경우 반복문을 빠져나오고
	더해진 수와 빠져나올 때의 수를 구하기
	
	[출력결과]
	빠져나온 수 : 156
	더한 수 : 1092
*/
#include <stdio.h>

void main()
{
	int i = 0; // 1 ~ 200까지 반복할 변수
	int iSum = 0; // 누적할 변수


	for (i = 1; i < 201; i++) // 1부터 200까지 반복
	{
		if ((i % 3 == 0) && (i % 4 == 0)) // 3과 4의 공배수 구하기
		{
			// 3과 4의 공배수 누적
			iSum += i;
		}
		if (iSum > 1000) break; // 1000을 초과한 경우 반복문 탈출
	}

	printf("빠져나온 수 : %d\n", i);
	printf("더한 수 : %d\n", iSum);
}