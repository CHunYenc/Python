/*
05.�n�_�_�_XX�Q���D���i������(Armstrong��)�����ǡA
�ҿ�Armstrong�ƬO���@�ӤT��ƪ���ơA
��U��Ʀr���ߤ�M(�T���誺�`�M)��n����o�ӤT��ƪ��Ʀr�����C
�Ҧp�G153�O�@��Armstrong�ơA�]��153=13+53+33  
(�Y1���T����+5���T����+3���T����)�C
�Шϥ�for�j����O���g�@�{���A��X�Ҧ���Armstrong�ơC
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, x = 0, y = 0, z = 0;
	for (i = 100; i < 1000; i++)
	{
		x = i / 100;
		y = i % 100 / 10;
		z = i % 100 % 10 / 1;

		if (i == x * x * x + y * y * y + z * z * z)

			printf("%d = %d + %d + %d \n", i, x, y, z);
	}

	system("pause");
	return 0;
}
