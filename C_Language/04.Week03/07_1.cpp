/*
07.���쪺xx�Q�ϥ�for�j����O���g�@�{���A���ϥΪ̯����L��J�@�Ӫ��פj��1000(����)�������N�A

���]xx�C�ѷ|�ťh�o��÷�l�@�b�����סA�м��g�{���p��ݻݭn��O�X�Ѫ��ɶ��A÷�l�����׷|�u��5���ءH

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0, i = 0, sum = 0;

	printf("�ϥΪ̯����L��J�@�Ӫ��פj��1000(����)�������N :");
	scanf("%d", &n);
	fflush(stdin);

	if (n > 1000)
	{
		for (i = n; i > 5; sum++)
		{
			i = i / 2;
			printf("�� %d �� , ���� %d (m) \n", sum + 1, i);
		}
	}

	else
		printf("��J���~ ~ \n");

	system("pause");
	return 0;
}
