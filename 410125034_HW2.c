#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b; /* �ŧi�ܼ� a, b */

    while(scanf("%d %d", &a, &b) != EOF){ /* ����Ū���Ʀr���� EOF */

        if(a == 0 && b == 0){ /* �p�GŪ�� 0 0 �N���X�j�� */
                break;
        }

        int carry = 0; /* �ŧi�ܼ� carry, �]�w��l�i�즸�Ƭ� 0 */
        int sum = 0; /* �ŧi�ܼ� sum, �]�w��l�`�M�� 0 */
        int flag = 0; /* �ŧi�ܼ� flag, �]�w��l�X�Ь� 0, ���ݶi�� */

        while(a != 0 || b != 0){ /* �� a �� b ������ 0 �N�~��j�� */

            int x = a % 10, y = b % 10; /* ���X a �M b ���̫�@��Ʀr */
            sum = x + y + flag; /* �[�W�ثe���i��X�� */

            if(sum >= 10){ /* �p�G�`�M�j�󵥩� 10, �N�ݭn�i�� */
                carry++; /* �i�즸�ƥ[ 1 */
                flag = 1; /* �]�w�X�Ь� 1, �ݶi�� */
            }
            else{
                flag = 0; /* �]�w�X�Ь� 0, ���ݶi�� */
            }

            a /= 10; /* �h�� a ���̫�@��Ʀr�A�i�J�U�@���j�� */
            b /= 10; /* �h�� b ���̫�@��Ʀr�A�i�J�U�@���j�� */
        }

        if(carry == 0){ /* �p�G�i�즸�Ƭ� 0, ��X "No carry operation." */
            printf("No carry operation.\n");
        }
        else if(carry == 1) { /* �p�G�i�즸�Ƭ� 1, ��X    "1 carry operation." */
            printf("1 carry operation.\n");
        }
        else{ /* �p�G�i�즸�Ƥj�� 1, ��X "%d carry operations.", carry */
            printf("%d carry operations.\n", carry);
        }
    }

    return 0; /* �����{�� */
}

/*THIS CODE IS MY OWN WORK. IT WAS WRITTEN WITHOUT CONSULTING CODE WRITTEN BY OTHER STUDENTS OR ANY ONE WHO IS NOT AWARE OF MY REFERENCE. 410125034 ���\ʹ */
