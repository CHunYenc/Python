/*HW7-3.�иռg�@�Ө��void num(int)�A���D�{����椤��ܥ��D��A
�|�����ϥΪ̦b�D�{������J�@�Ӥ���10~100���Ʀrn�A�p�G�W�L���d��|���Ϳ��~�T���A
�Y�ŦX10~100���Ʀr�A�h�D�{���|�I�snum(n)�A�M��num()��Ʒ|�C�X���Ƥ��Ҧ����]�ơC 
�i�����j���D�ةһ����]�Ƨ������]�ơA���Ҽ{�t�]�ƪ����p�C

[�d�Ҥ@]�п�J�@��10~100���Ʀr�G100
100���Ҧ��]�Ƭ�1 2 4 5 10 20 25 50 100

[�d�ҤG]�п�J�@��10~100���Ʀr�G11
11���Ҧ��]�Ƭ�1 11
*/
#include <stdio.h>
#include <stdlib.h>
void num();
void num(int a);
int main()
{
	num();
		
	system("pause");
	return 0;
}

void num()
{
	int a=0;
	printf("�п�J�@�Ӥ���10~100���Ʀrn�G");
	scanf("%d",&a);
	fflush(stdin);
	
	if(a<10 || a>100)
	{
		printf("���~�T���C\n");		
	}
	else
	{	
		num(a);	
	}
}
void num(int a)
{
	printf("%d ���]�Ʀ� ",a); 
		for(int i=1;i<=a;i++)
		if (a%i == 0)
        {
            printf("%d ",i);
        }	
}
