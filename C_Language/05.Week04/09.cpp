/*
HW5-9.�Шϥ�for���O�]�p�@�{�����ϥΪ̿�Jn�A
�æL�X�U�����Ϯ�(�U�Ϭ�n=5����ܪ�n�h�˥��T���� 
�i�Ǹ����X��4,8,7,0�а����D�j

EDCBABCDE
 DCBABCD
  CBABC
   BAB
    A
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,j=0,n=0; // �ŧii,j,n
	printf("�п�Jn:");	//�L�X �п�J:n 
	scanf("%d",&n);	//���ϥΪ̿�Jn�� 
	fflush(stdin); //�M���Ȧs�� 
	
	for(i=0;i<=n;i++)  //�ˤT���� 
	{  
        for(j=1;j<=i;j++) //����ťռơA�̷� i++ �ťջ��W 
		{ 
			printf(" ");    
		} 
		for(j=n-i-1;j>=0;j--) //�L�X����^��Ʀr  
       	{ 
		    printf("%c",65+j);	//�qA�}�l�L EDCBA �̧ǱƤU�h 
        } 
		for(j=1;j<=n-i-1;j++)  //�L�X�k��^��Ʀr 
        { 
		    printf("%c",65+j); 	//�qB�}�l�A�ҥH��l�ȳ]1 
		} 
			printf("\n");
    }

	system("pause");
	return 0;
 }

