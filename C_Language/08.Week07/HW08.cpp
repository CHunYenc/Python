#include <stdio.h>
#include <stdlib.h>
void star();
void per();		//�ӤH��� 
void list();	//�D�\��� 
void HW82();	//�@�~ 
void HW84();	//�@�~ 
void HW85();	//�@�~ 
int main()
{
	per();
	list();
	
	system("pause");
	return 0;
}
void star()
{
	printf("**********\n");
}
void per()
{
	star();
	printf("�ӤH���\n");
	printf("�Ǹ��GB10610020\n�m�W�G���m��\n");
	star();
}
void list()
{
	int a;
	do{
		printf("�w��i�J�D\�\\��\��I�I\n");
		printf("1.HW8-2\n2.HW8-4\n3.HW8-5\n4.���}�C\n�п�J�H�U�Ʀr�G");
		scanf("%d",&a);
		fflush(stdin);
		system("cls");
		
		switch(a)
		{
			case 1: HW82(); break;
			case 2: HW84();	break;
			case 3: HW85();	break;
			default:	printf("��J���~�I�п�J�W�誺�Ʀr�C\n"); break;
		}
	}while(a!=4);
	{

	}
}
void HW82()
{
	printf("82 \n");
	system("pause");
}
void HW84()
{
	printf("84 \n");
	system("pause");
}
void HW85()
{
	printf("85 \n");
	system("pause");
}
