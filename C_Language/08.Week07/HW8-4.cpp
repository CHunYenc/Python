/*
HW8-4.�Ыŧi�@�Ӥ@���}�C���ܼ�score�A�Ψ��x�s5��P�Ǫ��{���]�p���Z�A
�ЧA�]�p�@�{���A���ϥΪ̥i�H����L��J5��P�Ǫ��{���]�p���Z�A
�íp��o5��ǥ͵{�����[�`�`���B�������ơB�̰����B�̧C���A
�H�ΧC�󥭧����ƪ��ǥͤH�ơC
[�Ǹ��̫�T�X��011~020�B031~040�B051~060�B071~080�B091~100�B111~120�B131~140�B151~160���P�ǧ@��]
*/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score[5],low=0,i=0,j=0,a=0,sum=0,max=0,min=0;	//�ŧi�ܼ� score �}�C, low=0,i=0,j=0,a=0,sum=0,max=0,min=0
	double average=0;	//�ŧi���B�I�� average 
	
	for(i=0;i<5;i++)	//�j�� 
	{	
		printf("�п�J�P�� %d �쪺���Z�G",i+1);	//��X �п�J�P�� %d �쪺���Z�G
		scanf("%d",&score[i]);	//���ϥΪ̿�J
		fflush(stdin);	//�M���Ȧs 
		if(i==0)	//�p�G 
		{
			max=score[0];	//�������}�C 
			min=score[0];	//�������}�C 
		}
		else	//�_�h 
		{
			if(score[i]>max)	//�P�_ score �}�C�O�_�j��max 
				max=score[i];	//�j�� �N����max 
			if(score[i]<max)	//�P�_ score �}�C�O�_�p��max 
				min=score[i];	//�p�� �N����min 
		}
		sum=sum+score[i];	//�Ҧ��ǥͪ��`�M 
	}
	average=(double)sum/i;	//���� 
	for(i=0;i<5;i++)	//�j�� 
	{
		if(average>score[i])	//�p�G�� �P�Ǫ����ƧC�󥭧� 
			low++;	//�N�[�@ 
	}
	printf("�`�����G%d ���A�������Ƭ��G%lf ���A�̰����G%d ���A�̧C���G%d ���A�C�󥭧����H�ơG%d �H�C\n",sum,average,max,min,low);
	//��X �`�����G%d ���A�������Ƭ��G%lf ���A�̰����G%d ���A�̧C���G%d ���A�C�󥭧����H�ơG%d �H�C 

	system("pause");
	return 0;
}

