/*
07:�мg�@�{�����ϥΪ̥i�H��J����@�ӥ|��ƪ���ơA�A�ѵ{����X��d��ơB
�ʦ�ơB�̦�ơB�Ӧ�ƪ��Ʀr�C
�Y�Ʀr�W�L�|��ƩΤp��|��ơA�h��O���~�T���C 
 �Ҧp:   ��J4976�A�h���
        �d���: 4
        �ʦ��: 9
        �̦��: 7
        �Ӧ��: 6
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	printf("��J�@�ӥ|��ƾ�ơG");
	scanf("%d", &a);
	fflush(stdin);

	if (a > 0)
	{
		printf("�d��ơG%d\n", a / 1000);
		printf("�ʦ�ơG%d\n", a % 1000 / 100);
		printf("�̦�ơG%d\n", a % 1000 % 100 / 10);
		printf("�Ӧ�ơG%d\n", a % 1000 % 100 % 10 / 1);
	}
	else
	{
		printf("���~�T��\n");
	}

	system("pause");
	return 0;
}
