#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define name "�t�O�G��ޤ@�B\n�Ǹ��GB10610020\n�m�W�G���m��\n"
void menu();	//�ۭq��� ��� 
void HW91();	//�ۭq��� HW91 
void HW92();	//�۩w��� HW92 
void HW94();	//�ۭq��� HW94 
int main()
{
	menu();
	system("pause");
	return 0;
}

void menu()
{
	int a;		//�ŧi a 
	do
	{
		printf(name);		//�L�X�ӤH��� 
		printf("�w��Ө� HW9 �@�~�C��A�ݿ�J�H�U�Ʀr�i�J�@�~�C\n");	//�L�X	�w��Ө� HW9 �@�~�C��A�ݿ�J�H�U�Ʀr�i�J�@�~�C 
		printf("A.HW9-1\n");	//�L�X A.HW9-1
		printf("B.HW9-2\n");	//�L�X B.HW9-2
		printf("C.HW9-3\n");	//�L�X C.HW9-3
		printf("Q.����\n");		//�L�X Q.����
		printf("�п�J�H�W�@�~�s���G");	//�L�X �п�J�@�~�s�� 
		scanf("%c",&a);	//��J���x�s��a 
		fflush(stdin);	//�M���Ȧs�� 
		system("cls");	//�M�ŵe�� 
		
		switch(a)	// �ϥ� Switch 
		{
			case 65 :	// ��J�O ascii 65 
			case 97 :	// ��J�O ascii 97 
				HW91();	//�]�Xhw91 
			break;	
			case 66 :	//	��J�O ascii 66  
			case 98 :	// 	��J�O ascii 98 
				HW92();	//�L�X hw92 
			break;	 
			case 67 :	// ��J�O ascii 67 
			case 99 :	// ��J�O ascii 99 
				HW94();	//�L�X hw94 
			break;
	
			case 81 :
			case 113:
				printf("���}�o�I\n");
			break;
			default:
				printf("�Э��s��J�I�d����~�C\n");
				system("pause");
				system("cls");
			break;
		}
	}while(a!=81 && a!=113);
	{
	}
}
void HW91()
{
		int i=0,j=0,y=0,c=0,n=0,s=0;	//�ŧi 
	int a[4],b[4];	//�ŧi �q���}�C �P ���a�}�C 
	do	
	{
		do
		{
			srand(time(0));	//�ü� 
			for(i=0;i<=3;i++)	
			{
				a[i]=rand()%10;	//0~10�ü� 
				for(j=0;j<i;j++)	 //��ﭫ�� 
				{
					if(a[i]==a[j])	//�q���p�G���@�� 
					{
						a[j]=-1;	 
						break;
					}
					if(a[j]==-1)	//break; 
					{
						break;
					}
				}
			}
			
		}while(a[j]==-1);	
		{
			system("cls");	//�M���e�� 
			printf("�D�ءG");	//�L�X�D�� 
			for(i=0;i<=3;i++)	 
			{
				printf("%d",a[i]);	//�L�X�q���X���D�ؼƦr 
			}
			printf("\n");	//���� 
		}
		for(i=1;i<=10;i++)
		{
		printf("�п�J4���:");	//�L�X�п�J4���:
		scanf("%d",&n);	// �ϥΪ̿�J 
		fflush(stdin);	//�M���Ȧs 
		if(n>99&&n<10000)	//�p�G �b�d�� 
		{
			y=0,s=0;	//�C���q�D��l A,B 
			b[0]=n/1000;	//�d�� 
			b[1]=n%1000/100;	//�ʦ� 
			b[2]=n%100/10;	//�Q�� 
			b[3]=n%10/1;	//�Ӧ� 
			for(j=0;j<=3;j++)
			{
				for(s=0;s<=3;s++)	//�ˬd�O�_���D�ئ��۹� 
				{
					if(b[j]==a[s])	
					{	
						if(b[j]==a[j])
						{
							y++;	//�Y�� y++ �o�O����Ƭ۹� �ҥH A++ 
						}
						else
						{
							c++;	//�Y���� c++ �N�O B++
						}
					}
				}
			}
			printf("%dA %dB ��J��%d��\n",y,c,i);	//�L�X �XA�XB 
			if(y==4)	//�p�G���� 
			{
				printf("���߲q���F\n");	//�L�X���߲q���F 
				break;
			}
		}	
	
		else
		{
			printf("��J���~\n");	//�_�h��J���~  
			i--;	//i--; 
		}
		if(i==10)	//�p�G��J�W�L�Q�� 
		{
		printf("�W�X��J���ơA�C�����ѡC\n�Ы����N���䭫���C\n");	//�L�X �W�X��J���ơA�C�����ѡC\n�Ы����N���䭫���C
	
		system("pause");
		system("cls");
		}	
		}
	}while(y!=4);
	{
		
	}
	system("pause");
	system("cls");
}
void HW92()
{
	int W=0,i=0,j=0,t1=0,t2=0,t3=0,t4=0,z=-1,x=99;	//�ŧi�ܼ� w,i,j,t1,t2,t3,t4,z,x 
	double sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,e=0,f=0,g=0,h=0;	//�ŧi�ܼ� sum , sum1 ~ sum7
	double a[3][4]=
				{
					{18.2,17.3,15.0,13.4},
					{23.8,25.1,20.6,17.8},
					{20.6,21.5,18.4,15.7}
				};	
	//////////////////////////	�ŧi�}�C 
	printf("(1).\n\n");	//��X�Ĥ@�D 
	for(W=0;W<=3;W++)	//�j�� ��W�L�X�P�� 
	{
		printf("\t�P�� %d ",W+1);	//�L�X�P�� �X 
	}
	printf("\n");	//�Ů� 
	
	for(i=0;i<=2;i++)	//�j��ɬq���h 
	{
		printf("�ɬq %d\t",i+1);	//�L�X �ɬq 
		for(j=0;j<=3;j++)	//�j�� �ū� 
		{	
			printf(" %.1lf\t",a[i][j]);	//�L�X�}�C�����ū׭� 
			if(a[i][j]>z)	//�p�G	a[i][j]>z z=-1 �j�� -1 ��A 
			{
				z=a[i][j];	//�x�s�bz 
				t1=i;	// t1 �o�� ���� i 
				t2=j;	// t2 �o�� ���� j 
			}
			if(a[i][j]<x)	//�p�G a[i][j]<x x=99 �p�� 99 �� 
			{
				x=a[i][j];	//�x�s�b x 
				t3=i;	//�o�� t3 �x�s i 
				t4=j;	//t4 �x�s j 
			}
		}
		sum1+=a[i][0];	//�N �P���@���ūץ[�_�� 
		sum2+=a[i][1];	//�N �P���G���ūץ[�_�� 
		sum3+=a[i][2];	//�N �P���T���ūץ[�_�� 
		sum4+=a[i][3];	//�N �P���|���ūץ[�_�� 
		sum5=a[0][0]+a[0][1]+a[0][2]+a[0][3];	//�N �ɬq�@���ūץ[�_�� 
		sum6=a[1][0]+a[1][1]+a[1][2]+a[1][3];	//�N �ɬq�G���ūץ[�_�� 
		sum7=a[2][0]+a[2][1]+a[2][2]+a[2][3];	//�N �ɬq�T���ūץ[�_�� 
		
		
		printf("\n");
	}
	printf("(2).\n�C�駡�šG\n\t�P�� 1\t �P�� 2\t �P�� 3\t �P�� 4\n \t%.3lf\t %.3lf\t %.3lf\t %.3lf \n",sum1/3,sum2/3,sum3/3,sum4/3);
	////�ĤG�D �L�X �P�� 1 ~ 4 ���ūק��� 
	printf("(3).\n");		//�L�X�ĤT�D 
	printf("�ɬq 1 �������ūסG%.3lf �� \n",sum5/4);	//�L�X �ɬq 1 �������ū�
	printf("�ɬq 2 �������ūסG%.3lf �� \n",sum6/4);	//�L�X �ɬq 2 �������ū�
	printf("�ɬq 3 �������ūסG%.3lf �� \n",sum7/4);	//�L�X �ɬq 3 �������ū�
	
	printf("(4).\n");	//�L�X�ĥ|�D 
		printf("�ū׳̰�����l�G�P�� %d�A�ɬq %d\n",t2+1,t1+1);	//�L�X  �ū׳̰�����l�G�P�� %d�A�ɬq %d
	printf("(5).\n");	//�L�X�Ĥ��D 
		printf("�ū׳̧C����l�G�P�� %d�A�ɬq %d\n",t4+1,t3+1);	//�L�X  �ū׳̧C����l�G�P�� %d�A�ɬq %d
	
	system("pause");
	system("cls");
} 
void HW94()
{
		int b=0,c=0,n=0,z=0,o1=0,o2=0;	//�ŧi
	int a[13][13] = {0}; 	//�̤j13
	printf("�п�J3~13���_�ơG");	//��X 	�п�J3~13���_�ơG
	scanf("%d",&n);	//���ϥΪ̿�J �x�s��n 
	fflush(stdin);
    
	if(n%2==0 || n<3 || n>13)	//�p�G  n%2==0 �� n<3 �� n>13
	{
		printf("�Э��s��J�A���A�d�򤺡C\n");	//�L�X �Э��s��J�A���A�d�򤺡C 
	}
	else	//�_�h 
	{
		c=(n-1)/2;	// �L�X�Ʀr 1 ����m 
		for(z = 1; z <= n*n; z++) //�j�� ��� 
		{ 
	   		a[b][c]=z;	 //�C�Ӱ}�C���s�b�� z 
	   		o1=b;	//�ª�b �x�s�bo1 
	   		o2=c;	//�ª�c �x�s�bo2 
	   		b--;	//b����m 
	   		c++;	//b����m 
	   		if(b<0)	//�p�G�W�X�� 
	   			b=n-1;	//�|�]�X�b�̤U�� 
	   		if(c>=n)	//�p�G�W�X�C 
	   			c=0;	//�|�]�X�b�̥��� 
	   		if(a[b][c]!=0)	//�˴��O�_���Ʀr 
	   		{	
	   			c=o2;	 
				b=o1+1;
				if(b>=n)
					b=0;	
			}
	   		
		} 	
		for(b = 0; b <= n-1; b++) 	//�ΰj��L�X�Ʀr 
		{ 
	        for(c = 0; c <= n-1; c++)  
	            {
					printf("%3d\t", a[b][c]);	//�]���̤j�O�T��� �ϥ�%3d 
				 }	
				 printf("\n");	//���� 
		}
    }
	system("pause");
	system("cls");
} 
