/*
05:�U��xx��~�s��i�f�Ӫ��禬�h�f��ת�A
�м��g�@�ӵ{�����ϥΪ̿�J�i�f�s��ƻP�岫�~�ƶq�A
�M��ѵ{���p��X�岫�~�Ҧ���ҼƻP�h�f�ơA
�ñN���G��ܩ�e���W�C

[��J�d�Ҥ@]

�п�J�i�f�s���: 4000

�п�J�岫�~�Ӽ�: 400

�i�f 4000 �ӹs��A�岫�~�� 400 �ӡA����� 10%�A�ҥH�h�f�Ƭ� 4000 �ӡC


[��J�d�ҤG]

�п�J�i�f�s���: 6000

�п�J�岫�~�Ӽ�: 200

�i�f 6000 �ӹs��A�岫�~�� 200 �ӡA�����3.33%�A�ҥH�h�f�Ƭ�200�ӡC
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c, e;					  //�ŧi�ܼ� c,e
	printf("�п�J�i�f�s��ơG"); //�L�X  �п�J�i�f�s��ơG
	scanf("%d", &c);			  //���ϥΪ̿�J �i�f�s��� �s�Jc
	fflush(stdin);				  //�M���Ȧs
	printf("�п�J�岫�~�Ӽ�: "); //�L�X �п�J�岫�~�Ӽ� :
	scanf("%d", &e);			  //���ϥΪ̿�J �岫�~�Ӽ� �s�Je
	fflush(stdin);				  //�M���Ȧs

	if (c < 5000) //�p�G  �i�f�s��� <5000
	{
		if ((double)e / c <= 0.02) //�p�G �岫�~ <= 0.02 (2%) �h�f�Ƭ� 0
			printf("�i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC", c, e, (double)e / c * 100, 0);
		else if ((double)e / c > 0.02 && (double)e / c <= 0.05) //�p�G �岫�~ > 0.02 (2%) �M �岫�~ <=0.05 (5%) �h�f�Ƭ� 0
			printf("�i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC", c, e, (double)e / c * 100, e);
		else //�_�h �岫�~ > 0.05 (5%) ���ưh�f
			printf("�i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC", c, e, (double)e / c * 100, c);
	}
	if (c >= 5000) //�p�G �i�f�s��� >= 5000
	{
		if ((double)e / c <= 0.03)																						  //�p�G �岫�~ <= 0.03 (3%) �h�f�Ƭ� 0
			printf("�i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC", c, e, (double)e / c * 100, 0); //�L�X�κ�X �i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC
		else if ((double)e / c > 0.03 && (double)e / c <= 0.06)															  //�_�h�p�G �岫�~ > 0.03 (3%) �M �岫�~ <=0.06 (6%) �h�f�Ƭ��岫��
			printf("�i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC", c, e, (double)e / c * 100, e); //�L�X�κ�X �i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC
		else																											  //�_�h �岫�~  > 0.06 (6%) �h�f�Ƭ����ưh�f
			printf("�i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC", c, e, (double)e / c * 100, c); //�L�X�κ�X �i�f %d �ӹs��A�岫�~�� %d�ӡA����� %.2lf%% �A�ҥH�h�f�Ƭ� %d �ӡC
	}

	system("pause");
	return 0;
}
