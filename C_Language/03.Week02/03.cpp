/*
03:�Шϥ�if��if-else���O�]�p�@�{���A�ϥΪ̨̧ǿ�J�ۤv�������P�魫��ơA
�íp��L��BMI���ƫ�A�P�_�ϥΪ̬O�_�L���ιL���C���D�ؿ�J�������ƭȡA
�H���ج����ABMI��������BMI=�魫/(����)^2�A�Y�魫���H����������C�YBMI�Ȥp��17�A
�h��X�i�z��BMI�Ȭ�xxx�A�z�L���F�j�A�YBMI�Ȥj��24�A�h��X�i�z��BMI�Ȭ�xxx�A�z�L���F�j�A
�YBMI�Ȭ���L�ȡA�h��X�i�z��BMI�Ȭ�xxx�A�z�ܰ��d�j (��:BMI�ݫO�d�ܤp���I��2��) 
�d��1:
�п�J�z�������P�魫��ơG1.67�@90.1
�z��BMI�Ȭ�32.31�A�z�L���F 
�d��2:
�п�J�z�������P�魫��ơG1.67�@40.1
�z��BMI�Ȭ�14.38�A�z�L���F 
�d��3:
�п�J�z�������P�魫��ơG1.67�@50.1
�z��BMI�Ȭ�17.96�A�z�ܰ��d
*/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a,b,c;
	printf("�п�J�A������,�魫��ơG");
	scanf("%lf,%lf",&a,&b);
	fflush(stdin);
		
	if ((b/a)/a<17)
		printf("�z��BMI�Ȭ� %.2lf�A�z�L���F�C\n",(b/a)/a);
	else if (b/a/a>24)
		printf("�z��BMI�Ȭ� %.2lf�A�z�L���F�C\n",(b/a)/a);
		else
			printf("�z��BMI�Ȭ� %.2lf�A�z�ܰ��d�C\n",(b/a)/a);
	

	system("pause");
	return 0;
 }

