#include <stdio.h>
#include <stdlib.h>
void L();
void A();
void B();
void C();
void D();
void E();
void F();
void G();
void H();
void I();
int main()
{
	char s;
	system("cls");
	do
	{
		L();
		printf("�w��Ө�Ĥ����@�~�A�H�U�O�D�ئC��G\n");
		printf("A.01\n");
		printf("B.02\n");
		printf("C.03\n");
		printf("D.04\n");
		printf("E.05\n");
		printf("F.06\n");
		printf("G.07\n");
		printf("H.08\n");
		printf("I.09\n");
		printf("J.���}�C\n");
		printf("�п�J�A�n�d�ݪ��@�~�D�ءG");
		scanf("%c",&s);
		fflush(stdin);
		
		switch(s)
		{
			case 'A':
			case 'a':
				A();
			break;
			case 'B':
			case 'b':
				B();
			break;
			case 'C':
			case 'c':
				C();
			break;
			case 'D':
			case 'd':
				D();
			break;
			case 'E':
			case 'e':
				E();
			break;
			case 'F':
			case 'f':
				F();
			break;
			case 'G':
			case 'g':
				G();
			break;
			case 'H':
			case 'h':
				H();
			break;
			case 'I':
			case 'i':
				I();
			break;
			case 'J':
			case 'j':
				system("cls");
				printf("���}�o�I\n");
			break;
			default:

			break;
		}
	}while(s !='J' && s!='j');
	{
		
	}	
	system("pause");
	return 0;
}

void L()
{
	printf("====================\n");
	printf("�Ǹ��Gb106XXXXX\n�m�W�G��XX\n");
	printf("====================\n");
}
/*
01.�ЧQ��for���O�g�@�{���A���ϥΪ̥���J�@�ӼƦrx�A
�ΨӪ�����ߦPŢ�X�p�@���X���ʪ�(�@��Ţ�l�̭����[�ߪ��ʪ��`�ƶq);
���ۦA���ϥΪ̿�J�ĤG�ӼƦry�A�ΨӪ�����ߦPŢ���X�p�@���X���}
(�@��Ţ�l�̭����}�[�߸}���`�ƶq)�A�M��A�ѵ{���p��X���P�ߤ��O���h�ְ��C
�i�Ǹ����X��3,6,7�а����D�j
*/ 
void A()
{
	int f=0,t=0,c=0,l=0;
	printf("�п�J�@�ӼƦr�G");
	scanf("%d",&f);
	fflush(stdin);
	printf("�A��J�@�ӼƦr�G");
	scanf("%d",&l);
	fflush(stdin);
	system("cls");
	
	
	printf("�@��: %d ���ʪ�\n",f);
	for(int i=0;i<=f/2;i++)	//�� 
	{
		for(int j=0;j<=f*4;j++)	//�� 
		{
			if(f==i+j)
			printf("%d.%d���� . %d ���ߡC\n",i,j);
		}
	}
	
	
	
	system("pause");
	system("cls");	
}
/* 
02.�Q��for���O�g�@�{���A���ϥΪ̿�J�@�ӼƦrx�A
�ΨӪ�����ߦPŢ���X�p�@���X���}(�@��Ţ�l�̭����}�[�߸}���`�ƶq)�A
�M��ѵ{����X�Ҧ��i�઺���B�߼ƶq�զX�C
(����ܥX�C�@�ر��p�����B�߼ƶq)�i�Ǹ����X��2,5,0�а����D�j 
*/ 
void B()
{
	printf("B\n");
	system("pause");
	system("cls");	
}
/*03.�ЧQ��for���O���O�A�]�p�@�{���L�X�E�E���k��p�U�A
�Ӧ�ƻP�Q��ƽаȥ�����G�i�Ǹ����X��1,4,8,9�а����D�j
*/ 
void C()
{
	printf("C\n");
	system("pause");
	system("cls");
}
void D()
{
	printf("D\n");
	system("pause");
	system("cls");
}
void E()
{
	printf("E\n");
	system("pause");
	system("cls");	
}
void F()
{
	printf("F\n");
	system("pause");
	system("cls");	
}
void G()
{
	printf("G\n");
	system("pause");
	system("cls");	
}
void H()
{
	printf("H\n");
	system("pause");
	system("cls");	
}
void I()
{
	printf("I\n");
	system("pause");
	system("cls");
}

