/*
04:�Шϥ�if��if-else���O�g�@�ӵ{���A�����ϥΪ̥i����L��J�ƭ�1~12�A
�{�������]�t�H�U������P�_�A��ϥΪ̿�J�@�ӼƦr��A
�{���|�L�X�۹������^��r�A�Y�W�X�d��h�L�X���~�T���C
�Ҧp�G
     ��J�G   1           2          3      �K       12
     ��X�GJANUARY    FEBRUARY     MARCH    �K    DECEMBER

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("�п�J��L 1 ~ 12 �G");
	scanf("%d", &a);
	fflush(stdin);

	if (a <= 12 && a > 0)
	{
		if (a == 1)
			printf("JANUARY\n");
		else if (a == 2)
			printf("FEBRUARY\n");
		else if (a == 3)
			printf("MARCH\n");
		else if (a == 4)
			printf("APRIL\n");
		else if (a == 5)
			printf("MAY\n");
		else if (a == 6)
			printf("JUNE\n");
		else if (a == 7)
			printf("JULY\n");
		else if (a == 8)
			printf("AUGUST\n");
		else if (a == 9)
			printf("SEPTEMBER\n");
		else if (a == 10)
			printf("OCTOBER\n");
		else if (a == 11)
			printf("NOVEMBER\n");
		else if (a == 12)
			printf("DECEMBER\n");
	}

	else
		printf("���~�T���C\n");

	system("pause");
	return 0;
}
