/*
HW2-10:�Шϥ�if��if-else���O���g�@�{���A
���ϥΪ̥i����L��Jx�By�y�Э�(�i�]�t���t�ƤΤp��)�A
�M��P�_�ϥΪ̿�J���y���I��󨺤@�ӶH���άO�b�y�жb�W�C
�|�Ҩӻ��A�Y��J���y�ЭȬ�(3.0,-2.5)�A
��X�Y���ĥ|�H���F�Y��J���y�ЭȬ�(4.5,0.0)�A
�h��X�Y��x�b�C
(��:�ݦҼ{4�ӶH���BX�b�BY�b�έ��I;
�G�y�мƦr�b�U�H�������t�����A�Ĥ@�H��++�A�ĤG�H��-+�A
�ĤT�H��--�A�ĥ|�H��+-) 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double x,y;
	printf("�п�J(x,y)�G\n");
	scanf("%lf %lf",&x,&y);
	
	if (x>0 && y>0)
		printf("�z��J���ݩ�Ĥ@�H��++ �C\n");
	else if (x<0 && y>0)
		printf("�z��J���ݩ�ĤG�H��-+ �C\n");
			else if (x<0 && y<0)
			printf("�z��J���ݩ�ĤT�H��-- �C\n");
					else
					printf("�z��J���ݩ�ĥ|�H��+- �C\n");
		

	system("pause");
	return 0;
 }

