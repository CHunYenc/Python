#include <stdio.h>
#include <stdlib.h>
void star();
void menu();
void HW1();
void HW2();
void HW3();
int main()
{
	star();
	menu();
	star();
	
	system("pause");
	return 0;
}

void star()
{
	printf("**********\n");
}
void menu()
{
	int i=0,a=0,b=0,c=0;
	system("cls");
	do
	{
		star();
		printf("B10610020 ���m�� \nHW7 �@�~�C�� \n");
		star();
		printf("(1).HW7-1\n");
		printf("(2).HW7-3\n");
		printf("(3).HW7-5\n");
		printf("(4).���}�{���C\n");
		star();
		printf("�п�J�ݭn�����X�G");
		scanf("%d",&i);
		fflush(stdin);
		system("cls");
		if(i>0 || i<5)	
		{
			switch(i)
			{
				case 1: 
					HW1(); 
				break;
				
				case 2:	
					HW2(); 
				break;
				
				case 3:	
					HW3(); 
				break;
				
				case 4:
					printf("�n���}�o�I\n");
				break;
				
				default: 
					printf("��J���~�I�Э��s��J�C\n"); 
					system("pause");
					system("cls");
				break;
			}
		}
	}while(i!=4);
	{
		
	}
}
void HW1()
{
	printf("1\n");
	system("pause");
	system("cls");
}
void HW2()		//HW7-3
{
	printf("2\n");
	system("pause");
	system("cls");
}

void HW3()		//HW7-5
{
	printf("3\n");
	system("pause");
	system("cls");
}

