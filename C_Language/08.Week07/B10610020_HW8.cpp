#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define name "***********\n�Ǹ��GB10610020 \n�m�W�G���m�� \n�@�~�GHW8 \n***********\n"
void list();	//�D�\��� 
void HW82();		//HW8-1 �@�~ 
int	HW82(int n);	//HW8-1 �@�~�^�� 
void HW84();	//HW8-4 �@�~ 
void HW85();	//HW8-5 �@�~ 
int main()
{

	list();	//�ۭq��ƥD�\��� 
	
	system("pause");
	return 0;
}
//////////////////////////////// �H�U���ۭq��� 
void list()	//�D�\��� 
{
	int a;	//�ŧi 
	do{
		printf(name);	//�L�X�ӤH��� 
		printf("�w��i�J�D�\\���I�I\n");	//�L�X �w��i�J�D�\���I�I
		printf("A(a).HW8-2\nB(b).HW8-4\nC(c).HW8-5\nQ(q).���}�C\n�п�J�H�U�Ʀr(�Фſ�J��L�r���A�_�h�|�]���C)�G");
		//�L�X A.HW8-2		B.HW8-4		C.HW8-5		Q.���}�C	��J�H�U�Ʀr(�Фſ�J��L�r���A�_�h�|�]���C)
		scanf("%c",&a);	//���ϥΪ̿�J�ia 
		fflush(stdin);	//�M�żȦs 
		system("cls");	//�M�ŵe�� 
		
		switch(a)	//SWITCH ��� 
		{
			case 65 :	//�j�gA 
			case 97 :	//�p�gA
				HW82(); 	//�]�X�ۭq��� 
			break;
			case 66 :	//�j�gB
			case 98 :	//�p�gb
				HW84();		//�]�X�ۭq��� 
			break;
			case 67 :	//�j�gC
			case 99 : 	//�p�gc
				HW85();		//�]�X�ۭq��� 
			break;
			case 81:	//�j�gQ 
			case 113:	//�j�gq 
					printf("�n���}�o�I\n");	//�L�X�i���ϥΪ̭n���}�F 
			break;
			default:  //��J��L�Ʀr 
				printf("��J���~�I�Э��s��J�C\n"); //�L�X��J���~�I�Э��s��J 
				system("pause");
				system("cls");	//�M���e�� 
			break;
		}
	}while(a!=81 && a!=113);
	{
		
	}	 

}
/////////////////////////////////////////////// �H�W���D���� 
void HW82()	//HW8-2 
{
	int n=0,i=0;	//�ŧi�ܼ� n ,i 
	printf("�п�J10~20���Ʀr�G");	//��X  �п�J10~20���Ʀr�G
	scanf("%d",&n);	//�ϥΪ̿�J�ƭȦ�n 
	fflush(stdin);	//�M�żȦs 
	
	if(n<10 || n>20)	//�p�G 10 ~ 20 �H�� 
		printf("��J���Ȥ��b�d�򤺡A�Э��s��J�C\n");	//��X ��J���Ȥ��b�d�򤺡A�Э��s��J�C
	else	//�_�h 
		printf("1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n = %d\n",HW82(n));	//�L�X 1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n �����G
	
	system("pause");
	system("cls");
}
int HW82(int n)	//�ۭq���HW82
{
	if(n==2)	//�p�G n=2 
	{	
		return 2;	//�^�� 2 
	}	
	return HW82(n-1)+(n-1)*n;	//�^�� �ۭq��� + (n-1) *n  ���j
	
	system("pause");
	system("cls"); //�M���e�� 
}
///////////////////////////////////////// 
void HW84()	//HW8-4 
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
	system("cls");	//�M���e�� 
}
void HW85()	//HW8-5 
{
		int a,v,n[6];	//�ŧi a,v,n[6]�}�C 
	srand(time(0));	//�üƱq�ɶ��� 
	for(int i=0; i<=4; i++) 	//�ռưj�� 
	{
		for(int j=0; j<=5; j++) //���X�j�� 
		{	
			do	//���� do....while 
			{
				n[j]=rand()%49+1;	//���üƦܸ��X	
				for(v=0;v<=j;v++)	//�ΰj��P�_���L�P���e���Ʀr���� 
				{
					if(n[j]==n[v])	// �P�_ j==v �P�_���L���� 
					break;	//���ƴN��^ 
				}
			}while(v!=j);	//while v �����ƪ����p 
			{
				if(j<10)	//�p�G�p��10 
				{
					printf("%02d\t",n[j]);	//��X ��0�}�Y���Ӧ�� 
				}
				else	//�_�h 
				{
					printf("%2d\t",n[j]);	//��X�Q��ƪ��Ʀr 
				}
			}
		}
		printf("\n");
	}
	printf("�H�W���j�ֳz���X�C\n\n");	//��X �H�W���j�ֳz���X�C
	system("pause");
	system("cls");	//�M���e�� 
}
