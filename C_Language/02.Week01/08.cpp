/* 
HW2-8. �ռ��g�@�{���A�n�D�ϥΪ̿�J�ѼơA�ñN���ƭ��ഫ���X�ӬP���S�X�ѡC
�Ҧp�A�N 18 ���ഫ�� 2 �ӬP���S 4 �ѡA
�åΥH�U���Φ���X�䵲�G�G�i18 days are 2 weeks, 4 days.�j  
*/
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int d;					//�ŧi d �ܼ� 
	printf("�п�J�ѼơG"); //�L�X �п�J�Ѽ� 
	scanf("%d",&d);			//�ϥΪ̿�J�Ѽ� 
	fflush(stdin);			//�N�Ȧs���M�� 

	printf("%d days are %d weeks, %d days.",d,d/7,d%7);		//�L�X  �ϥΪ̿�J�ƭ� �� �ഫ�X�ӬP���S�X�� 
	
	system("pause");
	return 0;
 }

