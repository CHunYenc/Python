/*
07.���쪺XX�Q�ϥ�for�j����O���g�@�{���A���ϥΪ̯����L��J�@�Ӫ��פj��1000(����)�������N�A

���]xx�C�ѷ|�ťh�o��÷�l�@�b�����סA�м��g�{���p��ݻݭn��O�X�Ѫ��ɶ��A÷�l�����׷|�u��5���ءH
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0, d = 0;

	printf("�п�J�@�Ӫ��פj��1000(m)������� N :");
	scanf("%d", &sum);
	fflush(stdin);

	if (sum > 1000)
	{
		for (d = 1; d > 0; d++)
		{
			sum = sum / 2;
			printf("�� %d ���ܦ� %d (m)�A÷�l�����שҥH�b %d �ѷ|�u��5���� \n", d, sum, d);

			if (sum < 5)
			{
				break;
			}
		}
	}
	else
		printf("��J���~ \n");

	system("pause");
	return 0;
}
