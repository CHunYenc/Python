/*
02: �г]�p�@�ӵ{���A�u��Q�Ψ��for �Ψ��while�j����O�A
���ϥΪ̿�J�@�ӼƦrn��(�ݤ���3~9����)�A
�K�i�L�X�U�����Ϯ�(�U�Ϭ�n=5)�G�i����:�i�ϥ�abs()�ƾǨ�ơj
        1
       2 2
      3   3
     4     4
    5       5
     4     4
      3   3
       2 2
        1
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a=1;	//�ŧi n 
	printf("�п�J�@�ӼƦrN (�ݤ���3~9����)�G");	//���ϥΪ̿�J N �� 
	scanf("%d",&n);	//��J���Jn�� 
	fflush(stdin);	//�M���Ȧs
	
	if(n>9 || n<3)
	{
		printf("��J���~�C\n");
	}
	else
	{
		for(int i=n;i>=-n;i--)	//�ŧi i=2  
		{
			if(i==-1 || i==0)
				{
					continue;
				}
			for(int j=n;j>=-n;j--) 	//�ŧii=2 	�Q�Ψ�� for �Ӳ��� �@�ӥ���� 
			{	a++;
				if(j==-1 || j==0)
				{
					continue;
				}
				else if(abs(i)==n && j==n-n+1)
				{
					printf("1");
				}
					else if(abs(i)==n-1 && abs(j)==n-n+2)
					{
						printf("2");
					}
						else if(abs(i)==n-2 && abs(j)==n-n+3)
						{
							printf("3");
						}
							else if(abs(i)==n-3 && abs(j)==n-n+4)
							{
								printf("4");
							}
								else if(abs(i)==n-4 && abs(j)==n-n+5)
								{
									printf("5");
								}
									else if(abs(i)==n-5 && abs(j)==n-n+6)
									{
										printf("6");
									}
										else if(abs(i)==n-6 && abs(j)==n-n+7)
										{
											printf("7");
										}
											else if(abs(i)==n-7 && abs(j)==n-n+8)
											{
												printf("8");
											}
												else if(abs(i)==n-8 && abs(j)==n-n+9)
												{
													printf("9");
												}
				else
					printf(" ");
			}
			printf("\n");	//���� 
		}
	}
	system("pause");
	return 0;
}
