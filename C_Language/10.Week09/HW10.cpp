#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int i=0 ;
void p();	//�ۭq��� �ӤH��� 
void A(char a[49][10],char b[49][10],double c[49][4]);	//�ۭq��� A�D 
void B(char a[49][10],char b[49][10],double c[49][4]);	//�ۭq��� B�D 
void C(char a[49][10],char b[49][10],double c[49][4]);	//�ۭq��� C�D 
void D(char a[49][10],char b[49][10],double c[49][4],int t1,char t,double sum[50][1]);	//�ۭq��� D�D 
int main()
{
		int n,t1,x,y,z;
		double c[49][4],sum[49][1];	//�ŧi n �C�� c,d,e ��  ���ư}�C 
		char a[49][10],b[49][10],t;	//a�Ǹ� b�m�W 
	do
	{
		system("cls");
		p();	//�L�X�ӤH��� 
		printf("�ЧA��ܱ��B�z�����Z�@�~�G\n");	//�L�X �ЧA��ܱ��B�z�����Z�@�~�G
		printf("A�B���Z��J\n");	//�L�X A�B���Z��J
		printf("B�B�`���Z�p��\n");	//�L�X B�B�`���Z�p��
		printf("C�B���Z���\n");	//�L�X C�B���Z���
		printf("D�B�`���Z�Ƨ�\n");	//�L�X D�B�`���Z�Ƨ�
		printf("E�B�����I\n");	//�L�X  E�B�����I
		printf("�H��J���ǥͦ��Z�G%d ��C\n",i);
		printf("�п�J�H�W�z�n�i�J A ~ E �ﶵ�G");	//�L�X  ��J�H�W�z�n�i�J A ~ E �ﶵ�G
		scanf("%c",&n);	//��J�� 
		fflush(stdin);	//�M���Ȧs 
		
		system("cls");	//�M�ŵe�� 
		
		switch(n)
		{
			case 'A':	//��J A,a �i�JA�D 
			case 'a':
				A(a,b,c);	//�s�X�ۭq��� A�D 
			break;
			case 'B':	//��J B,b �i�JB�D 
			case 'b':
				B(a,b,c);	//�s�X�ۭq��� B�D 
			break;
			case 'C':	//��J C,c �i�JC�D 
			case 'c':
				C(a,b,c);	//�s�X�ۭq��� C�D 
			break;
			case 'D':	//��J D,d �i�JD�D 
			case 'd':
				D(a,b,c,t1,t,sum);	//�s�X�ۭq��� D�D 
			break;
			case 'E':	//��J E,e
			case 'e':
				printf("�����C\n");	//�L�X���� 
 			break;
			default:
				printf("�Э��s��J�I���A�d�򤺡C\n");	
				system("pause");
				system("cls");
			break;
		}
	}while(n!='E' && n!='e');
	 {
		
  	 }

	system("pause");
	return 0;		
}

void p()
{
	printf("=================\n�ӤH��ơG\n");
	printf("�t�šG��ޤ@�B\t�Ǹ��Gb10610020\t�m�W�G���m�� \n=================\n");
}
void A(char a[49][10],char b[49][10],double c[49][4])
{
	
	for(i;i<=49;i++)
	{
			printf("�п�J %d ��P�Ǫ��Ǹ��G",i+1);	//�L�X  �п�J %d ��P�Ǫ��Ǹ��G
			scanf("%s",&a[i]);	//��J�� 
			fflush(stdin);	//�M���Ȧs 
			if (a[i][0] == '#')	//�p�G��J # �N�����J 
			{
				printf("%d\n",i);
				printf("�n�����o�C\n");	//�L�X �n�����o�C
				break;	 
			}
			printf("�п�J %d ��P�Ǫ��m�W�G",i+1);		//�L�X �п�J %d ��P�Ǫ��m�W�G
			scanf("%s",&b[i]);	//��J 
			fflush(stdin);	//�M�� 
			printf("�п�J %d ��P�Ǫ��{�]���Z�G",i+1);	//�L�X �п�J %d ��P�Ǫ��{�]���Z�G
			scanf("%lf",&c[i][0]);	//��J 
			fflush(stdin);	//�M��
			printf("�п�J %d ��P�Ǫ��|�p���ơG",i+1);	//�L�X �п�J %d ��P�Ǫ��|�p���ơG
			scanf("%lf",&c[i][1]);	//��J 
			fflush(stdin);	//�M��
			printf("�п�J %d ��P�Ǫ��p�����ơG",i+1);	//�L�X �п�J %d ��P�Ǫ��p�����ơG
			scanf("%lf",&c[i][2]);	//��J 
			fflush(stdin);	//�M��
			printf("\n"); 	//���� 
	}
	system("pause");
	system("cls");
}
void B(char a[49][10],char b[49][10],double c[49][4])
{
	printf("�Ǹ�\t\t\t�m�W\t�{�]\t�|�p\t�p��\t�`���Z\n");	//�L�X �Ǹ� �m�W �{�] �|�p �p�� �`���Z 
	for(i=0;i<=50;i++)
	{
		if(a[i][0]!='#')
		{
			printf("%9s\t        %s\t%.1lf\t%.1lf\t%.1lf\t %.1lf\n",a[i],b[i],c[i][0],c[i][1],c[i][2],(c[i][0]+c[i][1]+c[i][2])/3.0);
			// �L�X �Ǹ� �m�W �{�] �|�p  �p��  �`���Z
		}
		else
		{
			break;
		}
	}
	
	system("pause");
	system("cls");
}
void C(char a[49][10],char b[49][10],double c[49][4])
{
	printf("�Ǹ�\t\t\t�m�W\t�{�]\t�|�p\t�p��\n");	 	//�L�X �Ǹ� �m�W �{�] �|�p  �p�� 
	for(i=0;i<=50;i++)
	{
		if(a[i][0]!='#')	//�p�G 
		{
			printf("%9s\t        %s\t%.1lf\t%.1lf\t%.1lf\n",a[i],b[i],c[i][0],c[i][1],c[i][2]);
			// �L�X �Ǹ� �m�W �{�] �|�p  �p�� 
		}
		else
		{
			break;
		}
	}
	system("pause");
	system("cls");
}
/*
��      
�p�G�ϥΪ̿�ܥ\��D�A�{���ݱNsocre�G���}�C�������Z��ơA
�̷��`���Z���C�i��Ƨ�(�Ѥj��p)�A�M��N�Ƨǫ᪺��Ƴv����ܦb�ù��W�A
�ç�Ƨǫ᪺��Ʀ^�s��score�G���}�C�ܼƤ��C
*/

void D(char a[49][10],char b[49][10],double c[49][4],int t1,char t,double sum[50][1])
{
	int t2,t3;
	printf("�Ǹ�\t\t\t�m�W\t�{�]\t�|�p\t�p��\t�`���Z\n");	//�L�X �Ǹ� �m�W �{�] �|�p �p�� �`���Z 
	
	for(int s=0;s<=49;s++)
	{
		sum[i][1] = (c[i][0]+c[i][1]+c[i][2])/3.0;
			for (int k=0;k<=49-k;k++)	//�p�G �U�@�Ӧ��Z�j�� �o�Ӧ��Z  ��� 
			{
				for(int y=0;y<=k-y;y++)
				{
					if(sum[y+1][1]>sum[y][1])
					{
						t1 = sum [y][1];	//�`���Z 
						sum [y+1][1] = sum [y][1];
						sum [y][1] = t1;
						
						t2 = a[y][10];	//�Ǹ� 
						a[y+1][10] = a[y][10];
						a[y+1][10] = t2;
						
						t3 = b[y][10];	//�m�W 
						b[y+1][10] = b[y][10];
						b[y+1][10]= t3;
					}
					if(c[y+1][0]>c[y][0])	//�{�] ���Ƥ�j�p 
					{
						t1 = c[y][0];
						c[y][0] = c[y+1][0];
						c[y+1][0] = t1;
					}
					if(c[y+1][1]>c[y][1])	//�{�] ���Ƥ�j�p 
					{
						t1 = c[y][1];
						c[y][1] = c[y+1][1];
						c[y+1][1] = t1;
					}
					if(c[y+1][2]>c[y][2])	//�{�] ���Ƥ�j�p 
					{
						t1 = c[y][2];
						c[y][2] = c[y+1][2];
						c[y+1][2] = t1;
					}
				}	
			}
	}
	for(i=0;i<=49;i++)
	{
		if(a[i][0]!='#')
		{
			sum[i][1] = (c[i][0]+c[i][1]+c[i][2])/3.0;
			printf("%9s\t        %s\t%.1lf\t%.1lf\t%.1lf\t %.1lf\n",a[i],b[i],c[i][0],c[i][1],c[i][2],sum[i][1]);
			// �L�X �Ǹ� �m�W �{�] �|�p  �p��  �`���Z
		}
		else
		{
			break;
		}
	}
	system("pause");
	system("cls");
	printf("�O�_�~��H(Y/N)�G");	//�O�_�~�� 
	scanf("%c",&t);	//��J 
	fflush(stdin);	//�M�� 
	
	if(t == 'Y' || t == 'y')	//�p�G�O Y y 
	{
		main();	//�i�J �D�{�� 
	}
	else	//�_�h 
	{
		exit(0);	//���}�C 
	}
	
}
