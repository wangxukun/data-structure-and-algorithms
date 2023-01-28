/*
 * File: fib.c
 * -----------
 *  This program lists the terms in the Fibonacci sequence with
 *  indices ranging from MinIndex to MaxIndex.
 */
#include <stdio.h>
#include <stdlib.h>

/* Constants */
#define MinIndex 0
#define MaxIndex 12

/* Private function prototypes */
int fib(int n);

/* Main program */
int main(void)
{
	int i;
	puts("This program lists the Fibonacci sequence.");
	for(i = MinIndex; i <= MaxIndex; i++){
		printf("fib(%d) ", i);
		if(i < 10)
			printf(" ");
		printf(" %4d\n", fib(i));
	}

	return EXIT_SUCCESS;
}

/*
 * Function: fib
 * Usage: t = fib(n);
 * ------------------
 * This funtion returns the nth term in the Fibonacci sequence
 * using a recursive implementation of the recurrence relation
 *
 *         fib(n) = fib(n - 1) + fib(n - 2)
 */
int fib(int n)
{
	if(n < 2)
		return n;
	else
		return (fib(n - 1) + fib(n - 2));
}
