/*
03.�I��XX�]�����Ӧh�A�ҥH�Q�n���D�w�s�Q�~�����|���h�֡A
�ЧA�ϥ�for�j����O���g�@�{���A���ϥΪ̯����L��J�n�s�J�Ȧ檺���B�A
�Q�v�O4%�A�p�G�C�~���Q�����~��s�J�Ȧ�(�Y�ƧQ)�A�Эp��b10�~��A
�����[�Q���@�@�h�ֿ��C
*/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0;  //�ŧi�ܼ�i=0 
	double sum=0;	//�ŧi���B�I�� sum = 0 
	printf("�п�J�n�s�J�Ȧ檺���B�G");	//�L�X �D�حn�D  �п�J�n�s�J�Ȧ檺���B�G
	scanf("%lf",&sum);	//���ϥΪ̿�J �ϥ� %lf 
	fflush(stdin);	//�M���Ȧs 
	
	if(sum>0)	//�p�G sum �j�� 0 
	{
		for(i=1;i<=10;i++) //�j�� for i=1 �Ĥ@�~ ; �Q�~ i<=10 ; i++ �C�[�@ 
		{
			sum=sum*1.04;	// Sum ���ϥΪ̿�J�s�J���B ���B*1.04  
			printf(" %d �~��A�����[�Q���@�@�G%lf \n",i,sum);	// �L�X�C�@�~�ܤQ�~ �����[�Q���@�@�h�ֿ� 
		}
	}
	else	//�Y sum �b sum > 0 ���~ 
		printf("��J���~�C\n");	//�L�X ��J���~�C 

	system("pause");
	return 0;
 }

