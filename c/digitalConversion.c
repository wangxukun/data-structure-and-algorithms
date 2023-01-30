/*
 * 找到一个符合条件的最小的正整数，这个正整数个位是4，如果把个位的数字4移到首位，
 * 形成的数字正好是原数字的4倍。
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int i=4; i<1000; i++)
	{
		if(i % 10 == 4)
			printf("%3d ",i);
		if(i % 100 == 94)
			puts("");
	}
	printf("\n");

	return EXIT_SUCCESS;
}
