#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
long int longType;
long long int longgType;
float floatType;
char charType;
/*printing sizes*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte (s)\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longType));
printf("Size of long long int: %zu bytes\n", sizeof(longgType));
printf("Size of float: %zu byte (s)\n", sizeof(floatType));
return (0);
}
