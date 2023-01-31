/*
 * 找到一个符合条件的最小的正整数，这个正整数个位是4，如果把个位的数字4移到首位，
 * 形成的数字正好是原数字的4倍。
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 把一个数字的个位调换到首位
 */
int swapDigits(int);
/*
 * 返回一个整数的位数
 */
int bit(int);
int main(void)
{
    int n = 1000000;
    while ( n > 10){
        if(n % 10 != 4){
            n--;
            continue;
        }
        int a;
        a = swapDigits(n);
        if(a == 4*n){
            printf("The eligible number is %d\n",n);
            break;
        }
        n--;
    }

	return EXIT_SUCCESS;
}
int swapDigits(int d)
{
    int a = d % 10;
    int b = d / 10;
    int i = bit(d);
    int x = pow(10,i-1);
    return (a*x + b);
}
int bit(int d)
{
    int bit = 1;
    int n = 1;
    n = d / 10;

    while(n > 0)
    {
        bit++;
        n /= 10;
    }
    return bit;
}
