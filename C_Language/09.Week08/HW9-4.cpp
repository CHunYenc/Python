/*
HW9-4�ШϥΤG���}�C���g�@�ӵ{���A�����ϥΪ̿�J�@�Ӥ���3~13���_�ƼƦrn
(���P�_�Ʀr�O�_�ŦX���϶�, �Y���ŦX�ݭn��ܿ��~�T��)�A
��Ʀr��3~13���_�ơA�q���|����n x n ���G���}�C���A���U�ݭn�z�L�A���g���{�����q���N1~n2���Ʀr�A
�v�@��J�o n x n����l���A�Ҷ�J���Ʀr�Ҥ��୫�ơA�ӥB�Ʀr�񧹫�ݭn�T�O�C�@��n�ӼƦr�[�`���M�B
�C�@�Cn�ӼƦr�[�`���M�A�٦����﨤�un�ӼƦr���[�`���M���ݭn�۵��C�i���D�C��P�ǳ��ݭn�@���j
(�Ҧp�A�ϥΪ̿�Jn=5, �h�{���|����5 X 5 = 25�檺�G���}�C���A�M��̫�C�@��B�C�@�C�B�U�﨤�u��5�ӼƦr�[�`���|����65) 
*/

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int b=0,c=0,n=0,i=0,j=0,z=0;	//�ŧi
	int a[13][13] = {0}; 	//�̤j13
	printf("�п�J3~13���_�ơG");	//��X 	�п�J3~13���_�ơG
	scanf("%d",&n);	//���ϥΪ̿�J �x�s��n 
	fflush(stdin);
    
	if(n%2==0 || n<3 || n>13)	//�p�G  n%2==0 �� n<3 �� n>13
	{
		printf("�Э��s��J�A���A�d�򤺡C\n");	//�L�X �Э��s��J�A���A�d�򤺡C 
	}
	else	//�_�h 
	{
		j=(n+1)/2;	// �L�X�Ʀr 1 ����m 
		for(z = 1; z <= n*n; z++) //�j�� ��� 
		{ 
	        if((z % n) == 1)  
	            i++; 
	        else 
			{ 
	            i--; 
	            j++; 
	        } 
	
	        if(i == 0) 
	            i = n; 
	        if(j > n) 
	            j = 1; 
	
	        a[i][j] = z; 
	    
		} 	
	    
		for(b = 1; b <= n; b++) 
		{ 
	        for(c = 1; c <= n; c++) 
	            {
					printf("%2d ", a[b][c]); 
				 }	
				 printf("\n");
		}
    
    } 

    return 0; 
}
