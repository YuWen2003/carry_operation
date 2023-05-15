#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b; /* 宣告變數 a, b */

    while(scanf("%d %d", &a, &b) != EOF){ /* 持續讀取數字直到 EOF */

        if(a == 0 && b == 0){ /* 如果讀到 0 0 就跳出迴圈 */
                break;
        }

        int carry = 0; /* 宣告變數 carry, 設定初始進位次數為 0 */
        int sum = 0; /* 宣告變數 sum, 設定初始總和為 0 */
        int flag = 0; /* 宣告變數 flag, 設定初始旗標為 0, 不需進位 */

        while(a != 0 || b != 0){ /* 當 a 或 b 不等於 0 就繼續迴圈 */

            int x = a % 10, y = b % 10; /* 取出 a 和 b 的最後一位數字 */
            sum = x + y + flag; /* 加上目前的進位旗標 */

            if(sum >= 10){ /* 如果總和大於等於 10, 就需要進位 */
                carry++; /* 進位次數加 1 */
                flag = 1; /* 設定旗標為 1, 需進位 */
            }
            else{
                flag = 0; /* 設定旗標為 0, 不需進位 */
            }

            a /= 10; /* 去掉 a 的最後一位數字再進入下一輪迴圈 */
            b /= 10; /* 去掉 b 的最後一位數字再進入下一輪迴圈 */
        }

        if(carry == 0){ /* 如果進位次數為 0, 輸出 "No carry operation." */
            printf("No carry operation.\n");
        }
        else if(carry == 1) { /* 如果進位次數為 1, 輸出    "1 carry operation." */
            printf("1 carry operation.\n");
        }
        else{ /* 如果進位次數大於 1, 輸出 "%d carry operations.", carry */
            printf("%d carry operations.\n", carry);
        }
    }

    return 0; /* 結束程式 */
}

/*THIS CODE IS MY OWN WORK. IT WAS WRITTEN WITHOUT CONSULTING CODE WRITTEN BY OTHER STUDENTS OR ANY ONE WHO IS NOT AWARE OF MY REFERENCE. 410125034 陳俞妏 */
