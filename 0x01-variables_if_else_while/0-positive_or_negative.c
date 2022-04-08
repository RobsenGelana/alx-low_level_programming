#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* This code should return positive or negative number */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0){
		printf("%d, is positive", n);
	}else if(n > 0){
		printf("%d, is negative", n);
	}else if(n == 0){
		printf("%d, is zero", n);
	}else{
		priontf("Invalid number")
	}
	return (0);
}
