/*
HW8-5.�Шϥ�rand()�üƨ禡���O���g�@�{���A�����{���i�H�b�e���W���5�դj�ֳz���X�A
�C�@�դj�ֳz���X�O��6��1~49���Ʀr�ҲզX(�Ҧp: 02 33 17 11 48 26)�A
�p��10���Ӧ�Ʀr�A�Цb��ܪ��Ʀr�e�۰ʸ�0�A�Ҧp2�ݭn�H02��ܡA�T�O�C�ӼƦr����H2��Ƨe�{�C
���~�A���ͪ��ֳz�Ʀr���ݨϥΰ}�C�x�s�A�ýT�O�C�@�ռֳz�����X���|���ۦP���Ʀr���ƥX�{�C�i�C��ǥͳ��n�����j
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	int a,v,n[6];	//�ŧi a,v,n[6]�}�C 
	srand(time(0));	//�üƱq�ɶ��� 
	for(int i=0; i<=5; i++) 	//�ռưj�� 
	{
		for(int j=0; j<=5; j++) //���X�j�� 
		{	
			do	//���� do....while 
			{
				n[j]=rand()%49+1;	//���üƦܸ��X	
				for(v=0;v<=j;v++)	//�ΰj��P�_���L�P���e���Ʀr���� 
				{
					if(n[j]==n[v])	// �P�_ j==v �P�_���L���� 
					break;	//���ƴN��^ 
				}
			}while(v!=j);	//while v �����ƪ����p 
			{
				if(j<10)	//�p�G�p��10 
				{
					printf("%02d\t",n[j]);	//��X ��0�}�Y���Ӧ�� 
				}
				else	//�_�h 
				{
					printf("%2d\t",n[j]);	//��X�Q��ƪ��Ʀr 
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

