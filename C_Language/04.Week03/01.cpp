/*
01.�ӭ�xx�Q�n�@�ӯ�έp�ǥͦ��Z���Ū��{���A
�ЧA�ϥ�for�j����O���g�@�{���A���ϥΪ̯����L��J10�Ӿǥͪ����Z(���Z���ର�t)�A
���Z�b0~59����C�A60~75����B�A76~100����A�A�̫�N�o��A�BB�BC���H�ƦL�X�C

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade = 0, A = 0, B = 0, C = 0, Error = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("�п�J %d ��ǥͪ����Z�G", i + 1);
        scanf("%d", &grade);
        switch (grade)
        {
        case 0 ... 59:
            C++;
            break;
        case 60 ... 75:
            B++;
            break;
        case 76 ... 100:
            A++;
            break;
        default:
            Error++;
        }
    }
    printf("A:%d\tB:%d\tC:%d\tError:%d\n", A, B, C, Error);

    return 0;
}