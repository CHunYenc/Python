/*
01: �г]�p�@�ӵ{���A�u��Q�Ψ��for �Ψ��while�j����O�A
���ϥΪ̿�J�@�ӼƦrn��(�ݤ���3~9����)�A�K�i�L�X�U�����Ϯ�(�U�Ϭ�n=5)
�G�i����:�i�ϥ�abs()�ƾǨ�ơj
    543212345
     4321234
      32123
       212
        1
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;	//�ŧi n 
	printf("�п�J�@�ӼƦrN (�ݤ���3~9����)�G");	//���ϥΪ̿�J N �� 
	scanf("%d",&n);	//��J���Jn�� 
	fflush(stdin);	//�M���Ȧs 
	
	if(n<3 || n>9)	//�p�G n<3 n>9 
		{
			printf("��J���~�C\n");	//�L�X ��J���~�C 
		} 
	else	//�_�h 
	{
		for(int i=0;i<n;i++)	//�ŧi�j�� i=�h�� i�|�p�󵥩��J�Ȫ��h�� 
		{	
			for(int j=n;j>=-n,j>=i-n;j--)	//�ŧi�j�� j=n n-1 n-2 n-3 ���� -n �L�Ĥ@�h 
			{
				if(j>=48 || j<=57)	//�p�G �ŦX ASCII�X  48~58 �Ʀr 
				{
					if(j==0 || j==-1)	//�p�G j �L�X 0 �� -1 �����L �A -1 �]abs�ҥH�]����1
					{
						continue;	//�~�� 
					}
					if(i>=1 && j>=n-(i-1)) //���U���ťժ��T���Ϊ��W�� 
					{
						printf(" ");	//�L�X�ť� 
						continue;	//�~�� 
					}		
				printf("%c",abs(48+abs(j)));	//�L�XASCII�X ���ץ��t 
				}
			}
			printf("\n");	//���� 
		}
	}
	system("pause");
	return 0;
 }

