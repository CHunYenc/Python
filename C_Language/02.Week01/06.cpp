/* 
HW2-6: �мg�@�ӵ{�������ϥΪ̿�J����ǥͪ����Z�A
�M��A�p��o����ǥͦ��Z�ۥ[�᪺�`���A
�H�Τ���ǥͪ��������Z�A
�̫�b�e������ܥX�o����ǥͦ��Z���ۥ[�`���Υ������ơC
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a,b,c,d,e;
	printf("�п�J�Ĥ@��ǥͪ����Z�G");
	scanf("%lf",&a);
	fflush(stdin);
	
	printf("�п�J�ĤG��ǥͪ����Z�G");
	scanf("%lf",&b);
	fflush(stdin);
	
	printf("�п�J�ĤT��ǥͪ����Z�G");
	scanf("%lf",&c);
	fflush(stdin);
	
	printf("�п�J�ĥ|��ǥͪ����Z�G");
	scanf("%lf",&d);
	fflush(stdin);
	
	printf("�п�J�Ĥ���ǥͪ����Z�G");
	scanf("%lf",&e);
	fflush(stdin);

	printf("����ǥͪ����Z�[�`�� %.2lf �A�������Z�� %.2lf �C\n",a+b+c+d+e,(a+b+c+d+e)/5);
	
	system("pause");
	return 0;
 }

