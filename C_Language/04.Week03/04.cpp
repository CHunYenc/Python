/*
04.���@��~�إX����XX�Q���D,�p�G��J���N�@�Ӥj��10������ư���n,
�h�p��X��12-22+32-42+52-62+72-82+92-102+............-n2���G�O�h�֡A
�ЧA�ϥ�for���O��xx������p��X�o�@�ӵ��G���{��(�T�γt�⤽��, �ȥi�ϥΰj����O)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, i, sum = 0;
	printf("��J���N�@�Ӥj��10������ư���n�G");
	scanf("%d", &a);
	fflush(stdin);

	if (a > 10 && a % 2 == 0)
	{
		printf(" - �j��B��Ҧ�\n");
		for (i = 1; i <= a; i++)
		{
			if (i % 2 == 0)
				sum = sum - (i * i);
			else
				sum = sum + (i * i);
			printf("12-22+32-42+52-62+72-82+92-102+............-n2 ���G�� %d \n", sum);
		}
		printf(" - �j��B��Ҧ�\n");
		printf("�̫ᵪ�סG12-22+32-42+52-62+72-82+92-102+............-n2 ���G�� %d \n", sum);
	}

	else
		printf("��J���~�C\n");
	system("pause");
	return 0;
}
