/*
08.�o����XX�j�j���w�����Ʀr�������A
�ЧA�ϥ�for�j����O���o�g�@�{����L�X�@�ӳ̤p���T���ơA
��T�ӼƦr�����褧�M���n����Ӽƴ�h100�A
�Y XYZ - 100 = X2 + Y2 + Z2  (2�O����) 

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;					  //�ŧi sum ���� 0
	double x = 0, y = 0, z = 0;		  //�ŧi���B�I�� x,y,z ������0
	for (int i = 100; i <= 1000; i++) //�j�� �̤p���T��� �L�ҥu�� 100~999
	{
		x = i / 100;		  // �� X = �ʦ��
		y = i % 100 / 10;	 // �� Y = �̦��
		z = i % 100 % 10 / 1; // �� Z = �Ӧ��
		sum = i - 100;		  // XYZ - 100 ��i sum

		if (sum == x * x + y * y + z * z) //�p�G sum ���� x*x + y*y +z*z
		{
			printf("�̤p���T���� = %d \n", i); //�L�X �̤p���T����
			break;								 //�Ȱ�
		}
	}

	system("pause");
	return 0;
}
