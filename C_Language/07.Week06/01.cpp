/*
HW7-1.�иռg�@�Ө��void kitty(int)�A���D�{����椤��ܥ��D��A
�|�����ϥΪ̦b�D�{������J�@�Ӥ���3~9���Ʀrn�A�p�G�W�L���d��|���Ϳ��~�T���A
�Y�ŦX3~9���Ʀr�A�h�D�{���|�I�skitty(n)�A�M��kitty()��Ʒ|�۰ʲ���n�檺��Hello Kitty���r�ˡA
���槹����A�ϥΪ̫����N���|��^�D���A���ϥΪ��~���ܭn���檺�䥦�D�ءC
*/ 

#include <stdio.h>
#include <stdlib.h>
void kitty();
void kitty(int a);
int main()
{	
	kitty();
	
	system("pause");
	return 0;
}

void kitty()
{
	int a;
	printf("�п�J�@�Ӥ���3~9���Ʀrn�G\n");
	scanf("%d",&a);
	fflush(stdin);
	
	if(a>=10 || a<=2)
	{
		printf("���b�d�򤺡A�Э��s��J�C\n");
	}
	else
	{ 
		kitty(a);
	} 
}
void kitty(int a)
{
	for(int i=1;i<=a;i++)
		{
			printf("Hello Kitty \n");
		}
}
