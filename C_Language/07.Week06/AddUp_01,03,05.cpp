#include <stdio.h>
#include <stdlib.h>
void star();	//�C��P�P 
void menu();	//�C���� 
//// �W���Ӭ��C��ݭn 
void kitty();	//HW7-1  �D�إ��� 
void kitty(int a);	//HW7-1 �Ʀr�ŦX�j�p�A���T��I�s���T���� 
//// �H�W�� HW7-1 
void num();		//HW7-3 �D�إ��� 
void num(int a);	//HW7-3 �Ʀr�ŦX�j�p�A���T��I�s���T���� 
//// �H�W�� HW7-3
double square();	//HW7-5 �D�إ��� 
double square(double a);	//HW7-5 �D�حn�D���^�ǭ� 
//// HW7-5
int main()
{
	menu();	// �D�C�� 
	
	system("pause");
	return 0;
}
////////////////////////	�H�W���D�{��

/////////////	�H�U���ۭq��� 
////////////	*�D�C�� 
void star()
{
	printf("*************\n");	//�D�C��P�P�L�X 
}

void menu()
{
	int i=0;	//�ŧi i,a,b,c �ܼ� 
	system("cls");	//�M���e�� 
	do	// 
	{
		star();	//�ۭq��� �L�P�P 
		printf("B106xxxxx xxx Week06 �@�~�C�� \n");	//�L�X �Ǹ� �m�W �ĴX���@�~ 
		star();	//�ۭq��� �L�P�P 
		printf("(1).HW7-1\n");		//�L�X��� (1).HW7-1 
		printf("(2).HW7-3\n");		//�L�X��� (2).HW7-3  
		printf("(3).HW7-5\n");		//�L�X��� (3).HW7-5
		printf("(4).���}�{���C\n");	//�L�X��� (4).���}�{���C
		star();	//�ۭq��� �L�P�P
		printf("�п�J�ݭn�����X�G");	//�L�X �п�J�ݭn�����X�G
		scanf("%d",&i);	//��J i�� 
		fflush(stdin);	//�M���Ȧs 
		system("cls");	//�M�ŵe�� 
		
		if(i>0 || i<5)	//�p�G i ���� 1.2.3.4  
		{
			switch(i)	//�ϥ�switch�P�_ 
			{
				case 1: //�i�J�D�� (1).HW7-1  
					kitty(); //�L�X HW7-1 
				break;
				
				case 2:	//�i�J�D�� (2).HW7-3
					num(); //�L�X HW7-3
				break;
				
				case 3:	//�i�J�D�� (3).HW7-5 
					square(); //�L�X HW7-5 
				break;
				
				case 4:	//(4).���}�{���C
					printf("�n���}�o�I\n");	//�L�X�i���ϥΪ̭n���}�F 
				break;
				
				default:  //��J��L�Ʀr 
					printf("��J���~�I�Э��s��J�C\n"); //�L�X��J���~�I�Э��s��J 
					system("pause");
					system("cls");	//�M���e�� 
				break;
			}
		}
	}while(i!=4);
	{
		
	}
}
///////////�H�U��HW7-1 �ۭq��� 
void kitty()
{
	int a;	//�ŧi�ܼ�a 
	printf("�п�J�@�Ӥ���3~9���Ʀrn�G\n");	//�L�X  �п�J�@�Ӥ���3~9���Ʀrn�G
	scanf("%d",&a);	//��J a�Ȩÿ�Ja 
	fflush(stdin);	//�M���Ȧs 
	
	if(a>=10 || a<=2)	//�p�G a�j�󵥩�10 �� a�p�󵥩�2 
	{
		printf("���b�d�򤺡A�Э��s��J�C\n");	//�L�X  ���b�d�򤺡A�Э��s��J�C
	}
	else	//�_�h 
	{ 
		kitty(a); //�L�X ���T�ѵ� 
	}	
	system("pause");
	system("cls");	//�M�ŵe�� 
}
// HW7-1�����T�ѵ���� 
void kitty(int a)
{
	for(int i=1;i<=a;i++)	//�j�� I�p�󵥩� ��J�� ����h�� 
		{
			printf("Hello Kitty \n");	//�L�X Hello Kitty
		}
} 
/////////////////////////// 
void num()		//HW7-3
{
	int a=0;	//�ŧi�ܼ�a 
	printf("�п�J�@�Ӥ���10~100���Ʀrn�G");	//�L�X  �п�J�@�Ӥ���10~100���Ʀrn�G
	scanf("%d",&a);	//��J a�Ȩÿ�Ja 
	fflush(stdin);	//�M���Ȧs
	
	if(a<10 || a>101)	//�p�G a�j��101 �� a�p��10 
	{
		printf("���~�T���C\n");		//�L�X  ���~�T���C
	}
	else
	{	
		num(a);	//�L�X HW7-3���T���� 
	}
	system("pause");
	system("cls");	//�M�ŵe�� 
}
void num(int a)
{
	printf("%d ���]�Ʀ� ",a); 	//�L�X %d ���]�Ʀ�
		for(int i=1;i<=a;i++)	//�j�� �L�X�C�@�Ӧ]�� 
		if (a%i == 0)	//�p�G�F������ 
        {
            printf("%d ",i);	//�L�X �]�� 
        }	
}
/////////////////////////// 
double square()		//HW7-5 �D�إD�� 
{
	double a;	//�ŧi�B�I�� a 
	printf("�п�J�@�ӯB�I�ƪ��Ʀrx�G");	//�L�X  �п�J�@�ӯB�I�ƪ��Ʀrx�G
	scanf("%lf",&a);	//��J a�Ȩÿ�Ja 
	fflush(stdin);	//�M���Ȧs 
	if(a<1)	//�p�G a�p��1 
	{
		printf("%lf \n",square(a));	//�L�X���� 
	}
	else	//�_�h 
	{
		printf("��J���~�A�п�J�B�I�ơC\n");	//�L�X ��J���~�A�п�J�B�I�ơC
	}
	
	system("pause");
	system("cls");	//�M�ŵe�� 
}
double square(double a)	 
{
	return a*a; //�^�ǵ��� 
}

