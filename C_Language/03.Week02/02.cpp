/*
02:�Шϥ�if��if-else���O���g�@�{���A���ϥΪ̥i����L��J�@��1~7��������ơA
1~7���Ʀr�N��P���@��P����C�Y��J���O1~5�A�h���"���ѭn�W�Z"�F�Y��J���O6�A
�h���"���Ѭ��|"�F�Y��J���O7�A�h���"���ѤW�а�"�A�Y��J�����O1~7�A�h���"��J���~"�C 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int d;
	printf("�п�J1~7���Ʀr�G");
	scanf("%d",&d);
	
	if (d>=1 && d<=7)
	{
	if (d<6)
		printf("���ѭn�W�Z�C\n");
	else if (d==6)
		printf("���Ѭ��|�C\n");
		else if (d==7) 
			printf("���ѤW�а�C\n");
	}
	
	else 
	printf("��J���~�C\n");
		
	system("pause");
	return 0;
 }

