/*
08:���]xx�K�Q�ө����uŪ�ͪ��~��A�i�H�̷ӤU�C�覡�p��A�Шϥ�switch���O�g�@�ӵ{�������ϥΪ̥i�H��J�uŪ�ͪ��u�@�ɼơA
�M��̷ӥH�U�覡�ӭp��̫᪺�~��(�u��ܾ�Ƴ���)�C�Ҧp�uŪ�ͥ��f-xx����u�@�F100�p�ɡA
�L���~���g�L�{���p�����ӬO60*110+15*110*1.25+25*110*1.75=13,475��(�u��ܨ��Ƴ���) 
    �i�~��p��W�h�j
l   60(�t)�p�ɤ����A�C�p��110��
l   �W�L60�p�ɫ᪺��61~75�Ӥp�ɡA�H110����1.25���p���~��
l   �W�L75�p�ɫ�, ��76�ӥH�᪺�u�@�~�ꧡ�H110����1.75���p��
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int b;
	printf("��J�uŪ�ͪ��u�@�ɼơG");
	scanf("%d",&b);
	fflush(stdin);

	if (b>0)
	switch(b)
		{
			case 0 ... 60 :
			printf("�uŪ�ͳo���u�@ %d �p�� �A�~�ꬰ %d �C",b,b*110);
			break;
		
			case 61 ... 75 :
			printf("�uŪ�ͳo���u�@ %d �p�� �A�~�ꬰ %.0lf �C",b,(60*110)+((b-60)*110*1.25));
			break;
			
			default :
			printf("�uŪ�ͳo���u�@ %d �p�� �A�~�ꬰ %.0lf �C",b,(60*110)+((15*110)*1.25)+((b-75)*110*1.75));
			break;
		}
	else
		printf("��J���~�C \n");
		
	system("pause");
	return 0;
 }

