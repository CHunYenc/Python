/*
HW8-2.�иռg�@�ӻ��j���int sum(int n)�A
���ϥΪ̱q�D�{����椤��ܥ��D��A
�|�����ϥΪ̦b�D�{������J�@�Ӥ���10~20���Ʀrn�A
�p�G�W�L���d��|���Ϳ��~�T���A�Y�ŦX10~20���Ʀr�A
�h�D�{���|�I�ssum(n)�A�M��sum()��Ʒ|�Q�λ��j���(��Ʀۤv�I�s�ۤv���覡)�A
�p��X1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n �����G�A
�ñN���G�^�ǦܥD�{������ܡC���槹����A�ϥΪ̫����N���|��^�D���A
���ϥΪ��~���ܭn���檺�䥦�D�ءC[�Ǹ��̫�@�X�����ƪ��P�ǽЧ@��]
*/

#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main()
{
	int n=0,i=0;	//�ŧi�ܼ� n ,i 
	printf("�п�J10~20���Ʀr�G");	//��X  �п�J10~20���Ʀr�G
	scanf("%d",&n);	//�ϥΪ̿�J�ƭȦ�n 
	fflush(stdin);	//�M�żȦs 
	
	if(n<10 || n>20)	//�p�G 10 ~ 20 �H�� 
		printf("��J���Ȥ��b�d�򤺡A�Э��s��J�C\n");	//��X ��J���Ȥ��b�d�򤺡A�Э��s��J�C
	else	//�_�h 
		printf("1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n = %d\n",sum(n));	//�L�X 1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n �����G
	
	system("pause");
	return 0;
}

int sum(int n)	//�ۭq���sum
{
	if(n==2)	//�p�G n=2 
	{	
		return 2;	//�^�� 2 
	}	
	return sum(n-1)+(n-1)*n;	//�^�� �ۭq��� + (n-1) *n  ���j 
}



