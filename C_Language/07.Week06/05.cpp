/*
HW7-5.�ռg�@�Ө��double square(double x)�A���D�{����椤��ܥ��D��A
�|�����ϥΪ̦b�D�{������J�@�ӯB�I�ƪ��Ʀrx�A�h�D�{���|�I�ssquare (x)�A
�M��square ()��Ʒ|�p��Xx�����赲�G�A�öǦ^��D�{���ѥD�{����ܥXX�����赲�G�C
(���D�n���X�]�t�p�ƪ����赲�G)
*/
#include <stdio.h>
#include <stdlib.h>
double square();
double square(double a);
int main()
{
	square();
	
	system("pause");
	return 0;
}

double square()
{
	double a;
	printf("�п�J�@�ӯB�I�ƪ��Ʀrx�G");
	scanf("%lf",&a);
	fflush(stdin);
	if(a<1)
	{
		printf("%lf \n",square(a));
	}
	else
	{
		printf("��J���~�A�п�J�B�I�ơC\n");
	}
}

double square(double a)
{
	return a*a;
}
