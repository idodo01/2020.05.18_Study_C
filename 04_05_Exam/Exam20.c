// Exam20.c
// 20. ���ϴ� �������� �ܼ��� scanf�� �̿��Ͽ� �Է� �ް�,
// while���� ����Ͽ� ������ ���
// �� ������ ����ڰ� -1�� �Է��� ������ �ݺ��Ѵ�.

int iInput = 0; // ����� �Է� ����
while(iInput!=-1) {
int iCnt = 0;
printf("���ϴ� �������� �ܼ��� �Է����ּ���: ");
scanf("%d", &iInput); // & �ʼ�

while (iCnt != 9)
{
	iCnt++;
	printf("%d X %d = %d\n", iInput, iCnt, (iInput*iCnt));

}
}