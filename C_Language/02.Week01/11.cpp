/*
HW2-11:�Шϥ�if��if-else���O���g�@�{���A���ϥΪ̥i����L��J�@�Ӧr���A
�M��[�H�P�_��J���r���O�p�g�^��r���B�j�g�^��r���B�Ʀr�B�Ψ�L�Ÿ��C
�Y�O��J�p�g�^��r���A�h���"�z��J���r���O�p�g�^��r��"�A
�Y�O�j�g�^��r���B�Ʀr�Ψ�L�Ÿ��A�h���O���"�z��J���r���O�j�g�^��r��"
�B"�z��J���r���O�Ʀr"��"�z��J���r���O��L�Ÿ�"�C
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char i;								//�ŧi i �r�� 
	printf("�ЧA��J�@�Ӧr���G");		//�L�X �ЧA��J�@�Ӧr�� 
	scanf("%c",&i);			//��J �ѨϥΪ̥���L��J�r�� 
	fflush(stdin);			//�M���Ȧs�� 
	
	if (i>=48 && i<=57) 					// �P�_������ �Ʀr�r�� ASCII �X�d�� �O�_���T �A���T�h����
		printf("�A��J���r���Ʀr�C\n"); 		//�L�X �ϥΪ̿�J���O�r���Ʀr 
		else if (i>=65 && i<=90) 				// �P�_������ �j�g�^�� ASCII �X�d�� �O�_���T �A���T�h���� 
			printf("�A��J���r���O�j�g�^��C\n");		//�L�X �ϥΪ̿�J���O�j�g�^�� 
			else if (i>=97 && i<=122)					// �P�_������ �p�g�^�� ASCII �X�d�� �O�_���T �A���T�h����
				printf("�A��J���r���O�p�g�^��C\n");	//�L�X �ϥΪ̿�J���O�p�g�^�� 
					else if (0<i<127) 	// �P�_������ ��L�Ÿ� �� ASCII �X�d�� �O�_���T �A���T�h���� 
						printf("�A��J���r���O��L�Ÿ��C\n"); 	//�L�X �ϥΪ̿�J���O��L�Ÿ� 
	system("pause");
	return 0;
}

