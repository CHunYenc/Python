/*
HW2-9:�мg�X�@�{���b��J�@�ӼƦr��A��P�_���ƬO�_���@�Ө��Ƥ���ơC
�i�����j��ƥ]�t����ƩM�t��ơC
�Y���Ƭ��@�Ө��Ƥ���ơA�h��X�G�z��J���Ʀrxxx���@�Ө��ƾ�ơC
�Y���Ƥ����@�Ө��Ƥ���ơA�h��X�G�z��J���Ʀrxxx�����@�Ө��ƾ�ơC

�п�J���P�_���Ʀr�G278
�z��J���Ʀr278�����@�Ө��ƾ��2

�п�J���P�_���Ʀr�G-72
�z��J���Ʀr-72���@�Ө��ƾ�� 
*/ 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("�п�J�@�ӼƦr�G");
	scanf("%d",&a);
	fflush(stdin);
	
	if (-9>a && a>-100 || a>9 && a<100)
	{
		printf("�z��J�� %d ���@�Ө��ƾ�� \n",a);
	}
	else
	{
		printf("�z��J�� %d �����@�Ө��ƾ�� \n",a);
	}
	system("pause");
	return 0;
 }

