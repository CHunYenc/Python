/*
05:�Шϥ�rand()�üƨ禡���O���g�@�{���A
�����{���i�H����n�նüƲզ����Ǹ�(n�ѨϥΪ̱q��L����J�ȨM�w)�A
�C�@�էǸ���10�Ӧr���զ�(�Ҧp: Tx8Qop9NUW)�A
�䤤���C�Ӧr���u��O�^��j�g�r���B�^��p�g�r����0~9���Ʀr�զX�Ӧ��A
���i�H����L�D�^��μƦr���r���Ÿ��C
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,a;	//�ŧin,a
	printf("�п�J�A�n���ʹX�ժ��Ǹ��G");	//�L�X �п�J�A�n���ʹX�ժ��Ǹ��G 
	scanf("%d",&n);	//��J�᪺�� ��Jn 
	fflush(stdin);	//�M���Ȧs 
	
	srand(time(0));	// �üưѦ��I�� time 
	for(int i=1;i<=n;i++)	//���Ͱj��  == �ϥΪ̿�J�X�ժ��ƶq 
	{
		int z=1;	//�ŧiz=1 
		printf("�� %d �� \n",i);	//�L�X ���ʹX��	
		while(z<=10)	//Z==�ýX �n�����D�حn�D���Q�ӶýX 
		{
			a=rand()%127+1;	//a�üƪ��d��  
			if((48<=a && a<=57) || (65<=a && a<=90) || (97<=a && a<=122)) //�p�G ASCII�X �Ʀr�B�j�g�^��B�p�g�^�� 
			{
				printf("%c",a);	//��X ASCII ���ͪ� �r���μƦr 
			z++; //z++ ���L�@�Ӥ@�Ӧr���L ���|�W�L10�Ӧr�� 
			}
		}

	printf("\n");	//���� 
	}
	
	system("pause");	
	return 0;
 }

