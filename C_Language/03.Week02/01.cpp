/*
01:�Шϥ�if��if-else���O���g�@�{���A
���ϥΪ̥i����L��J�T�ӼƭȡA�M�����T�ӼƦr���j�p�A
�̫�Ш̷ӼƦr�j�p�A�Ѥp��j�ƧǨ���ܩ�e�����C
*/	

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c; 							//�ŧi�ܼ� a,b,c 
	printf("��J�Ĥ@�Ӽƭ� A�G");		//�L�X  ��J�Ĥ@�Ӽƭ� A�G 
	scanf("%d",&a);						//�ϥΪ̿�J A �� 
	fflush(stdin);						//�M�� �Ȧs 
	
	printf("��J�ĤG�Ӽƭ� B�G");		//�L�X  ��J�ĤG�Ӽƭ� A�G
	scanf("%d",&b);						//�ϥΪ̿�J B �� 
	fflush(stdin);						//�M�� �Ȧs
	
	printf("��J�ĤT�Ӽƭ� C�G");		//�L�X  ��J�ĤT�Ӽƭ� A�G
	scanf("%d",&c);						//�ϥΪ̿�J C ��
	fflush(stdin);						//�M�� �Ȧs
	
	
	if(a<b && b<c)						//�p�G a<b �M b<c 
		printf("�z��J���� A<B<C \n");	//�h�|�L�X �z��J���� A<B<C 
	else if(a<c && c<b)						//�_�h�p�G a<c �M c<b 
		printf("�z��J���� A<C<B \n");		//�h�|�L�X �z��J���� A<C<B 
		else if(b<a && a<c)						//�p�Gb<a �M a<c 
		printf("�z��J���� B<A<C \n");			//�h�|�L�X �z��J���� B<A<C 
			else if(b<c && c<a)						//�_�h�p�G b<c �M c<a 
			printf("�z��J���� B<C<A \n"); 			//�h�|�L�X �z��J���� B<C<A 
				else if(c<a && a<b)						//�_�h�p�Gc<a �M a<b 
				printf("�z��J���� C<A<B \n");			//�h�|�L�X �z��J���� C<A<B 
					else if(c<b && b<a)						//�_�h�p�G c<b �M b<a 
					printf("�z��J���� C<B<A \n");			//�|�L�X �z��J���� C<B<A
		
		
	system("pause");
	return 0;
}
