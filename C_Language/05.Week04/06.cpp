/*HW5-6.�Шϥ�for���O�]�p�@�{�����ϥΪ̿�Jn�A
�æL�X�U�����Ϯ�(�U�Ϭ�n=5����ܪ�2n-1�h���٧� 
�i�Ǹ����X��0,1,5,6�а����D�j

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *   
*/ 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=0; //�ŧin=0 
	printf("�п�Jn:");	//�L�X �п�Jn: 
	scanf("%d",&n);	//�ϥΪ̿�Jn 
	fflush(stdin); //�M���Ȧs 
	
	for(int a=1;a<=n;a++) //�W��T���� 
	{
    	for(int b=n-a;b>0;b--) //�L�X���W��ť� 
		{
			printf(" ");	//�L�X�ť� 
    	}
    	for(int c=1;c<=1+(2*(a-1));c++)	//��X*�X�{���W�� �� 1+(2*(a-1)) �}�l���Ͱj��   c���W��T���Ϊ��~�� * �� 
    	{
			if(1==c ||c==1+(2*(a-1))) //�p�G 1����c �� c=���� �e�̬����W ��̬��k�W 
			{
        		printf("*");	//�L�X * �� 
        	}
			else	//�_�h  
			{
        		printf(" ");	//�L�X�ť� 
			}
            
            if(c==1+(2*(a-1)))	//�p�G c == ���� 
            {
                printf("\n");	//�N�|���� 
            }
        }
    }
    for(int c=1;c<n;c++)	//�U��T���� 
	{
        for(int b=1;b<=c;b++)	//�٧Υ��U��ťճB 
		{
            printf(" ");	//�L�X�ť� 
        }
        for(int y=1+(n-c-1)*2;y>0;y--)	//��X*�X�{���W�� �� 1+(n - c -1)*2 �}�l���Ͱj��  Y���U��T���Ϊ��~�� * ��
		{   
            if(y==1+(n-c-1)*2 || y-1==0) //�p�Gy=�U��T���Τ��� �� y-1==0 �e�̬����U ��̬����U 
			{
                printf("*");	//�L�X* 
            }
			else
			{
                printf(" ");	//�L�X�ť� 
            }
            if(y-1 == 0)	//�]���|�I��̫�@��*���ҥH�n���� 
            {
                printf("\n"); //�L�X���� 
            }
            
        }
    }
						
	system("pause");
	return 0;
 }

