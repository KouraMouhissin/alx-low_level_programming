#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (n > 5)
printf("Last digit of %d is and is greater than 5\n", n);
else if (n < 6 && n != 0)
printf("Last digit of %d and is less than 6 and not 0\n", n);
else if (n == 0)
printf("Last digit of %d is 0\n", n);
/* your code goes there */
return (0);
}

