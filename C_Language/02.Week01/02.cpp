/* 
HW2-2: �ռg�@�{���i�H���ϥΪ̿�J�����A���������G�ӳ��A
���O�O�`�P�T�A�M�ᴫ�⦨������q�ù��L�X���G�C
�Ҧp�Y�ϥΪ̪�������5�`8�T�A�h���ϥΪ̥i�H�b�q���W����J�`��5�A
�M��A���ϥΪ̿�J�T��8�A�g�{���p���A
�ݱN�p��᪺����172.72����(�p���p���I��2��)��ܦb�ù��W�C
�����G   
(A)1�`=12�T�C
(B)1�T=2.54�����C
(C)���N�`�B�T�ন�����A���N�`�ন�T�A�A�N�T�ন�����Y�i�C
*/
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double h = 0, a = 0 , b = 0 , cm = 0; 
	// h=�� a=�` b=�T cm=���� 
	printf("�п�J�A�������X�`�G");
	scanf("%lf",&h);
	fflush(stdin);
	
	printf("�п�J�A�������X�T�G");
	scanf("%lf",&b);
	fflush(stdin);
	
	printf("�A�������g�L����ᬰ�G%.2lf �����C\n",((h*12)*2.54)+(b*2.54));

	system("pause");
	return 0;
 }

